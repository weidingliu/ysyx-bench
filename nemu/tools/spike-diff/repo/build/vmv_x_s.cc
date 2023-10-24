// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vmv_x_s(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMV_X_S));
  #include "insns/vmv_x_s.h"
  trace_opcode(p,  MATCH_VMV_X_S, insn);
  return npc;
}

reg_t rv64_vmv_x_s(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMV_X_S));
  #include "insns/vmv_x_s.h"
  trace_opcode(p,  MATCH_VMV_X_S, insn);
  return npc;
}
