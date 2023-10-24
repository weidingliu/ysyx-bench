// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_ksll32(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KSLL32));
  #include "insns/ksll32.h"
  trace_opcode(p,  MATCH_KSLL32, insn);
  return npc;
}

reg_t rv64_ksll32(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KSLL32));
  #include "insns/ksll32.h"
  trace_opcode(p,  MATCH_KSLL32, insn);
  return npc;
}
