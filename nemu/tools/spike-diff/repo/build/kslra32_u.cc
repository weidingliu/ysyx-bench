// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_kslra32_u(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KSLRA32_U));
  #include "insns/kslra32_u.h"
  trace_opcode(p,  MATCH_KSLRA32_U, insn);
  return npc;
}

reg_t rv64_kslra32_u(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KSLRA32_U));
  #include "insns/kslra32_u.h"
  trace_opcode(p,  MATCH_KSLRA32_U, insn);
  return npc;
}
