// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_ksub64(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KSUB64));
  #include "insns/ksub64.h"
  trace_opcode(p,  MATCH_KSUB64, insn);
  return npc;
}

reg_t rv64_ksub64(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KSUB64));
  #include "insns/ksub64.h"
  trace_opcode(p,  MATCH_KSUB64, insn);
  return npc;
}
