// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_viota_m(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VIOTA_M));
  #include "insns/viota_m.h"
  trace_opcode(p,  MATCH_VIOTA_M, insn);
  return npc;
}

reg_t rv64_viota_m(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VIOTA_M));
  #include "insns/viota_m.h"
  trace_opcode(p,  MATCH_VIOTA_M, insn);
  return npc;
}
