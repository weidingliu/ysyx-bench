// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_sra16_u(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SRA16_U));
  #include "insns/sra16_u.h"
  trace_opcode(p,  MATCH_SRA16_U, insn);
  return npc;
}

reg_t rv64_sra16_u(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SRA16_U));
  #include "insns/sra16_u.h"
  trace_opcode(p,  MATCH_SRA16_U, insn);
  return npc;
}
