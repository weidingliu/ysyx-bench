// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vmseq_vx(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMSEQ_VX));
  #include "insns/vmseq_vx.h"
  trace_opcode(p,  MATCH_VMSEQ_VX, insn);
  return npc;
}

reg_t rv64_vmseq_vx(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMSEQ_VX));
  #include "insns/vmseq_vx.h"
  trace_opcode(p,  MATCH_VMSEQ_VX, insn);
  return npc;
}
