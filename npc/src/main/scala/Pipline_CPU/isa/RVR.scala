package Pipline_CPU.isa
import Pipline_CPU._
import Pipline_CPU.frontend._
import Pipline_CPU.backend._

import chisel3.util.BitPat

object RVR extends Paramete{

  def SLLI = BitPat("b000000?_?????_?????_001_?????_0010011")
  def ADDW = BitPat("b0000000_?????_?????_000_?????_0111011")
  def SUB = BitPat("b0100000_?????_?????_000_?????_0110011")
  def ADDIW = BitPat("b???????_?????_?????_000_?????_0011011")
  def ADD = BitPat("b0000000_?????_?????_000_?????_0110011")
  def AND = BitPat("b0000000_?????_?????_111_?????_0110011")
  def SLTU = BitPat("b0000000_?????_?????_011_?????_0110011")
  def SLLW = BitPat("b0000000_?????_?????_001_?????_0111011")
  def OR = BitPat("b0000000_?????_?????_110_?????_0110011")
  def MULW = BitPat("b0000001_?????_?????_000_?????_0111011")
  def DIVW = BitPat("b0000001_?????_?????_100_?????_0111011")
  def REMW = BitPat("b0000001_?????_?????_110_?????_0111011")
  def SUBW = BitPat("b0100000_?????_?????_000_?????_0111011")
  def SLT = BitPat("b0000000_?????_?????_010_?????_0110011")
  def MUL = BitPat("b0000001_?????_?????_000_?????_0110011")
  def SRLIW = BitPat("b000000?_?????_?????_101_?????_0011011")
  def SRAW = BitPat("b0100000_?????_?????_101_?????_0111011")
  def SRLW = BitPat("b0000000_?????_?????_101_?????_0111011")
  def XOR = BitPat("b0000000_?????_?????_100_?????_0110011")
  def REMUW = BitPat("b0000001_?????_?????_111_?????_0111011")
  def SLL = BitPat("b0000000_?????_?????_001_?????_0110011")
  def REMU = BitPat("b0000001_?????_?????_111_?????_0110011")
  def DIVUW = BitPat("b0000001_?????_?????_101_?????_0111011")
  def REM = BitPat("b0000001_?????_?????_110_?????_0110011")
  def SRL = BitPat("b0000000_?????_?????_101_?????_0110011")
  def DIVU = BitPat("b0000001_?????_?????_101_?????_0110011")
  def DIV = BitPat("b0000001_?????_?????_100_?????_0110011")
  def SRA = BitPat("b010000?_?????_?????_101_?????_0110011")



  val table = Array(
    ADDW -> List(InstrType.InstrR, FUType.alu, ALUOPType.addw, RD.write),
    SUB -> List(InstrType.InstrR, FUType.alu, ALUOPType.sub, RD.write),
    ADD -> List(InstrType.InstrR,FUType.alu,ALUOPType.add,RD.write),
    AND -> List(InstrType.InstrR, FUType.alu, ALUOPType.and, RD.write),
    SLTU -> List(InstrType.InstrR, FUType.compar, ALUOPType.sltiu, RD.write), //////////////
    SLLW -> List(InstrType.InstrR,FUType.shift,ALUOPType.sllw,RD.write),
    OR -> List(InstrType.InstrR,FUType.alu,ALUOPType.or,RD.write),
    MULW -> List(InstrType.InstrR, FUType.alu, ALUOPType.mulw, RD.write),
    DIVW -> List(InstrType.InstrR, FUType.alu, ALUOPType.divw, RD.write),
    REMW -> List(InstrType.InstrR, FUType.alu, ALUOPType.remw, RD.write),
    SUBW -> List(InstrType.InstrR, FUType.alu, ALUOPType.subw, RD.write),
    SLT -> List(InstrType.InstrR, FUType.compar, ALUOPType.slt, RD.write),
    SRAW -> List(InstrType.InstrR, FUType.shift, ALUOPType.sraw, RD.write),
    SRLW -> List(InstrType.InstrR, FUType.shift, ALUOPType.srlw, RD.write),
    XOR -> List(InstrType.InstrR, FUType.alu, ALUOPType.xor, RD.write),
    REMUW -> List(InstrType.InstrR, FUType.alu, ALUOPType.remuw, RD.write),
    SLL -> List(InstrType.InstrR, FUType.shift, ALUOPType.sll, RD.write),
    REMU -> List(InstrType.InstrR, FUType.alu, ALUOPType.remu, RD.write),
    DIVUW -> List(InstrType.InstrR, FUType.alu, ALUOPType.divuw, RD.write),
    REM -> List(InstrType.InstrR, FUType.alu, ALUOPType.rem, RD.write),
    SRL -> List(InstrType.InstrR, FUType.shift, ALUOPType.srli, RD.write),
    DIVU -> List(InstrType.InstrR, FUType.alu, ALUOPType.divu, RD.write),
    DIV -> List(InstrType.InstrR, FUType.alu, ALUOPType.div, RD.write),
    SRA -> List(InstrType.InstrR, FUType.alu, ALUOPType.sra, RD.write),
    MUL ->List(InstrType.InstrR,FUType.alu,ALUOPType.mul,RD.write),

  )
}
