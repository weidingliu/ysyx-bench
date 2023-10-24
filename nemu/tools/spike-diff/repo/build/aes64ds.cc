// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_aes64ds(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_AES64DS));
  #include "insns/aes64ds.h"
  trace_opcode(p,  MATCH_AES64DS, insn);
  return npc;
}

reg_t rv64_aes64ds(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_AES64DS));
  #include "insns/aes64ds.h"
  trace_opcode(p,  MATCH_AES64DS, insn);
  return npc;
}
