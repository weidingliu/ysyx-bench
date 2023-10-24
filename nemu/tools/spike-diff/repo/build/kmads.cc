// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_kmads(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KMADS));
  #include "insns/kmads.h"
  trace_opcode(p,  MATCH_KMADS, insn);
  return npc;
}

reg_t rv64_kmads(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KMADS));
  #include "insns/kmads.h"
  trace_opcode(p,  MATCH_KMADS, insn);
  return npc;
}
