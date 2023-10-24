// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vredor_vs(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VREDOR_VS));
  #include "insns/vredor_vs.h"
  trace_opcode(p,  MATCH_VREDOR_VS, insn);
  return npc;
}

reg_t rv64_vredor_vs(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VREDOR_VS));
  #include "insns/vredor_vs.h"
  trace_opcode(p,  MATCH_VREDOR_VS, insn);
  return npc;
}
