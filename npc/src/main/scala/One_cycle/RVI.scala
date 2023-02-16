package One_cycle
import chisel3._
import chisel3.util._
object RVI_ALU extends paramete{
  def ADDI = BitPat("b????????????_?????_000_?????_0010011")
  def SLLI =BitPat("b000000??????_?????_001_?????_0010011")
  def AUIPC =  BitPat("b????????????_?????_???_?????_0010111")
  def LUI = BitPat("b????????????_?????_???_?????_0110111")
  def ORI = BitPat("b????????????_?????_110_?????_0010011")
  def JAL =BitPat("b????????????_?????_???_?????_1101111")

  def JALR = BitPat("b????????????_?????_000_?????_1100111")

  def LD = BitPat("b???????_?????_?????_011_?????_0000011")
  def Ebreak = BitPat("b0000000_00001_00000_000_00000_1110011")

  val table =Array(
      ADDI -> List(InstrType.InstrI,FUType.alu,ALUOPType.add,RD.write),
      SLLI -> List(InstrType.InstrI, FUType.alu, ALUOPType.sll,RD.write),
      AUIPC -> List(InstrType.InstrU,FUType.alu,ALUOPType.add,RD.write),
      LUI -> List(InstrType.InstrU,FUType.alu,ALUOPType.add,RD.write),
      ORI -> List(InstrType.InstrI,FUType.alu,ALUOPType.or,RD.write),
      JAL -> List(InstrType.InstrJ,FUType.jump,ALUOPType.jal,RD.write),
      JALR -> List(InstrType.InstrI,FUType.jump,ALUOPType.jalr,RD.write),
      LD -> List(InstrType.InstrI,FUType.mem,ALUOPType.ld,RD.write),
      Ebreak -> List(InstrType.InstrN,FUType.alu,ALUOPType.ebreak,RD.NOP),
  )
}


