// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_ksll8(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KSLL8));
  #include "insns/ksll8.h"
  trace_opcode(p,  MATCH_KSLL8, insn);
  return npc;
}

reg_t rv64_ksll8(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KSLL8));
  #include "insns/ksll8.h"
  trace_opcode(p,  MATCH_KSLL8, insn);
  return npc;
}
