// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vasubu_vx(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VASUBU_VX));
  #include "insns/vasubu_vx.h"
  trace_opcode(p,  MATCH_VASUBU_VX, insn);
  return npc;
}

reg_t rv64_vasubu_vx(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VASUBU_VX));
  #include "insns/vasubu_vx.h"
  trace_opcode(p,  MATCH_VASUBU_VX, insn);
  return npc;
}
