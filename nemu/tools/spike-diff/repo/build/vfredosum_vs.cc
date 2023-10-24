// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfredosum_vs(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFREDOSUM_VS));
  #include "insns/vfredosum_vs.h"
  trace_opcode(p,  MATCH_VFREDOSUM_VS, insn);
  return npc;
}

reg_t rv64_vfredosum_vs(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFREDOSUM_VS));
  #include "insns/vfredosum_vs.h"
  trace_opcode(p,  MATCH_VFREDOSUM_VS, insn);
  return npc;
}
