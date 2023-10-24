// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_hfence_gvma(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_HFENCE_GVMA));
  #include "insns/hfence_gvma.h"
  trace_opcode(p,  MATCH_HFENCE_GVMA, insn);
  return npc;
}

reg_t rv64_hfence_gvma(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_HFENCE_GVMA));
  #include "insns/hfence_gvma.h"
  trace_opcode(p,  MATCH_HFENCE_GVMA, insn);
  return npc;
}
