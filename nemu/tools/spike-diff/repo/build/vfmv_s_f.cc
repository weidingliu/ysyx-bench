// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfmv_s_f(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFMV_S_F));
  #include "insns/vfmv_s_f.h"
  trace_opcode(p,  MATCH_VFMV_S_F, insn);
  return npc;
}

reg_t rv64_vfmv_s_f(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFMV_S_F));
  #include "insns/vfmv_s_f.h"
  trace_opcode(p,  MATCH_VFMV_S_F, insn);
  return npc;
}
