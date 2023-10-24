// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_smtt32(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SMTT32));
  #include "insns/smtt32.h"
  trace_opcode(p,  MATCH_SMTT32, insn);
  return npc;
}

reg_t rv64_smtt32(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SMTT32));
  #include "insns/smtt32.h"
  trace_opcode(p,  MATCH_SMTT32, insn);
  return npc;
}
