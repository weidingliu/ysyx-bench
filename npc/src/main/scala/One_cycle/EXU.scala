package One_cycle
import chisel3.{util, _}
import chisel3.util.{BitPat, _}

object ALUOPType{
  def NOP = "b0000000".U
  def add = "b1000000".U
  def sll = "b1000001".U
  def apply() = UInt(7.W)
}

class EXU extends Module with paramete with InstrType {
  val io = IO(new Bundle() {
    val exuIO = new IDUIO()
    val REG1 = Input(UInt(xlen.W))
    val REG2 = Input(UInt(xlen.W))
  })
  val src1 = ListLookup(io.exuIO.src1type,List(0.U),Array(
    BitPat(SRCType.R) -> List(io.REG1),

  ))
  val src2 = ListLookup(io.exuIO.src1type, List(0.U), Array(
    BitPat(SRCType.R) -> List(io.REG2),
    BitPat(SRCType.imm) -> List(io.exuIO.Imm)
  ))

  


}
