// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vzext_vf8(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VZEXT_VF8));
  #include "insns/vzext_vf8.h"
  trace_opcode(p,  MATCH_VZEXT_VF8, insn);
  return npc;
}

reg_t rv64_vzext_vf8(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VZEXT_VF8));
  #include "insns/vzext_vf8.h"
  trace_opcode(p,  MATCH_VZEXT_VF8, insn);
  return npc;
}
