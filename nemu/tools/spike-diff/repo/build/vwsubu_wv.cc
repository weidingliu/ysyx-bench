// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vwsubu_wv(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWSUBU_WV));
  #include "insns/vwsubu_wv.h"
  trace_opcode(p,  MATCH_VWSUBU_WV, insn);
  return npc;
}

reg_t rv64_vwsubu_wv(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWSUBU_WV));
  #include "insns/vwsubu_wv.h"
  trace_opcode(p,  MATCH_VWSUBU_WV, insn);
  return npc;
}
