// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_shfl(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHFL));
  #include "insns/shfl.h"
  trace_opcode(p,  MATCH_SHFL, insn);
  return npc;
}

reg_t rv64_shfl(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHFL));
  #include "insns/shfl.h"
  trace_opcode(p,  MATCH_SHFL, insn);
  return npc;
}
