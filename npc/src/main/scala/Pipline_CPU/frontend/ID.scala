package Pipline_CPU.frontend
import Pipline_CPU._
import Pipline_CPU.utils._
import Pipline_CPU.isa._
import chisel3._
import chisel3.util._
import backend.ALUOPType
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

class ID extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new FetchIO))

    val REG1 = Input(UInt(xlen.W))
    val REG2 = Input(UInt(xlen.W))
    val flush = Input(Bool())

    val ex_is_mem = Input(Bool())
    val ex_reg = Flipped(new RFCtrlIO)

    val out = Decoupled(new DecoderIO)

//    val rf_bus = Output(UInt(5.W))
//    val rf_bus = Output(UInt(5.W))
  })
  val (rs, rt, rd) = (io.in.bits.Inst(19, 15), io.in.bits.Inst(24, 20), io.in.bits.Inst(11, 7))
  val Inst_decode = ListLookup(io.in.bits.Inst, Instruction.Decoderfault, Instruction.Decodertable)
  //  println(Inst_decode)
  val instrtype :: futype :: aluoptype :: en :: Nil = Inst_decode

  val srctype_list = List(
    (InstrType.InstrI) -> (SRCType.R, SRCType.imm),
    (InstrType.InstrR) -> (SRCType.R, SRCType.R),
    (InstrType.InstrS) -> (SRCType.R, SRCType.R),
    (InstrType.InstrB) -> (SRCType.R, SRCType.R),
    (InstrType.InstrJ) -> (SRCType.PC, SRCType.imm),
    (InstrType.InstrU) -> (SRCType.PC, SRCType.imm),

    (InstrType.InstrN) -> (SRCType.R, SRCType.R),

  )

  val srctype1 = LookupTree(instrtype, srctype_list.map(p => (p._1, p._2._1)))
  val srctype2 = LookupTree(instrtype, srctype_list.map(p => (p._1, p._2._2)))
  // Imm decoder
  val immtable = List(
    InstrType.InstrI -> (SIgEXtend(io.in.bits.Inst(31, 20), xlen)),
    InstrType.InstrJ -> (SIgEXtend(Cat(io.in.bits.Inst(19, 12), io.in.bits.Inst(20), io.in.bits.Inst(30, 21), Fill(1, 0.U)), xlen)),
    InstrType.InstrU -> (SIgEXtend(Cat(io.in.bits.Inst(31, 12), Fill(12, 0.U)), xlen)),
    InstrType.InstrS -> (SIgEXtend(Cat(io.in.bits.Inst(31, 25), io.in.bits.Inst(11, 7)), xlen)),
    InstrType.InstrB -> (SIgEXtend(Cat(io.in.bits.Inst(31, 31), io.in.bits.Inst(7, 7), io.in.bits.Inst(30, 25), io.in.bits.Inst(11, 8), Fill(1, 0.U)), xlen)),
  )
  val imm = LookupTree(instrtype, immtable.map(p => (p._1, p._2)))

  //io.out.bits.ctrl_rf.rfDest := rd

  io.out.bits.ctrl_signal.aluoptype := aluoptype
  io.out.bits.ctrl_signal.fuType := futype
  io.out.bits.ctrl_signal.rfWen := Mux(io.in.valid,en,0.U)
  io.out.bits.ctrl_signal.rfSrc1 := rs
  io.out.bits.ctrl_signal.rfSrc2 := rt
  io.out.bits.ctrl_signal.src1Type := srctype1
  io.out.bits.ctrl_signal.src2Type := srctype2
  io.out.bits.ctrl_signal.inst_valid := Mux(aluoptype === ALUOPType.NOP || io.flush || !io.in.valid,0.U,1.U)
  io.out.bits.ctrl_signal.rfDest := rd
  io.out.bits.ctrl_signal.ertn_flush := aluoptype === ALUOPType.mret
  io.out.bits.ctrl_signal.excp_flush := aluoptype === ALUOPType.ecall

  io.out.bits.ctrl_flow.PC := io.in.bits.PC
  io.out.bits.ctrl_flow.inst := io.in.bits.Inst
  io.out.bits.ctrl_flow.Dnpc := 0.U(xlen.W)
  io.out.bits.ctrl_flow.skip := 0.B

  io.out.bits.ctrl_csr.csr_en := Mux((aluoptype === ALUOPType.csrrs || aluoptype === ALUOPType.csrrw) & io.in.valid,true.B,false.B)
  io.out.bits.ctrl_csr.csr_data := 0.U
  io.out.bits.ctrl_csr.csr_idx := imm(11,0)

  io.out.bits.ctrl_data.Imm := imm

  io.out.bits.ctrl_data.src1 := io.REG1
  io.out.bits.ctrl_data.src2 := io.REG2
//  io.out.bits.ctrl_data.src1 :=
//    io.out.bits.ctrl_data.src2 :=
 val stall_req = io.ex_is_mem && io.ex_reg.rfWen && (io.ex_reg.rfDest === rs || io.ex_reg.rfDest === rt)
//  io.out.valid := Mux(io.flush,0.U,1.U)
  io.out.valid := Mux(io.in.valid & !stall_req,1.U,0.U)//Mux(io.out.ready && io.in.valid,1.U,0.U)
  io.in.ready := Mux(stall_req,false.B,io.out.ready)
  //println(io.out.bits.ctrl_signal.inst_valid)
}
