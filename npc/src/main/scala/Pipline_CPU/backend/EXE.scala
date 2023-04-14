package Pipline_CPU

import chisel3._
import chisel3.util._
object ALUOPType{
  def NOP = "b0000000".U
  def add = "b1000000".U
  def sll = "b1000001".U
  def ebreak = "b1000010".U
  def div ="b1000011".U
  def jal = "b0011001".U
  def jalr ="b1001000".U
  def or = "b1000100".U
  def ld =  "b1000101".U
  def sd ="b1000110".U
  def lw = "b1000111".U
  def addw = "b1101000".U
  def sub = "b1101001".U
  def sltiu ="b1101010".U
  def beq ="b1101011".U
  def bne ="b1101100".U
  def addiw ="b1101101".U
  def srai ="b1101110".U
  def lbu ="b1101111".U
  def sh ="b1110000".U
  def and ="b1110001".U
  def xor ="b1110010".U
  def sllw ="b1110011".U
  def sb ="b1110100".U
  def srli = "b1110101".U
  def bge = "b1110110".U
  def sw = "b1110111".U
  def mulw ="b1111000".U
  def divw ="b1111001".U
  def remw="b1111010".U
  def blt ="b1111011".U
  def subw = "b0000001".U
  def slt= "b0000010".U
  def lh= "b0000011".U
  def lhu ="b0000100".U
  def sraiw ="b0000110".U
  def slliw ="b0000101".U
  def mul ="b0000111".U
  def srliw = "b0001000".U
  def sraw = "b0001001".U
  def srlw = "b0001010".U
  def bltu = "b0001011".U
  def bgeu ="b0001100".U
  def remuw ="b0001101".U
  def lb ="b0001110".U
  def remu ="b0001111".U
  def divuw ="b0010000".U
  def lwu = "b0010001".U
  def rem = "b0010010".U
  def divu = "b0010011".U
  def sra = "b0010100".U
  def csrrs ="b0010101".U
  def csrrw ="b0010110".U
  def ecall ="b0010111".U
  def mret ="b0011000".U
  def apply() = UInt(7.W)
}
object RD{
  def write="b1".U
  //def read = "b10".U
  def NOP = "b0".U
  def apply() =UInt(1.W)
}

class EXE extends Module with Paramete{
  val io = IO(new Bundle() {
   val in = Decoupled(Flipped(new DecoderIO))
   val branchIO = new BranchIO
    val out = Decoupled(new MEMIO)
  })


  io.out.bits.ctrl_signal <> io.in.bits.ctrl_signal
  io.out.bits.ctrl_flow <> io.in.bits.ctrl_flow

}
