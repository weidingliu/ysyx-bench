// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_smaqa_su(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SMAQA_SU));
  #include "insns/smaqa_su.h"
  trace_opcode(p,  MATCH_SMAQA_SU, insn);
  return npc;
}

reg_t rv64_smaqa_su(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SMAQA_SU));
  #include "insns/smaqa_su.h"
  trace_opcode(p,  MATCH_SMAQA_SU, insn);
  return npc;
}
