package Pipline_CPU
import chisel3._
import chisel3.util._
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
    val in = Decoupled(Flipped(new CtrlFlowIO))

    val out = Decoupled(new DecoderIO)
  })
  val (rs, rt, rd) = (io.in.bits.inst(19, 15), io.in.bits.inst(24, 20), io.in.bits.inst(11, 7))
  val Inst_decode = ListLookup(io.in.bits.inst, Instruction.Decoderfault, Instruction.Decodertable)
  //  println(Inst_decode)
  val instrtype :: futype :: aluoptype :: en :: Nil = Inst_decode


}
