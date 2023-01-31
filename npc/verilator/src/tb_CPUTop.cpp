#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VCPUTop.h"
#include "VCPUTop___024root.h"
#include <svdpi.h>
#include "VCPUTop__Dpi.h"
#include "verilated_dpi.h"

#define MAX_SIM_TIME 2000
#define MAX_MEM 480
/*
#define clk 100 //set clock  MHZ

#define div_clock(c) ((((10^9)/(c*10^6))*10^3)/2)
*/
vluint64_t sim_time=0;
uint32_t mem[MAX_MEM];
uint32_t mem_size;

uint64_t *cpu_gpr = NULL;
uint32_t *Inst;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void set_pc( const svOpenArrayHandle inst){
    //printf("%lld\n",pc);
    //PC=pc;
    Inst=(uint32_t *)(((VerilatedDpiOpenVar*)inst)->datap());
    //Inst=inst;
    /*Inst=inst[0];
    
    printf("%x\n", inst[0]);*/
    
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

void init_mem(char *file_path){
    FILE *fp;
    
    if((fp=fopen(file_path,"r"))==NULL){
        printf("load mem fail!\n");
        exit(-1);
    }
    fseek(fp,0,SEEK_END);
    int size=ftell(fp);
    mem_size=size;
    if(size/4>MAX_MEM){
        printf("fail load mem file size:%d\n",size);
        exit(-1);
    } 
    //printf("----------%d\n",size);
    rewind(fp);
    size_t o=fread(mem,sizeof(uint32_t),size,fp);
    if(o==0){
        printf("fail load mem file \n");
        exit(-1);
    }
    
   /* for(int i=0;i<size;i++){
        
        printf("%08x\n",mem[i]);
    }*/
    printf("load mem finish!\n");
}

//void ebreak() {dut->final();return;}
uint32_t pem_read(uint64_t pc){
    
    /*mem[0]=0b00000000000100000000000100010011;
    mem[1]=0b00000000000100010000000100010011;
    mem[2]=0b00000000000100010000000100010011;
    mem[3]=0b00000000000100000000000001110011;
    mem[4]=0b00000000000100010000000100010011;*/
    //printf("%lx  %ld\n",pc,(pc-0x80000000)/4);
    return mem[(pc-0x80000000)/4];
} 

void exe_once(VCPUTop *s,VerilatedContext* contextp){
    for(int i=0;i<2 && (! *contextp->gotFinish());i++){
        s->clock ^=1;
        s->reset = 0;
        if(sim_time % 1==0) s->io_inst = pem_read(s->io_pc);
        sim_time++;
    }
    if(s->reset==0)printf("----------%08x\n",Inst[0]);
}

int main(int argc, char** argv) {
//printf("--------------------%s   %d\n",argv[1],argc);

init_mem(argv[1]);
VerilatedContext* contextp = new VerilatedContext;
contextp->commandArgs(argc, argv);
VCPUTop *dut = new VCPUTop;

Verilated::traceEverOn(true);
VerilatedVcdC *m_trace = new VerilatedVcdC;
dut->trace(m_trace,8);
m_trace->open("waveform.vcd");
while (sim_time<3){
    dut->clock ^= 1;
    dut->io_inst=0; 
    dut->reset = 1;
    sim_time++;
}

exe_once(dut,contextp);
/*
while(sim_time<MAX_SIM_TIME && (!contextp->gotFinish())){
    dut->clock ^= 1;
    
    dut->reset = 1;
    dut->io_inst=0; 
    if(sim_time%1==0 &&sim_time>=3){
        dut->reset = 0;
        dut->io_inst = pem_read(dut->io_pc);
    }
    
    dut->eval();
   
    m_trace->dump(sim_time);
    
    sim_time++;

    if(dut->reset==0)printf("%08x\n",Inst[0]);

}*/
printf("Final PC is : 0x%lx\n",dut->io_pc);

if(cpu_gpr[10] !=0) {dump_gpr(); printf("\033[40;31mHIT BAD TRAP at pc = \033[0m \033[40;31m0x%lx\033[0m\n",dut->io_pc);}
else printf("\033[40;32mHIT GOOD TRAP at pc = \033[0m \033[40;32m0x%lx\033[0m\n",dut->io_pc);

m_trace->close();
delete dut;
delete contextp;
exit(EXIT_SUCCESS);


}

