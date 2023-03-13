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
#include <common.h>
#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
   //printf("--------%lx\n",cpu.csr[0]);
   //printf("%ld\n",NO);
   switch(NO){
       case(0):{//ecall
           cpu.mepc=epc;//mepc
           cpu.mcause=11;//mcause
           cpu.mstatus=cpu.mstatus & 0xfffffffffffffff7;
           break;
       }
       default: assert(0);
   }
   
   //printf("--------%lx\n",cpu.csr[0x42]);
  //isa_reg_display();
  #ifdef CONFIG_MTRACE
  printf("--->ecall pc: %016lx  mcause: %016lx\n",epc,cpu.mcause);
  #endif
  return cpu.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
