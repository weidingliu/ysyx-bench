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

#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>
#include <isa.h>

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}
/*static inline int check_csr_idx(int idx){
    IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 256));
    return idx;
}*/

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])
extern word_t csrgpr_read(int idx) {
      if(idx==0x00) return cpu.mstatus;               
      else if(idx==0x05) return cpu.mtvec;     
      else if(idx == 0x41) return cpu.mepc;   
      else if(idx==0x42) return cpu.mcause;
      else assert(0);
     
}
extern void csrgpr_write(int idx,word_t csr_data){
    if(idx==0x00) cpu.mstatus=csr_data;               
      else if(idx==0x05) cpu.mtvec=csr_data;     
      else if(idx == 0x41) cpu.mepc=csr_data;   
      else if(idx==0x42) cpu.mcause=csr_data;
      else assert(0);
}

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
