#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VCoreTop.h"
#include "VCoreTop___024root.h"
#include <svdpi.h>
#include "VCoreTop__Dpi.h"
#include "verilated_dpi.h"

#include <readline/readline.h>
#include <readline/history.h>

#include <stdlib.h>

#include <tb.h>
#include <difftest.h>
#include <device.h>


const char *reg_name[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
//char ref_so_file="/home/liuweiding/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";

/*
#define clk 100 //set clock  MHZ

#define div_clock(c) ((((10^9)/(c*10^6))*10^3)/2)
*/
//irbuf
#ifdef ITRACE
char ibuf[IRTRACE][128];
static uint32_t irbuf_point=0;
#endif
#ifdef PERF
static uint64_t clock_count=0;
static uint64_t inst_count=0;
#endif
static bool step_print_inst = false;
vluint64_t sim_time=0;

uint64_t *cpu_gpr=NULL;
uint8_t mem[MAX_MEM] __attribute((aligned(4096))) = {};

uint32_t mem_size;
uint32_t *Inst;
uint64_t *CSR;
uint64_t pc;
uint64_t dnpc;
uint32_t inst_valid=0;
uint32_t is_skip_ref=0;

uint32_t state=RUN;

bool ref_is_irq=false;

/*cpu_state *cpu;
cpu_state dut;
*cpu = &dut;*/
cpu_state cpu = {};

void init_disasm(const char *triple); 

extern "C" void pmem_read(long long addr, long long *rdata);
extern "C" void pmem_write(long long addr, long long wdata, char wmask);

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void set_pc( const svOpenArrayHandle inst){

    Inst=(uint32_t *)(((VerilatedDpiOpenVar*)inst)->datap());
    pc = (uint64_t)Inst[1]+((uint64_t)Inst[2]<<32);
    inst_valid=Inst[3];
    dnpc = (uint64_t)Inst[4]+((uint64_t)Inst[5]<<32);
    is_skip_ref = Inst[6];

}
extern "C" void set_csr( const svOpenArrayHandle inst){

    CSR=(uint64_t *)(((VerilatedDpiOpenVar*)inst)->datap());

    
}


#ifdef ITRACE 
static void display_iringbuf(){
    int i=0;
    for(;i<IRTRACE;i++){
        if(i==(irbuf_point+31)%32) printf("-->");
        else printf("   ");

        printf("%s\n",ibuf[i]);
    }
}
#endif
// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("%s:  gpr[%d] = 0x%lx\n", reg_name[i],i, cpu_gpr[i]);
  }
}

void init_mem(char *file_path){
    FILE *fp;
    //printf("%x\n",*(uint32_t *)(mem+0x24c));
    if((fp=fopen(file_path,"rb"))==NULL){
        printf("\033[40;31mload mem fail!\033[0m\n");
        exit(-1);
    }
    fseek(fp,0,SEEK_END);
    int size=ftell(fp);
    mem_size=size;
    printf("\033[40;34mThe image is %s, size = %d\033[0m\n", file_path, size);
    if(size>MAX_MEM){
        printf("fail load mem file size:%d\n",size);
        exit(-1);
    } 
    //printf("----------%d\n",size);
    //uint8_t *temp=mem;
    fseek(fp, 0, SEEK_SET);
    size_t o=fread(mem,size,1,fp);
    if(o==0){
        printf("fail load mem file \n");
        exit(-1);
    }
    
   /* for(int i=0;i<size;i++){
        
        printf("%08x\n",mem[i]);
    }*/
    printf("\033[40;34mload mem finish!\033[0m\n");
    fclose(fp);
    //memset(mem+size,0,sizeof(uint8_t) * (MAX_MEM-size));
    //printf("%x\n",*(uint32_t *)(mem+0x24c));
}


void exe_once(VCoreTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace){
    char p[128];  
    //printf("%08x %016lx\n",inst,pc);
    //printf("%d\n",s->clock);
    do{
        for(int i=0;i<2 && (! contextp->gotFinish());i++){
            s->clock ^=1;
        
            s->eval();
            #ifdef WTRACE
            m_trace->dump(sim_time);
            #endif
            sim_time++;
            
        }
        #ifdef PERF
        clock_count++;
        #endif
        //printf("%lx  %lx %d %x\n",pc,dnpc,inst_valid,inst);
       // printf("dfgghhhh %d\n",inst_valid);
    }while(inst_valid == 0 && (! contextp->gotFinish()));
    uint32_t inst= Inst[0];
   // printf("%lx  %lx %d %x\n",pc,dnpc,inst_valid,Inst[0]);
   //printf("%d\n",is_skip_ref);
    #ifdef PERF
        inst_count++;
    #endif
    #ifdef ITRACE

            void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
                disassemble(p,96,pc,(uint8_t *)&inst,4);
                //cpu->reg=cpu_gpr;
                
                
      
                if(s->reset==0 && step_print_inst){
                    printf("Addr: %08lx\t %08x\t Inst: %-16s\t\n",pc,Inst[0],p);
                }
                
                sprintf(ibuf[irbuf_point],"Addr: %08lx\t  %08x\t Inst: %-16s\t\n",pc,inst,p);
    
                irbuf_point=(irbuf_point+1)%IRTRACE;
    #endif
    
//////to ref
    #ifdef DIFFTEST 
    	memcpy(cpu.reg,cpu_gpr,sizeof(uint64_t)*32);
    	cpu.pc=dnpc;
        //printf("%lx\n",s->io_pc);
    	cpu.mepc=CSR[0];
    	cpu.mcause=CSR[1];
    	cpu.mstatus=CSR[2];
    	cpu.mtvec=CSR[3];
    #endif
    //printf("---------%016lx  %016lx\n",cpu_gpr[8],cpu_gpr[15]);
    
}

void execute(VCoreTop *dut,VerilatedContext* contextp,VerilatedVcdC *m_trace,uint64_t n){
    step_print_inst = (n<MAX_PRINT_STEP);
    while(n--!=0 &&((!contextp->gotFinish()))){
        exe_once(dut,contextp,m_trace);

        //printf("-----%d\n",is_skip_ref);
        #ifdef DIFFTEST 
        //printf("%d %lx\n",inst_valid,pc);
        if(!ref_is_irq && inst_valid==1){
            bool flag=difftest_step(dnpc);
            //printf("----------%016lx\n",dnpc);
            if(!flag) {state=ABORT; break;}
        }
        #endif
        if(state==ABORT || state==END) break;
        if(sim_time % 5 == 0) device_update();
    }
    
    if(contextp->gotFinish()) state=END;
    switch(state){
        case(ABORT): return;
        case(RUN): return;
        case(END): return;
    }
}



void Reset(VCoreTop *dut,VerilatedContext* contextp,VerilatedVcdC *m_trace){

    while(sim_time<3){
        dut->clock ^= 1;
        dut->reset = 1;
        
        
        dut->eval();
        #ifdef WTRACE
        m_trace->dump(sim_time);
        #endif
        sim_time++;
    }
    //reset ref
    //printf("%lx\n",dut->io_pc);
    dut->reset = 0;
    #ifdef DIFFTEST 
    memcpy(cpu.reg,cpu_gpr,sizeof(uint64_t)*32);
    cpu.pc=dut->io_pc;
    //printf("%lx\n",cpu.pc);
    cpu.mepc=CSR[0];
    cpu.mcause=CSR[1];
    cpu.mstatus=CSR[2];
    cpu.mtvec=CSR[3];
    
    #endif

    

}

uint64_t atoi64_t(char *arrTmp)
{
int len =0;
int i=0;
int j =0;
uint64_t nTmpRes =0;
uint64_t ntmp10=1;
if (arrTmp == NULL)
{
	return 0;
}
len=strlen(arrTmp);
 
for (i =len-1 ; i >=0;i--)
{
	ntmp10 =1;
	for (j=1;j<(len -i); j++)
	{
		ntmp10 = ntmp10*10;
	}
	nTmpRes = nTmpRes+(arrTmp[i]-48)*ntmp10;
}
return nTmpRes;
}

static int cmd_c(char *args,VCoreTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace) {
  execute(s,contextp,m_trace,-1);
  return 0;
}
static int cmd_q(char *args,VCoreTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace) {
  
  return -1;
}

static int cmd_help(char *args,VCoreTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace);

static int cmd_si(char *args,VCoreTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace);

static int cmd_info(char *args,VCoreTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace);

//static int cmd_x(char *args,VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace);


static struct {
  const char *name;
  const char *description;
  int (*handler) (char *,VCoreTop *,VerilatedContext* ,VerilatedVcdC *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "si", "si [N] N step execute", cmd_si },
  { "q", "Exit NPC", cmd_q },
  { "info", "info SUBCMD display reg state or watchdog info",  cmd_info},
  /*{ "x", "x [N] EXPR ,Hexadecimal output N byte in memory, EXPR is address", cmd_x },*/

  /* TODO: Add more commands */

};

#define NR_CMD 5

static int cmd_help(char *args,VCoreTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char *args,VCoreTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace){
    //cpu_exec(n);
    
    char *arg = strtok(NULL, " ");
    if (arg == NULL){
        execute(s,contextp,m_trace,1);
        //printf("1\n");
    }
    else {
    	uint64_t si_step=atoi64_t(arg);
    	execute(s,contextp,m_trace,si_step);
    	//printf("%lu\n",si_step);
        //printf("%s\n",arg);
    }
    
    return 0;
}

static int cmd_info(char *args,VCoreTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace){
	char *arg = strtok(NULL, " ");
	if(arg == NULL){
	    printf("need parameter!\n");
	    return 0;
	}
	else if(strcmp(arg, "r")==0){
	    dump_gpr();
	    return 0;
	}
	else if(strcmp(arg, "w")==0){
	     printf("Don't complit yet!\n");
	     //display_watchpoint();
	     return 0;
	}
	else{
	    printf("Illegal parameter!\n");
	    return 0;
	}
	return 0;
}



static char* rl_gets() {
  static char *line_read = NULL;
/*
  if (line_read) {
    free(line_read);
    line_read = NULL;
  }
  
  cout<< "(npc)";
  cin.getline(line_read,'\n');*/
  //cin>>line_read;
  
  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  
  return line_read;
}

void sdb_main_loop(VCoreTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace){
    if (is_batch_mode) {
    cmd_c(NULL,s,contextp,m_trace);
    return;
  }
    //printf("sdfas\n");
    for (char *str; (str = rl_gets()) != NULL; ) {
    
    char *str_end = str + strlen(str);
     /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }
    
     int i;
     
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args,s,contextp,m_trace) < 0) { return; }
        break;
      }
    }
    if(state==ABORT) return;
    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    
}


}

int main(int argc, char** argv) {
//printf("--------------------%s   %d\n",argv[1],argc);
//

VerilatedContext* contextp = new VerilatedContext;
contextp->commandArgs(argc, argv);
VCoreTop *dut = new VCoreTop;
#ifdef WTRACE
Verilated::traceEverOn(true);
VerilatedVcdC *m_trace = new VerilatedVcdC;
dut->trace(m_trace,5);
m_trace->open("waveform.vcd");
#endif

// init inst memory
init_mem(argv[1]);
init_device();

//printf("%s\n",argv[2]);
#ifdef WTRACE
Reset(dut,contextp,m_trace);//reset rtl
#endif
#ifndef WTRACE
Reset(dut,contextp,NULL);//reset rtl
#endif

#ifdef DIFFTEST 
init_difftest(argv[2],mem_size,1,mem);
#endif
init_disasm("riscv64" "-pc-linux-gnu");
//reset rtl

//execute 
//execute(dut,contextp,m_trace,-1);
#ifdef WTRACE
sdb_main_loop(dut,contextp,m_trace);
#endif
#ifndef WTRACE
sdb_main_loop(dut,contextp,NULL);
#endif
//printf("Final PC is : 0x%lx\n",dut->io_pc);

#ifdef WTRACE
m_trace->close();
#endif
delete dut;
delete contextp;

if(state==ABORT){
    dump_gpr(); 
    printf("\n");
    #ifdef ITRACE
    display_iringbuf();
    #endif
    printf("\033[40;31Program execution has ended. To restart the program, exit NEMU and run again.\033[0m");
    printf("\n");
    #ifdef DIFFTEST 
    difftest_print();
    #endif
    
    printf("\033[40;31mABORT at pc = \033[0m \033[40;31m0x%016lx\033[0m\n",pc);

    exit(EXIT_FAILURE);
    //exit(EXIT_SUCCESS);
}
else if(cpu_gpr[10] !=0) {
    dump_gpr(); 
    printf("\n");
    #ifdef ITRACE
    display_iringbuf();
    #endif

     #ifdef DIFFTEST 
    difftest_print();
    #endif

    printf("\033[40;31mHIT BAD TRAP at pc = \033[0m \033[40;31m0x%016lx\033[0m\n",pc);
    
    #ifdef PERF
    printf("simulation end\n");
    printf("clock sum is %ld\n",clock_count);
    printf("inst sum is %ld\n",inst_count);
    printf("IPC is %03f\n",inst_count/(float)clock_count);
    #endif
    exit(EXIT_FAILURE);
    //exit(EXIT_SUCCESS);
}
else printf("\033[40;32mHIT GOOD TRAP at pc = \033[0m \033[40;32m0x%016lx\033[0m\n",pc);
#ifdef PERF
printf("simulation end\n");
printf("clock sum is %ld\n",clock_count);
printf("inst sum is %ld\n",inst_count);
printf("IPC is %03f\n",inst_count/(float)clock_count);
#endif
exit(EXIT_SUCCESS);


}

