// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_aes32esi(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_AES32ESI));
  #include "insns/aes32esi.h"
  trace_opcode(p,  MATCH_AES32ESI, insn);
  return npc;
}

reg_t rv64_aes32esi(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_AES32ESI));
  #include "insns/aes32esi.h"
  trace_opcode(p,  MATCH_AES32ESI, insn);
  return npc;
}
