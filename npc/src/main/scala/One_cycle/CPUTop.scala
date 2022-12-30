package One_cycle
import chisel3._
import chisel3.util._
class CPUTop extends Module with paramete{
  val io = IO(new Bundle() {
    val pc=Output(UInt(xlen.W))
    val inst=Input(UInt(instlen.W))
    val result=Output(UInt(xlen.W))
  })
  val IF=Module(new IFU)

  val ID = Module(new IDU)

  val EX = Module(new EXU)

  val Reg = new RF

  io.pc := IF.io.pc

  ID.io.inst := io.inst

  ID.io.ctrlIO <> EX.io

  val src1add = Wire(UInt(5.W))
  val src2add = Wire(UInt(5.W))
  EX.io1.REG1 := Reg.read(src1add)
  EX.io1.REG2 := Reg.read(src2add)

  src1add:= ID.io.ctrlIO.src1
  src2add:= ID.io.ctrlIO.src2
  Reg.write(ID.io.ctrlIO.rd,EX.io1.result)

  io.result := EX.io1.result
}

import chisel3.stage._

object Spec extends App{
  (new ChiselStage).emitVerilog(new CPUTop(),Array("--target-dir", "build"))
}
