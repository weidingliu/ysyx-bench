// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vadc_vim(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VADC_VIM));
  #include "insns/vadc_vim.h"
  trace_opcode(p,  MATCH_VADC_VIM, insn);
  return npc;
}

reg_t rv64_vadc_vim(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VADC_VIM));
  #include "insns/vadc_vim.h"
  trace_opcode(p,  MATCH_VADC_VIM, insn);
  return npc;
}
