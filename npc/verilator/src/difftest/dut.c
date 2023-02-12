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

void init_difftest(char *ref_so_file, uint32_t img_size, int port, uint32_t *mem){
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
  ref_difftest_regcpy(&cpu_gpr, DIFFTEST_TO_REF);
  
  printf("difftest \033[40;32mON\033[0m\n");
}

void difftest_step(){
    cpu_state ref_cpu;
    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
    
}

bool check_reg(cpu_state ref_cpu,uint64_t pc){

    return true;
}




