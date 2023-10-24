// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_sra8_u(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SRA8_U));
  #include "insns/sra8_u.h"
  trace_opcode(p,  MATCH_SRA8_U, insn);
  return npc;
}

reg_t rv64_sra8_u(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SRA8_U));
  #include "insns/sra8_u.h"
  trace_opcode(p,  MATCH_SRA8_U, insn);
  return npc;
}
