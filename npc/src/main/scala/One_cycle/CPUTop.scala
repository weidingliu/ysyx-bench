package One_cycle
import chisel3._
import chisel3.util._

class DIP_model extends BlackBox{
  val io = IO(new Bundle() {
    val is_break = Input(Bool())
    val rf=Input(Vec(32,UInt(64.W)))
    val inst=Input(UInt(32.W))
    val npc=Input(UInt(64.W))

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

class CPUTop extends Module with paramete{
  val io = IO(new Bundle() {
    val pc=Output(UInt(xlen.W))
    val inst=Input(UInt(instlen.W))
    val result=Output(UInt(xlen.W))
    val time_int = Output(UInt(1.W))
  })
  val IF=Module(new IFU)

  val IFM =Module(new ifm)

  val ID = Module(new IDU)

  val EX = Module(new EXU)

  val DIP = Module(new DIP_model)

  val Reg = new RF

  val mem = Module(new MEM)

  val mmio = Module(new MMIO)

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
  DIP.io.npc := IF.temp
  for (i <- 0 until NReg){
    DIP.io.rf(i) := Mux(ID.io.rd_en === RD.write & ID.io.ctrlIO.rd===i.asUInt,EX.io1.result,Reg.rf(i))
  }
  DIP.io.inst := io.inst


  mem.io.addr:= mmio.io.addr_m
  mmio.io.rdata_m := mem.io.rdata
  mem.io.wdata := mmio.io.wdata_m
  mem.io.wmask := mmio.io.wmask_m
  mem.io.ce := mmio.io.ce_m
  mem.io.we := mmio.io.we_m

  mmio.io.addr := EX.io1.addr
  EX.io1.rdata := mmio.io.rdata
  mmio.io.wdata := EX.io1.wdata
  mmio.io.wmask := EX.io1.wmask
  mmio.io.ce := Mux((ID.io.ctrlIO.futype === FUType.mem), 1.U, 0.U)
  mmio.io.we := ID.io.mem_we


  mem.io.reset := reset
  IFM.io.reset := reset
  mem.io.clk := clock
  IFM.io.clk := clock

  EX.io1.mtime := mmio.io.time
  EX.io1.mtimecmp := mmio.io.timecmp
  mmio.io.time_int := EX.io1.time_int
  io.time_int := EX.io1.time_int

}

import chisel3.stage._

object Spec extends App{
  (new ChiselStage).emitVerilog(new CPUTop(),Array("--target-dir", "build"))
}
