package One_cycle
import chisel3._
import chisel3.util._
object RVI_ALU extends InstrType with paramete{
  def ADDI = BitPat("b????????????_?????_000_?????_0010011")


  val table =Array(
      ADDI -> List(InstrI,FUType.alu,ALUOPType.add)

  )
}


