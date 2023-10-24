// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfsub_vf(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFSUB_VF));
  #include "insns/vfsub_vf.h"
  trace_opcode(p,  MATCH_VFSUB_VF, insn);
  return npc;
}

reg_t rv64_vfsub_vf(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFSUB_VF));
  #include "insns/vfsub_vf.h"
  trace_opcode(p,  MATCH_VFSUB_VF, insn);
  return npc;
}
