package One_cycle
import chisel3._
import chisel3.util._

class DIP_model extends BlackBox{
  val io = IO(new Bundle() {
    val is_break = Input(Bool())
    val rf=Input(Vec(32,UInt(64.W)))
    val inst=Input(UInt(32.W))

  })
}
class ifm extends BlackBox{
  val io = IO(new Bundle() {
    val reset=Input(Bool())
    val clk=Input(UInt(1.W))
    val pc = Input(UInt(64.W))
    val inst = Output(UInt(32.W))
  })
}

class MEM extends BlackBox{
  val io=IO(new Bundle() {
    val addr=Input(UInt(64.W))
    val reset=Input(Bool())
    val clk=Input(UInt(1.W))
    val we=Input(Bool())
    val ce=Input(Bool())
    val wdata=Input(UInt(64.W))
    val rdata=Output(UInt(64.W))
    val wmask=Input(UInt(8.W))

  })

}

class CPUTop extends Module with paramete{
  val io = IO(new Bundle() {
    val pc=Output(UInt(xlen.W))
    val inst=Input(UInt(instlen.W))
    val result=Output(UInt(xlen.W))
  })
  val IF=Module(new IFU)

  val IFM =Module(new ifm)

  val ID = Module(new IDU)

  val EX = Module(new EXU)

  val DIP = Module(new DIP_model)

  val Reg = new RF

  val mem = Module(new MEM)

  io.pc := IF.io.pc

  IFM.io.pc := IF.io.pc

  ID.io.inst := IFM.io.inst

  ID.io.ctrlIO <> EX.io
  EX.io1.PC := IF.io.pc

  val src1add = Wire(UInt(5.W))
  val src2add = Wire(UInt(5.W))
  EX.io1.REG1 := Reg.read(src1add)
  EX.io1.REG2 := Reg.read(src2add)

  IF.io.dnpc := EX.io1.dnpc
  IF.io.is_jump := EX.io1.is_jump
  IF.io.is_branch := EX.io1.is_branch

  src1add:= ID.io.ctrlIO.src1
  src2add:= ID.io.ctrlIO.src2
  when((ID.io.rd_en === RD.write)){
    Reg.write(ID.io.ctrlIO.rd,EX.io1.result)
  }


  io.result := EX.io1.result

  DIP.io.is_break := EX.io1.is_break
  for (i <- 0 until NReg){
    DIP.io.rf(i) := Reg.rf(i)
  }
  DIP.io.inst := io.inst

  mem.io.addr:= EX.io1.addr
  EX.io1.rdata := mem.io.rdata
  mem.io.wdata := EX.io1.wdata
  mem.io.wmask := EX.io1.wmask
  mem.io.ce := Mux((ID.io.ctrlIO.futype === FUType.mem),1.U,0.U)
  mem.io.we := ID.io.mem_we
  mem.io.reset := reset
  IFM.io.reset := reset
  mem.io.clk := clock
  IFM.io.clk := clock
}

import chisel3.stage._

object Spec extends App{
  (new ChiselStage).emitVerilog(new CPUTop(),Array("--target-dir", "build"))
}
