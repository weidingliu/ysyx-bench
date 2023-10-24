// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vmnor_mm(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMNOR_MM));
  #include "insns/vmnor_mm.h"
  trace_opcode(p,  MATCH_VMNOR_MM, insn);
  return npc;
}

reg_t rv64_vmnor_mm(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMNOR_MM));
  #include "insns/vmnor_mm.h"
  trace_opcode(p,  MATCH_VMNOR_MM, insn);
  return npc;
}
