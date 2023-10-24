// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_ukaddh(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_UKADDH));
  #include "insns/ukaddh.h"
  trace_opcode(p,  MATCH_UKADDH, insn);
  return npc;
}

reg_t rv64_ukaddh(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_UKADDH));
  #include "insns/ukaddh.h"
  trace_opcode(p,  MATCH_UKADDH, insn);
  return npc;
}
