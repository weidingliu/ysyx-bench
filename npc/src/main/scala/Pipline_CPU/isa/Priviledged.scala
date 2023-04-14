package Pipline_CPU

import chisel3.util.BitPat

object Priviledged extends Paramete{

  //privileged instruction
  def ECALL = BitPat("b0000000_00000_00000_000_00000_1110011")

  def MRET = BitPat("b0011000_00010_00000_000_00000_1110011")

  def CSRRS = BitPat("b???????_?????_?????_010_?????_1110011")

  def CSRRW = BitPat("b???????_?????_?????_001_?????_1110011")

  val table = Array(
    CSRRS -> List(InstrType.InstrI, FUType.alu, ALUOPType.csrrs, RD.write),
    CSRRW -> List(InstrType.InstrI, FUType.alu, ALUOPType.csrrw, RD.write),
    ECALL -> List(InstrType.InstrN, FUType.alu, ALUOPType.ecall, RD.NOP),
    MRET -> List(InstrType.InstrN, FUType.alu, ALUOPType.mret, RD.NOP),
  )
}
