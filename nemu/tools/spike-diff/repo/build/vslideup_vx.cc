// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vslideup_vx(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VSLIDEUP_VX));
  #include "insns/vslideup_vx.h"
  trace_opcode(p,  MATCH_VSLIDEUP_VX, insn);
  return npc;
}

reg_t rv64_vslideup_vx(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VSLIDEUP_VX));
  #include "insns/vslideup_vx.h"
  trace_opcode(p,  MATCH_VSLIDEUP_VX, insn);
  return npc;
}
