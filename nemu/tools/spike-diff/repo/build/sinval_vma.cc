// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_sinval_vma(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SINVAL_VMA));
  #include "insns/sinval_vma.h"
  trace_opcode(p,  MATCH_SINVAL_VMA, insn);
  return npc;
}

reg_t rv64_sinval_vma(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SINVAL_VMA));
  #include "insns/sinval_vma.h"
  trace_opcode(p,  MATCH_SINVAL_VMA, insn);
  return npc;
}
