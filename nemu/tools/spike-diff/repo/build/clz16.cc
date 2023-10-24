// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_clz16(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_CLZ16));
  #include "insns/clz16.h"
  trace_opcode(p,  MATCH_CLZ16, insn);
  return npc;
}

reg_t rv64_clz16(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_CLZ16));
  #include "insns/clz16.h"
  trace_opcode(p,  MATCH_CLZ16, insn);
  return npc;
}
