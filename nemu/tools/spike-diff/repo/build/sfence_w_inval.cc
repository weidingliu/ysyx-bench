// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_sfence_w_inval(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SFENCE_W_INVAL));
  #include "insns/sfence_w_inval.h"
  trace_opcode(p,  MATCH_SFENCE_W_INVAL, insn);
  return npc;
}

reg_t rv64_sfence_w_inval(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SFENCE_W_INVAL));
  #include "insns/sfence_w_inval.h"
  trace_opcode(p,  MATCH_SFENCE_W_INVAL, insn);
  return npc;
}
