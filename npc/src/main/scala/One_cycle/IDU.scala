package One_cycle
import chisel3._
import chisel3.util._
import chisel3.util.experimental._
object InstrType{
  def InstrI = "b1000".U
  def InstrR = "b0101".U
  def InstrN = "b0000".U

  def InstrU = "b0011".U
  def InstrJ = "b0111".U
  def InstrS = "b1001".U

}

object FUType{
  def alu = "b000".U
  def shift = "b001".U
  def branch = "b010".U
  def jump ="b011".U
  def mem="b100".U
  def apply() = UInt(3.W)
}

object SRCType{
  def R = "b000".U
  def imm = "b001".U
  def PC = "b010".U
  def DONT_Care = "b011".U
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

class IDU extends Module with paramete{
    val io = IO(new Bundle() {
      val inst = Input(UInt(instlen.W))
      val ctrlIO= new IDUIO()
      val rd_en=Output(RD())
      val mem_we=Output(Bool())
    })

    val (rs,rt,rd) = (io.inst(19, 15), io.inst(24, 20), io.inst(11, 7))
    val Inst_decode = ListLookup(io.inst,Instruction.Decoderfault,Instruction.Decodertable)
//  println(Inst_decode)
    val instrtype :: futype :: aluoptype :: en :: Nil =Inst_decode

    io.ctrlIO.futype := futype
    io.ctrlIO.aluoptype := aluoptype

  val srctype_list = Array(
    BitPat(InstrType.InstrI) -> List(SRCType.R,SRCType.imm),
    BitPat(InstrType.InstrJ) -> List(SRCType.PC,SRCType.imm),
    BitPat(InstrType.InstrU) -> List(SRCType.PC,SRCType.imm),
    BitPat(InstrType.InstrR) -> List(SRCType.R,SRCType.R),
    BitPat(InstrType.InstrS) -> List(SRCType.R,SRCType.R),
    BitPat(InstrType.InstrN) -> List(SRCType.R,SRCType.R),


  )
  val srctype= ListLookup(instrtype,List(SRCType.R,SRCType.R),srctype_list)
  val srctype1 :: srctype2 :: Nil =  srctype

  io.ctrlIO.src1 := rs
  io.ctrlIO.src2 := rt
  io.ctrlIO.rd := rd

  io.ctrlIO.src1type := Mux(io.inst(6,0) ==="b0110111".U,SRCType.DONT_Care,srctype1)
  io.ctrlIO.src2type := srctype2

  val immtable = Array(
    BitPat(InstrType.InstrI) -> List(SIgEXtend(io.inst(31, 20), xlen)),
    BitPat(InstrType.InstrJ) -> List(SIgEXtend(Cat(io.inst(19,12),io.inst(20),io.inst(30,21),Fill(1,0.U)), xlen)),
    BitPat(InstrType.InstrU) -> List(SIgEXtend(Cat(io.inst(31,12),Fill(12,0.U)), xlen)),
    BitPat(InstrType.InstrU) -> List(SIgEXtend(Cat(io.inst(31,25),io.inst(11,7)), xlen)),
  )
  val imm_list = ListLookup(instrtype,List(0.U(xlen.W)),immtable)
  val imm :: Nil =imm_list
  io.ctrlIO.Imm := imm
  io.rd_en := en
  io.mem_we := Mux(aluoptype=== ALUOPType.ld,0.U,1.U)

}
//import chisel3.stage._
//
//object Spec extends App{
//  (new ChiselStage).emitVerilog(new IDU(),Array("--target-dir", "build"))
//}