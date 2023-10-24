// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_slli32(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SLLI32));
  #include "insns/slli32.h"
  trace_opcode(p,  MATCH_SLLI32, insn);
  return npc;
}

reg_t rv64_slli32(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SLLI32));
  #include "insns/slli32.h"
  trace_opcode(p,  MATCH_SLLI32, insn);
  return npc;
}
