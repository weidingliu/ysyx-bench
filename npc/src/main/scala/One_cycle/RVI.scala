package One_cycle
import chisel3._
import chisel3.util._
object RVI_ALU extends InstrType with paramete{
  def ADDI = BitPat("b????????????_?????_000_?????_0010011")
  def SLLI =BitPat("b000000??????_?????_001_?????_0010011")

  def Ebreak = BitPat("0000000_00001_00000_000_00000_1110011")

  val table =Array(
      ADDI -> List(InstrI,FUType.alu,ALUOPType.add),
      SLLI -> List(InstrI, FUType.alu, ALUOPType.sll),
      Ebreak -> List(InstrN,FUType.alu,ALUOPType.ebreak),
  )
}


