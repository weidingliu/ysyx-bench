// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_srl16_u(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SRL16_U));
  #include "insns/srl16_u.h"
  trace_opcode(p,  MATCH_SRL16_U, insn);
  return npc;
}

reg_t rv64_srl16_u(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SRL16_U));
  #include "insns/srl16_u.h"
  trace_opcode(p,  MATCH_SRL16_U, insn);
  return npc;
}
