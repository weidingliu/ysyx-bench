// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfirst_m(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFIRST_M));
  #include "insns/vfirst_m.h"
  trace_opcode(p,  MATCH_VFIRST_M, insn);
  return npc;
}

reg_t rv64_vfirst_m(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFIRST_M));
  #include "insns/vfirst_m.h"
  trace_opcode(p,  MATCH_VFIRST_M, insn);
  return npc;
}
