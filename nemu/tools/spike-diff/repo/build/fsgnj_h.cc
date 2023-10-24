// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_fsgnj_h(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FSGNJ_H));
  #include "insns/fsgnj_h.h"
  trace_opcode(p,  MATCH_FSGNJ_H, insn);
  return npc;
}

reg_t rv64_fsgnj_h(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FSGNJ_H));
  #include "insns/fsgnj_h.h"
  trace_opcode(p,  MATCH_FSGNJ_H, insn);
  return npc;
}
