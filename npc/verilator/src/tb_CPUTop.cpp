#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VCPUTop.h"
#include "VCPUTop___024root.h"
#include <svdpi.h>
#include "VCPUTop__Dpi.h"
#include "verilated_dpi.h"

#include <readline/readline.h>
#include <readline/history.h>

#include <stdlib.h>

#include <tb.h>
#include <difftest.h>

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
char ibuf[IRTRACE][128];
static uint32_t irbuf_point=0;

static bool step_print_inst = false;
vluint64_t sim_time=0;

uint64_t *cpu_gpr=NULL;
uint8_t mem[MAX_MEM] __attribute((aligned(4096))) = {};

uint32_t mem_size;
uint32_t *Inst;
uint64_t *CSR;

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

}
extern "C" void set_csr( const svOpenArrayHandle inst){

    CSR=(uint64_t *)(((VerilatedDpiOpenVar*)inst)->datap());

    
}




static void display_iringbuf(){
    int i=0;
    for(;i<IRTRACE;i++){
        if(i==(irbuf_point+31)%32) printf("-->");
        else printf("   ");

        printf("%s\n",ibuf[i]);
    }
}

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

//void ebreak() {dut->final();return;}
uint32_t pem_read(uint64_t pc){
    

    return *(uint32_t *)(mem+pc-0x80000000);
} 
//extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

void exe_once(VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace){
    char p[128];
    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    uint32_t inst;
    for(int i=0;i<2 && (! contextp->gotFinish());i++){
        s->clock ^=1;
        
        s->reset = 0;
        
        if(sim_time % 1==0) {
            
            inst = pem_read(s->io_pc);
            if(i==0){
                disassemble(p,96,s->io_pc,(uint8_t *)&inst,4);
                //cpu->reg=cpu_gpr;
                
      
                if(s->reset==0 && step_print_inst){
                    printf("Addr: %08lx\t %08x\t Inst: %-16s\t\n",s->io_pc,Inst[0],p);
                }
                
                sprintf(ibuf[irbuf_point],"Addr: %08lx\t  %08x\t Inst: %-16s\t\n",s->io_pc,inst,p);
    
    
                irbuf_point=(irbuf_point+1)%IRTRACE;
            }
            
        }
        
        s->eval();
        m_trace->dump(sim_time);
        sim_time++;
        if(s->io_time_int ==1 || Inst[0]==0b00000000000000000000000001110011) is_skip_ref=1;
        //if(Inst[0]==0b00000000000000000000000001110011){ref_is_irq=true; difftest_irq(0);}
    }
//////to ref
    memcpy(cpu.reg,cpu_gpr,sizeof(uint64_t)*32);
    cpu.pc=s->io_pc;
    
    cpu.mepc=CSR[0];
    cpu.mcause=CSR[1];
    cpu.mstatus=CSR[2];
    cpu.mtvec=CSR[3];
    //printf("---------%016lx %d\n",cpu.mepc,s->io_time_int);
    printf("sadf\n");
    
}

void execute(VCPUTop *dut,VerilatedContext* contextp,VerilatedVcdC *m_trace,uint64_t n){
    step_print_inst = (n<MAX_PRINT_STEP);
    while(n--!=0 &&((!contextp->gotFinish()))){
        exe_once(dut,contextp,m_trace);
        
        if(DIFFTEST && !ref_is_irq){
            bool flag=difftest_step(dut->io_pc);
        
            if(!flag) {state=ABORT; break;}
        }
        
        
        
    }
    if(contextp->gotFinish()) state=END;
    switch(state){
        case(ABORT): return;
        case(RUN): return;
        case(END): return;
    }
}



void Reset(VCPUTop *dut,VerilatedContext* contextp,VerilatedVcdC *m_trace){
    
    while(sim_time<3){
        dut->clock ^= 1;
        dut->io_inst=0; 
        dut->reset = 1;
        
        
        dut->eval();
   
        m_trace->dump(sim_time);
        sim_time++;
    }
    //reset ref
    //printf("%lx\n",dut->io_pc);
    
    memcpy(cpu.reg,cpu_gpr,sizeof(uint64_t)*32);
    cpu.pc=dut->io_pc;
    cpu.mepc=CSR[0];
    cpu.mcause=CSR[1];
    cpu.mstatus=CSR[2];
    cpu.mtvec=CSR[3];
    

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

static int cmd_c(char *args,VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace) {
  execute(s,contextp,m_trace,-1);
  return 0;
}
static int cmd_q(char *args,VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace) {
  
  return -1;
}

static int cmd_help(char *args,VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace);

static int cmd_si(char *args,VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace);

static int cmd_info(char *args,VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace);

//static int cmd_x(char *args,VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace);


static struct {
  const char *name;
  const char *description;
  int (*handler) (char *,VCPUTop *,VerilatedContext* ,VerilatedVcdC *);
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

static int cmd_help(char *args,VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace) {
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

static int cmd_si(char *args,VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace){
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

static int cmd_info(char *args,VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace){
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

void sdb_main_loop(VCPUTop *s,VerilatedContext* contextp,VerilatedVcdC *m_trace){
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
VCPUTop *dut = new VCPUTop;

Verilated::traceEverOn(true);
VerilatedVcdC *m_trace = new VerilatedVcdC;
dut->trace(m_trace,5);
m_trace->open("waveform.vcd");

// init inst memory
init_mem(argv[1]);
//printf("%s\n",argv[2]);

Reset(dut,contextp,m_trace);//reset rtl

if(DIFFTEST) init_difftest(argv[2],mem_size,1,mem);
if(!DIFFTEST) printf("                        difftest OFF\n");
init_disasm("riscv64" "-pc-linux-gnu");
//reset rtl

//execute 
//execute(dut,contextp,m_trace,-1);

sdb_main_loop(dut,contextp,m_trace);

//printf("Final PC is : 0x%lx\n",dut->io_pc);


if(state==ABORT){
    dump_gpr(); 
    printf("\n");
    display_iringbuf();
    printf("\033[40;31Program execution has ended. To restart the program, exit NEMU and run again.\033[0m");
    printf("\n");
    if(DIFFTEST) difftest_print();
    
    
    printf("\033[40;31mABORT at pc = \033[0m \033[40;31m0x%016lx\033[0m\n",dut->io_pc-4);
}
else if(cpu_gpr[10] !=0) {
    dump_gpr(); 
    printf("\n");
    display_iringbuf();
    printf("\033[40;31mHIT BAD TRAP at pc = \033[0m \033[40;31m0x%016lx\033[0m\n",dut->io_pc);
}
else printf("\033[40;32mHIT GOOD TRAP at pc = \033[0m \033[40;32m0x%016lx\033[0m\n",dut->io_pc);

m_trace->close();
delete dut;
delete contextp;
exit(EXIT_SUCCESS);


}

