// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vloxei64_v(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VLOXEI64_V));
  #include "insns/vloxei64_v.h"
  trace_opcode(p,  MATCH_VLOXEI64_V, insn);
  return npc;
}

reg_t rv64_vloxei64_v(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VLOXEI64_V));
  #include "insns/vloxei64_v.h"
  trace_opcode(p,  MATCH_VLOXEI64_V, insn);
  return npc;
}
