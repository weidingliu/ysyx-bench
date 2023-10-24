// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_umul16(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_UMUL16));
  #include "insns/umul16.h"
  trace_opcode(p,  MATCH_UMUL16, insn);
  return npc;
}

reg_t rv64_umul16(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_UMUL16));
  #include "insns/umul16.h"
  trace_opcode(p,  MATCH_UMUL16, insn);
  return npc;
}
