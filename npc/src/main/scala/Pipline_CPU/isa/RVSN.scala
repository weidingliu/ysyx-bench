package Pipline_CPU

import chisel3.util.BitPat

object RVSN extends Paramete{

  def AUIPC = BitPat("b????????????_?????_???_?????_0010111")
  def LUI = BitPat("b????????????_?????_???_?????_0110111")
  def SD = BitPat("b???????_?????_?????_011_?????_0100011")
  def SH = BitPat("b???????_?????_?????_001_?????_0100011")
  def SB = BitPat("b??????? ????? ????? 000 ????? 01000 11")
  def SW = BitPat("b???????_?????_?????_010_?????_0100011")
  def Ebreak = BitPat("b0000000_00001_00000_000_00000_1110011")


  val table = Array(
    AUIPC -> List(InstrType.InstrU,FUType.alu,ALUOPType.add,RD.write),
    LUI -> List(InstrType.InstrU,FUType.alu,ALUOPType.add,RD.write),
    SD -> List(InstrType.InstrS,FUType.mem,ALUOPType.sd,RD.NOP),
    SH -> List(InstrType.InstrS,FUType.mem,ALUOPType.sh,RD.NOP),
    SB -> List(InstrType.InstrS,FUType.mem,ALUOPType.sb,RD.NOP),
    SW -> List(InstrType.InstrS,FUType.mem,ALUOPType.sw,RD.NOP),
    Ebreak -> List(InstrType.InstrN,FUType.alu,ALUOPType.ebreak,RD.NOP),
    )
}
