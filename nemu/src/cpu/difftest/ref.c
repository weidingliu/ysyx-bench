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
      
      word_t temp= *(word_t *)buf;
      while(n>4){
          if(direction==DIFFTEST_TO_DUT){
              assert(0);
          }
          if(direction==DIFFTEST_TO_REF){
              paddr_write(addr,n,temp);
              return;
          }
          buf++;
          n-=4;
          
      }
  }
  
}

void difftest_regcpy(void *dut, bool direction) {
  uint32_t temp[32];
  dut=temp;
  if(direction==DIFFTEST_TO_DUT){
      for(int i=0;i<32;i++){
          temp[i]=cpu.gpr[i];
      }
      return;
  }
  if(direction==DIFFTEST_TO_REF){
      for(int i=0;i<32;i++){
          cpu.gpr[i]=temp[i];
      }
      return;
  }
  assert(0);
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
