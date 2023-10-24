// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_ukadd16(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_UKADD16));
  #include "insns/ukadd16.h"
  trace_opcode(p,  MATCH_UKADD16, insn);
  return npc;
}

reg_t rv64_ukadd16(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_UKADD16));
  #include "insns/ukadd16.h"
  trace_opcode(p,  MATCH_UKADD16, insn);
  return npc;
}
