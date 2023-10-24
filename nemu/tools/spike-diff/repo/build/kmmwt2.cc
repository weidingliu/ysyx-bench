// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_kmmwt2(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KMMWT2));
  #include "insns/kmmwt2.h"
  trace_opcode(p,  MATCH_KMMWT2, insn);
  return npc;
}

reg_t rv64_kmmwt2(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KMMWT2));
  #include "insns/kmmwt2.h"
  trace_opcode(p,  MATCH_KMMWT2, insn);
  return npc;
}
