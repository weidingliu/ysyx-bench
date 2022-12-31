package One_cycle
import chisel3._
import chisel3.util._
import chisel3.util.experimental._
trait InstrType{
  def InstrI = "b0000".U
  def InstrR = "b0001".U
  def InstrN = "b0010".U

}

object FUType{
  def alu = "b000".U
  def shift = "b001".U
  def branch = "b010".U
  def apply() = UInt(3.W)
}

object SRCType{
  def R = "b000".U
  def imm = "b001".U
  def apply() = UInt(3.W)
}

class IDUIO extends Bundle with paramete{
  val src1type = Output(SRCType())
  val src2type = Output(SRCType())
  val src1 = Output(UInt(5.W))
  val src2 = Output(UInt(5.W))
  val rd = Output(UInt(5.W))
  val futype = Output(FUType())
  val aluoptype = Output(ALUOPType())
  val Imm = Output(UInt(xlen.W))
}

class IDU extends Module with InstrType with paramete{
    val io = IO(new Bundle() {
      val inst = Input(UInt(instlen.W))
      val ctrlIO= new IDUIO()
    })

    val (rs,rt,rd) = (io.inst(19, 15), io.inst(24, 20), io.inst(11, 7))
    val Inst_decode = ListLookup(io.inst,Instruction.Decoderfault,Instruction.Decodertable)
//  println(Inst_decode)
    val instrtype :: futype :: aluoptype :: Nil =Inst_decode

    io.ctrlIO.futype := futype
    io.ctrlIO.aluoptype := aluoptype

  val srctype_list = Array(
    BitPat(InstrI) -> List(SRCType.R,SRCType.imm),
    BitPat(InstrR) -> List(SRCType.R,SRCType.R),
    BitPat(InstrN) -> List(SRCType.R,SRCType.R),

  )
  val srctype1 :: srctype2 :: Nil = ListLookup(instrtype,List(SRCType.R,SRCType.R),srctype_list)

  io.ctrlIO.src1 := rs
  io.ctrlIO.src2 := rt
  io.ctrlIO.rd := rd

  io.ctrlIO.src1type := srctype1
  io.ctrlIO.src2type := srctype2

  val immtable = Array(
    BitPat(InstrI) -> List(SIgEXtend(io.inst(31, 20), xlen)),
  )
  val imm :: Nil= ListLookup(instrtype,List(0.U(xlen.W)),immtable)
  io.ctrlIO.Imm := imm


}
//import chisel3.stage._
//
//object Spec extends App{
//  (new ChiselStage).emitVerilog(new IDU(),Array("--target-dir", "build"))
//}