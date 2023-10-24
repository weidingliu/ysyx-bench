// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vmnand_mm(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMNAND_MM));
  #include "insns/vmnand_mm.h"
  trace_opcode(p,  MATCH_VMNAND_MM, insn);
  return npc;
}

reg_t rv64_vmnand_mm(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMNAND_MM));
  #include "insns/vmnand_mm.h"
  trace_opcode(p,  MATCH_VMNAND_MM, insn);
  return npc;
}
