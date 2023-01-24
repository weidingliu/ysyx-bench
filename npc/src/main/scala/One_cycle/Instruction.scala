package One_cycle
import chisel3._
import chisel3.util._

object Instruction extends paramete with InstrType {
    def NOP = 0x00000013.U
    val Decoderfault =List(InstrN,FUType.alu,ALUOPType.ebreak)
  def Decodertable = RVI_ALU.table
}
