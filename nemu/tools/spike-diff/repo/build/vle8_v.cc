// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vle8_v(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VLE8_V));
  #include "insns/vle8_v.h"
  trace_opcode(p,  MATCH_VLE8_V, insn);
  return npc;
}

reg_t rv64_vle8_v(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VLE8_V));
  #include "insns/vle8_v.h"
  trace_opcode(p,  MATCH_VLE8_V, insn);
  return npc;
}
