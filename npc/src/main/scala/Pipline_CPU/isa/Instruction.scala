package Pipline_CPU

import chisel3._
import chisel3.util._


object Bit_match{

}


object Instruction extends Paramete {
  def NOP = 0x00000013.U
  val Decoderfault =List(InstrType.InstrN,FUType.alu,ALUOPType.NOP,RD.NOP)
  def Decodertable = RVI.table ++ RVR.table ++ RVSN.table ++ RVB.table ++Priviledged.table
}
