// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vsbc_vxm(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VSBC_VXM));
  #include "insns/vsbc_vxm.h"
  trace_opcode(p,  MATCH_VSBC_VXM, insn);
  return npc;
}

reg_t rv64_vsbc_vxm(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VSBC_VXM));
  #include "insns/vsbc_vxm.h"
  trace_opcode(p,  MATCH_VSBC_VXM, insn);
  return npc;
}
