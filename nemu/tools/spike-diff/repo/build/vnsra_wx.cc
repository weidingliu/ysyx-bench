// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vnsra_wx(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VNSRA_WX));
  #include "insns/vnsra_wx.h"
  trace_opcode(p,  MATCH_VNSRA_WX, insn);
  return npc;
}

reg_t rv64_vnsra_wx(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VNSRA_WX));
  #include "insns/vnsra_wx.h"
  trace_opcode(p,  MATCH_VNSRA_WX, insn);
  return npc;
}
