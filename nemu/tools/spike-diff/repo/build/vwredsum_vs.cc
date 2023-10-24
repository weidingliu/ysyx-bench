// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vwredsum_vs(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWREDSUM_VS));
  #include "insns/vwredsum_vs.h"
  trace_opcode(p,  MATCH_VWREDSUM_VS, insn);
  return npc;
}

reg_t rv64_vwredsum_vs(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWREDSUM_VS));
  #include "insns/vwredsum_vs.h"
  trace_opcode(p,  MATCH_VWREDSUM_VS, insn);
  return npc;
}
