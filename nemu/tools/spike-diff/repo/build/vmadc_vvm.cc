// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vmadc_vvm(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMADC_VVM));
  #include "insns/vmadc_vvm.h"
  trace_opcode(p,  MATCH_VMADC_VVM, insn);
  return npc;
}

reg_t rv64_vmadc_vvm(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMADC_VVM));
  #include "insns/vmadc_vvm.h"
  trace_opcode(p,  MATCH_VMADC_VVM, insn);
  return npc;
}
