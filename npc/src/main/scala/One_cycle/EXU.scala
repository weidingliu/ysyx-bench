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
//    val ctrlIO = new IDUIO
    val src1type = Input(SRCType())
    val src2type = Input(SRCType())
    val src1 = Input(UInt(5.W))
    val src2 = Input(UInt(5.W))

    val rd = Input(UInt(5.W))
    val futype = Input(FUType())
    val aluoptype = Input(ALUOPType())
    val Imm = Input(UInt(xlen.W))



  })
  val io1 = IO(new Bundle() {
    val REG1 = Input(UInt(xlen.W))
    val REG2 = Input(UInt(xlen.W))
    val result = Output(UInt(xlen.W))
  })
  val src1 :: Nil= ListLookup(io.src1type,List(0.U(xlen.W)),Array(
    BitPat(SRCType.R) -> List(io1.REG1),

  ))
  val src2 :: Nil= ListLookup(io.src2type, List(0.U(xlen.W)), Array(
    BitPat(SRCType.R) -> List(io1.REG2),
    BitPat(SRCType.imm) -> List(io.Imm)
  ))

  switch(io.aluoptype){
    is(ALUOPType.add){
      io1.result := src1 + src2
    }
  }


}
