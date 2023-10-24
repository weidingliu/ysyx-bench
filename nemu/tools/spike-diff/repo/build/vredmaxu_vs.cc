// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vredmaxu_vs(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VREDMAXU_VS));
  #include "insns/vredmaxu_vs.h"
  trace_opcode(p,  MATCH_VREDMAXU_VS, insn);
  return npc;
}

reg_t rv64_vredmaxu_vs(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VREDMAXU_VS));
  #include "insns/vredmaxu_vs.h"
  trace_opcode(p,  MATCH_VREDMAXU_VS, insn);
  return npc;
}
