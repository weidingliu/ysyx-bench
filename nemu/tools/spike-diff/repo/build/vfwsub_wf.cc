// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfwsub_wf(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFWSUB_WF));
  #include "insns/vfwsub_wf.h"
  trace_opcode(p,  MATCH_VFWSUB_WF, insn);
  return npc;
}

reg_t rv64_vfwsub_wf(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFWSUB_WF));
  #include "insns/vfwsub_wf.h"
  trace_opcode(p,  MATCH_VFWSUB_WF, insn);
  return npc;
}
