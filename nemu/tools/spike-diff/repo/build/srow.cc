// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_srow(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SROW));
  #include "insns/srow.h"
  trace_opcode(p,  MATCH_SROW, insn);
  return npc;
}

reg_t rv64_srow(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SROW));
  #include "insns/srow.h"
  trace_opcode(p,  MATCH_SROW, insn);
  return npc;
}
