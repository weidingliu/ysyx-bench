package One_cycle
import chisel3._
import chisel3.util._
import chisel3.util.experimental._
object InstrType{
  def InstrI = "b1000".U
  def InstrR = "b0101".U
  def InstrN = "b0000".U

  def InstrU = "b0011".U
  def InstrB = "b1011".U
  def InstrJ = "b0111".U
  def InstrS = "b1001".U

}

object FUType{
  def alu = "b000".U
  def shift = "b001".U
  def branch = "b010".U
  def jump ="b011".U
  def mem="b100".U
  def compar="b101".U
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

  val srctype_list = List(
    (InstrType.InstrI) -> (SRCType.R,SRCType.imm),
    (InstrType.InstrR) -> (SRCType.R, SRCType.R),
    (InstrType.InstrS) -> (SRCType.R, SRCType.R),
    (InstrType.InstrB) -> (SRCType.R, SRCType.R),
    (InstrType.InstrJ) -> (SRCType.PC,SRCType.imm),
    (InstrType.InstrU) -> (SRCType.PC,SRCType.imm),

    (InstrType.InstrN) -> (SRCType.R,SRCType.R),
    
  )
  //val srctype= LookupTree(instrtype,List(SRCType.R,SRCType.R),srctype_list)
  //val srctype1 :: srctype2 :: Nil =  srctype
  val srctype1 = LookupTree(instrtype,srctype_list.map(p=>(p._1,p._2._1)))
  val srctype2 = LookupTree(instrtype,srctype_list.map(p=>(p._1,p._2._2)))

  io.ctrlIO.src1 := rs
  io.ctrlIO.src2 := rt
  io.ctrlIO.rd := rd

  io.ctrlIO.src1type := Mux(io.inst(6,0) ==="b0110111".U,SRCType.DONT_Care,srctype1)
  io.ctrlIO.src2type := srctype2

  val immtable = List(
    InstrType.InstrI -> (SIgEXtend(io.inst(31, 20), xlen)),
    InstrType.InstrJ -> (SIgEXtend(Cat(io.inst(19,12),io.inst(20),io.inst(30,21),Fill(1,0.U)), xlen)),
    InstrType.InstrU -> (SIgEXtend(Cat(io.inst(31,12),Fill(12,0.U)), xlen)),
    InstrType.InstrS -> (SIgEXtend(Cat(io.inst(31,25),io.inst(11,7)), xlen)),
    InstrType.InstrB -> (SIgEXtend(Cat(io.inst(31,31),io.inst(7,7),io.inst(30,25),io.inst(11,8),Fill(1,0.U)), xlen)),
  )
  val imm = LookupTree(instrtype,immtable.map(p=>(p._1,p._2)))
  //val imm :: Nil =imm_list
  io.ctrlIO.Imm := imm
  io.rd_en := en
  io.mem_we := Mux((aluoptype=== ALUOPType.ld || aluoptype === ALUOPType.lw || aluoptype === ALUOPType.lbu|| aluoptype === ALUOPType.lh
    || aluoptype === ALUOPType.lhu || aluoptype === ALUOPType.lb || aluoptype === ALUOPType.lwu),0.U,1.U)

}
//import chisel3.stage._
//
//object Spec extends App{
//  (new ChiselStage).emitVerilog(new IDU(),Array("--target-dir", "build"))
//}