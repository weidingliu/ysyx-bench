// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vsll_vv(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VSLL_VV));
  #include "insns/vsll_vv.h"
  trace_opcode(p,  MATCH_VSLL_VV, insn);
  return npc;
}

reg_t rv64_vsll_vv(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VSLL_VV));
  #include "insns/vsll_vv.h"
  trace_opcode(p,  MATCH_VSLL_VV, insn);
  return npc;
}
