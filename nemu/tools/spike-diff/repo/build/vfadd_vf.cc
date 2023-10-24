// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfadd_vf(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFADD_VF));
  #include "insns/vfadd_vf.h"
  trace_opcode(p,  MATCH_VFADD_VF, insn);
  return npc;
}

reg_t rv64_vfadd_vf(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFADD_VF));
  #include "insns/vfadd_vf.h"
  trace_opcode(p,  MATCH_VFADD_VF, insn);
  return npc;
}
