// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_fmin_h(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FMIN_H));
  #include "insns/fmin_h.h"
  trace_opcode(p,  MATCH_FMIN_H, insn);
  return npc;
}

reg_t rv64_fmin_h(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FMIN_H));
  #include "insns/fmin_h.h"
  trace_opcode(p,  MATCH_FMIN_H, insn);
  return npc;
}
