// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_sm3p1(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SM3P1));
  #include "insns/sm3p1.h"
  trace_opcode(p,  MATCH_SM3P1, insn);
  return npc;
}

reg_t rv64_sm3p1(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SM3P1));
  #include "insns/sm3p1.h"
  trace_opcode(p,  MATCH_SM3P1, insn);
  return npc;
}
