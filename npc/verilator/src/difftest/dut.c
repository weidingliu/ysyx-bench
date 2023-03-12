#include <dlfcn.h>
#include <stdlib.h>
#include <iostream>
#include <assert.h>

#include <tb.h>
#include<difftest.h>



Ref_difftest_memcpy ref_difftest_memcpy=NULL;
Ref_difftest_regcpy ref_difftest_regcpy=NULL;
Ref_difftest_exec ref_difftest_exec=NULL;
Ref_difftest_raise_intr ref_difftest_raise_intr=NULL;
Ref_difftest_init ref_difftest_init=NULL;

void init_difftest(char *ref_so_file, uint32_t img_size, int port, uint8_t *mem){
  assert(ref_so_file != NULL);
  
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);
  
  ref_difftest_memcpy = (Ref_difftest_memcpy)dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);
  
  ref_difftest_regcpy = (Ref_difftest_regcpy)dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);
  
  ref_difftest_exec = (Ref_difftest_exec)dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);
  
  ref_difftest_raise_intr = (Ref_difftest_raise_intr)dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);
  
  ref_difftest_init = (Ref_difftest_init)dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  ref_difftest_init(port);
  
  ref_difftest_memcpy(RESET_VECTOR, mem, img_size, DIFFTEST_TO_REF);
  //printf("here5\n");
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
  
  printf("difftest \033[40;32mON\033[0m\n");
}

static bool check_reg(cpu_state *ref_cpu,uint64_t pc){
    //printf("%016lx  %016lx\n",pc,ref_cpu->pc);
    if(pc != ref_cpu->pc){
        //printf("her\n");
        printf("PC fail!\n");
        
        return false;
    }
    for(int i=0;i<32;i++){
    
        if(ref_cpu->reg[i] != cpu_gpr[i]) {printf("REG fail ! at %d ref :%016lx dut: %016lx\n ",i,ref_cpu->reg[i],cpu_gpr[i]);return false;}
        
    }
    //printf("%016lx   %016lx\n",cpu.mstatus,ref_cpu->mstatus);
    if(ref_cpu->mcause != cpu.mcause) {
        printf("mcause fail! ref : %016lx  dut : %016lx\n",ref_cpu->mcause,cpu.mcause);
        return false;
    }
    if(ref_cpu->mstatus != cpu.mstatus) {
        printf("mstatus fail! ref : %016lx  dut : %016lx\n",ref_cpu->mstatus,cpu.mstatus);
        return false;
    }
    if(ref_cpu->mepc != cpu.mepc) {
        printf("mepc fail! ref : %016lx  dut : %016lx\n",ref_cpu->mepc,cpu.mepc);
        return false;
    }
    if(ref_cpu->mtvec != cpu.mtvec) {
        printf("mtvec fail! ref : %016lx  dut : %016lx\n",ref_cpu->mtvec,cpu.mtvec);
        return false;
    }
    
    return true;
}

bool difftest_step(uint64_t pc){
    //printf("dsaf %lx  %lx \n",,cpu.pc);
   // printf("%d  %016lx\n",is_skip_ref,cpu.mtvec);
    if(is_skip_ref){
        //cpu.pc+=4;
        ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
        is_skip_ref=0;
        return true;
    }

    cpu_state ref_cpu;
    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
    //printf("%016lx\n",ref_cpu.pc);
    //printf("%016lx\n",pc);
    bool ret=check_reg(&ref_cpu,pc);
    return ret;
}

void difftest_print(){
    cpu_state ref_cpu;
    ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
    
    printf("======ref PC is %016lx\n",ref_cpu.pc-4);
    for(int i=0;i<32;i++){
        printf("gpr[%d]: %016lx\n",i,ref_cpu.reg[i]);
    }
    printf("mcause: %016lx \n mstatus:  %016lx \n mepc: %016lx \n mtvec: %016lx \n",ref_cpu.mcause,ref_cpu.mstatus,ref_cpu.mepc,ref_cpu.mtvec);
}

void difftest_irq(uint64_t NO){
    //printf("sdafas\n");
    ref_difftest_raise_intr(NO);
    ref_is_irq=0;
}





