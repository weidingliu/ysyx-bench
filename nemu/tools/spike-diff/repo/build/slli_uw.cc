// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_slli_uw(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SLLI_UW));
  #include "insns/slli_uw.h"
  trace_opcode(p,  MATCH_SLLI_UW, insn);
  return npc;
}

reg_t rv64_slli_uw(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SLLI_UW));
  #include "insns/slli_uw.h"
  trace_opcode(p,  MATCH_SLLI_UW, insn);
  return npc;
}
