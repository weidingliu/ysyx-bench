package Pipline_CPU
import Pipline_CPU.utils._
import Pipline_CPU.frontend._
import Pipline_CPU.backend._
import chisel3._
import chisel3.util._

class DIP_model extends BlackBox{
  val io = IO(new Bundle() {
    val is_break = Input(Bool())
    val rf=Input(Vec(32,UInt(64.W)))
    val inst=Input(UInt(32.W))
    val pc = Input(UInt(64.W))
    val inst_valid = Input(Bool())

  })
}
class ifm extends BlackBox{
  val io = IO(new Bundle() {
    val reset=Input(Bool())
    val clk=Input(Clock())
    val pc = Input(UInt(64.W))
    val inst = Output(UInt(32.W))
  })
}

class MEM extends BlackBox{
  val io=IO(new Bundle() {
    val addr=Input(UInt(64.W))
    val reset=Input(Bool())
    val clk=Input(Clock())
    val we=Input(Bool())
    val ce=Input(Bool())
    val wdata=Input(UInt(64.W))
    val rdata=Output(UInt(64.W))
    val wmask=Input(UInt(8.W))

  })

}

class CoreTop extends Module with Paramete{
  val io =IO(new Bundle() {
    val pc = Output(UInt(xlen.W))
    val inst = Output(UInt(instlen.W))
//    val inst_valid = Output(Bool())
//    val result = Output(UInt(xlen.W))
//    val time_int = Output(UInt(1.W))
  })
  val IF = Module(new IF)

  val IFM = Module(new ifm)

  val ID = Module(new ID)

  val EX = Module(new EXE)

  val DIP = Module(new DIP_model)

  val Reg = new RF

  val mem = Module(new MEM)

  val MEM = Module(new MEM_stage)

  val WB = Module(new WB)

//  io.pc := IF.io.out.bits.PC
  // fetch inst
  IFM.io.pc := IF.io.out.bits.PC
  IF.io.inst := IFM.io.inst

  Pipline_Connect(IF.io.out,ID.io.in,ID.io.out.fire,EX.io.flush)
  ID.io.REG1 := Reg.read(ID.io.out.bits.ctrl_signal.rfSrc1)
  ID.io.REG2 := Reg.read(ID.io.out.bits.ctrl_signal.rfSrc1)
  Pipline_Connect(ID.io.out,EX.io.in,EX.io.out.fire,EX.io.flush)
  IF.io.branch_io <> EX.io.branchIO

  Pipline_Connect(EX.io.out,MEM.io.in,MEM.io.out.fire,0.B)
  MEM.io.mem.rdata := mem.io.rdata
  mem.io.wdata := MEM.io.mem.wdata
  mem.io.addr := MEM.io.mem.addr
  mem.io.wmask := MEM.io.mem.wmask
  mem.io.ce := MEM.io.mem.ce
  mem.io.we := MEM.io.mem.we

  Pipline_Connect(MEM.io.out,WB.io.in,WB.io.out.fire,0.B)
  when((WB.io.out.bits.ctrl_rf.rfWen === RD.write)) {
    Reg.write(WB.io.out.bits.ctrl_rf.rfDest, WB.io.out.bits.ctrl_rf.rfData)
  }

  WB.io.out.ready := 1.U

  mem.io.reset := reset
  IFM.io.reset := reset
  mem.io.clk := clock
  IFM.io.clk := clock


  DIP.io.is_break := EX.io.is_break
  for (i <- 0 until NReg) {
    DIP.io.rf(i) := RegNext(Reg.rf(i))
  }
  DIP.io.inst := RegNext(WB.io.out.bits.ctrl_flow.inst)
  DIP.io.inst_valid := RegNext(WB.io.out.bits.ctrl_signal.inst_valid)
  DIP.io.pc := RegNext(WB.io.out.bits.ctrl_flow.PC)
  io.inst := RegNext(WB.io.out.bits.ctrl_flow.inst)
  io.pc := IF.io.out.bits.PC

}

import chisel3.stage._

object Spec extends App{
  (new ChiselStage).emitVerilog(new CoreTop(),Array("--target-dir", "build"))
}
