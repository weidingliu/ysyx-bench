// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vredmax_vs(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VREDMAX_VS));
  #include "insns/vredmax_vs.h"
  trace_opcode(p,  MATCH_VREDMAX_VS, insn);
  return npc;
}

reg_t rv64_vredmax_vs(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VREDMAX_VS));
  #include "insns/vredmax_vs.h"
  trace_opcode(p,  MATCH_VREDMAX_VS, insn);
  return npc;
}
