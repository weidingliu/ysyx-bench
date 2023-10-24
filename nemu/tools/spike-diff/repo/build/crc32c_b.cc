// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_crc32c_b(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_CRC32C_B));
  #include "insns/crc32c_b.h"
  trace_opcode(p,  MATCH_CRC32C_B, insn);
  return npc;
}

reg_t rv64_crc32c_b(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_CRC32C_B));
  #include "insns/crc32c_b.h"
  trace_opcode(p,  MATCH_CRC32C_B, insn);
  return npc;
}
