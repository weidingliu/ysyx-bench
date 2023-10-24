// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_khm16(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KHM16));
  #include "insns/khm16.h"
  trace_opcode(p,  MATCH_KHM16, insn);
  return npc;
}

reg_t rv64_khm16(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KHM16));
  #include "insns/khm16.h"
  trace_opcode(p,  MATCH_KHM16, insn);
  return npc;
}
