package Pipline_CPU.isa
import Pipline_CPU._
import Pipline_CPU.frontend._
import Pipline_CPU.backend._

import chisel3._
import chisel3.util._



object Instruction extends Paramete {
  def NOP = 0x00000013.U
  val Decoderfault =List(InstrType.InstrN,FUType.alu,ALUOPType.NOP,RD.NOP)
  def Decodertable = RVI.table ++ RVR.table ++ RVSN.table ++ RVB.table ++Priviledged.table
}
