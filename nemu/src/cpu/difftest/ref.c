/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

typedef struct reg_cpu{
    uint64_t reg[32];
    uint64_t pc;
    uint64_t mcause,mstatus, mepc,mtvec;
}ref_state;

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  word_t temp;
  
  if(n<=4){
      if(direction==DIFFTEST_TO_DUT){
          temp=paddr_read(addr,n);
          buf=&temp;
          return;
      }
      if(direction==DIFFTEST_TO_REF){
          
          paddr_write(addr,n,*(word_t *)buf);
         return;
      }
  }
  else {
      
      //printf("%08x    %ld\n",*(uint32_t *)buf,n);
      while(n>=4){
          uint32_t temp= *(uint32_t *)buf;
          if(direction==DIFFTEST_TO_DUT){
              assert(0);
          }
          if(direction==DIFFTEST_TO_REF){
              //memcpy(guest_to_host(RESET_VECTOR), *(word_t *)buf, sizeof(word_t));
              paddr_write(addr,4,temp);
              //printf("%08x\n",temp);
              
          }
          buf+=4;
          n-=4;
          addr+=4;
          
      }
  }
  
}

void difftest_regcpy(ref_state *dut, bool direction) {
  //uint32_t temp[32];
  /*ref_state *cpu_state;
  ref_state temp;
  cpu_state=&temp;
  dut=cpu_state;*/
  
  //printf("--------------%08lx\n",cpu.pc);
  if(direction==DIFFTEST_TO_DUT){
      dut->pc=cpu.pc;
      //printf("--------------%016lx     %016lx\n",cpu.pc,dut->pc);
      for(int i=0;i<32;i++){
          dut->reg[i]=cpu.gpr[i];
      }
      dut->mcause=cpu.mcause;
      dut->mstatus=cpu.mstatus;
      dut->mepc=cpu.mepc;
      dut->mtvec=cpu.mtvec;
      return;
  }
  if(direction==DIFFTEST_TO_REF){
      cpu.pc=dut->pc;
      for(int i=0;i<32;i++){
          cpu.gpr[i]=dut->reg[i];
      }
      cpu.mcause=dut->mcause;
      cpu.mstatus=dut->mstatus;
      cpu.mepc=dut->mepc;
      cpu.mtvec=dut->mtvec;
      
      return;
  }
  assert(0);
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);

}

void difftest_raise_intr(word_t NO) {
  cpu.pc=isa_raise_intr(NO, cpu.pc);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
