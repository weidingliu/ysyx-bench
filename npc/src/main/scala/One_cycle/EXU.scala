package One_cycle
import chisel3._
import chisel3.util._

object ALUOPType{
  def NOP = "0000000".U
  def add = "1000000".U
  def apply() = UInt(7.W)
}

class EXU {

}
