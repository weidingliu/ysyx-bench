// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfwsub_vf(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFWSUB_VF));
  #include "insns/vfwsub_vf.h"
  trace_opcode(p,  MATCH_VFWSUB_VF, insn);
  return npc;
}

reg_t rv64_vfwsub_vf(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFWSUB_VF));
  #include "insns/vfwsub_vf.h"
  trace_opcode(p,  MATCH_VFWSUB_VF, insn);
  return npc;
}
