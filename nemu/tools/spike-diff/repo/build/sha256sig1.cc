// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_sha256sig1(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA256SIG1));
  #include "insns/sha256sig1.h"
  trace_opcode(p,  MATCH_SHA256SIG1, insn);
  return npc;
}

reg_t rv64_sha256sig1(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA256SIG1));
  #include "insns/sha256sig1.h"
  trace_opcode(p,  MATCH_SHA256SIG1, insn);
  return npc;
}
