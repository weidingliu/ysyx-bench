// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_sroi(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SROI));
  #include "insns/sroi.h"
  trace_opcode(p,  MATCH_SROI, insn);
  return npc;
}

reg_t rv64_sroi(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SROI));
  #include "insns/sroi.h"
  trace_opcode(p,  MATCH_SROI, insn);
  return npc;
}
