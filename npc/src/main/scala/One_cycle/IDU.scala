package One_cycle
import chisel3._
import chisel3.util._

trait InstrType{
  def InstrI = "b0000".U
  def InstrR = "b0001".U
  def InstrN = "b0010".U

}

object FUType{
  def alu = "b000".U
  def shift = "b001".U
  def branch = "b010".U
  def apply() = UInt(3.W)
}

object SRCType{
  def R = "b000".U
  def imm = "b001".U
  def apply() = UInt(3.W)
}

class IDUIO extends Bundle with paramete{
  val src1type = Output(SRCType())
  val src2type = Output(SRCType())
  val src1 = Output(UInt(5.W))
  val src2 = Output(UInt(5.W))
  val futype = Output(FUType())
  val aluoptype = Output(ALUOPType())
  val Imm = Output(UInt(xlen.W))
}

class IDU extends Module with InstrType with paramete{
    val io = IO(new Bundle() {
      val inst = Input(UInt(instlen.W))
    })
    val ctrlIO= new IDUIO()
    val (rs,rt,rd) = (io.inst(19, 15), io.inst(24, 20), io.inst(11, 7))
    val Inst_decode = ListLookup(io.inst,Instruction.Decoderfault,Instruction.Decodertable)
//  println(Inst_decode)

}
object test extends App {
   val q=new IDU()
   print(q.Inst_decode)
}