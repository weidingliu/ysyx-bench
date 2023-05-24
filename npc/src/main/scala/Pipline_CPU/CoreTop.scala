package Pipline_CPU
import Pipline_CPU.utils._
import Pipline_CPU.frontend._
import Pipline_CPU.backend._
import chisel3._
import chisel3.util._
import cache.Cache
import axi.sram2axi

class DIP_model extends BlackBox{
  val io = IO(new Bundle() {
    val is_break = Input(Bool())
    val rf=Input(Vec(32,UInt(64.W)))
    val inst=Input(UInt(32.W))
    val pc = Input(UInt(64.W))
    val inst_valid = Input(Bool())
    val dnpc = Input(UInt(64.W))
    val is_skip=Input(Bool())

  })
}
//class ifm extends BlackBox{
//  val io = IO(new Bundle() {
//    val reset=Input(Bool())
//    val clk=Input(Clock())
//    val pc = Input(UInt(64.W))
//    val inst = Output(UInt(32.W))
//  })
//}

class SRAM extends BlackBox{
  val io = IO(new Bundle() {
    val reset = Input(Bool())
    val clk = Input(Clock())

    val ar_valid = Input(Bool())
    val ar_ready = Output(Bool())
    val araddr = Input(UInt(64.W))

    val r_valid = Output(Bool())
    val r_ready = Input(Bool())
    val rdata = Output(UInt(64.W))

    val aw_valid = Input(Bool())
    val aw_ready = Output(Bool())
    val awaddr = Input(UInt(64.W))

    val w_valid = Input(Bool())
    val w_ready = Output(Bool())
    val wdata = Input(UInt(64.W))
    val wstrb = Input(UInt(8.W))

    val bvalid = Output(Bool())
    val bready = Input(Bool())
    val bresp = Output(UInt(2.W))
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

//  val IFM = Module(new ifm)

  val ID = Module(new ID)

  val EX = Module(new EXE)

  val DIP = Module(new DIP_model)

  val Reg = new RF

  val mem = Module(new MEM)

  val MEM = Module(new MEM_stage)

  val WB = Module(new WB)

  val bypass = Module(new Bypass)

  val mem_bypass =Module(new MEM_Bypass)

  val ICACHE = Module(new Cache("icache"))

  val If_axi_birdge = Module(new sram2axi)
//  val IFMEM = Module(new MEM)
val IFMEM = Module(new SRAM)

  val MMIO = Module(new MMIO)
//  val DCACHE = Module(new Cache("Dcache"))

//  io.pc := IF.io.out.bits.PC
  // bypass
  bypass.io.Reg1 := Reg.read(ID.io.out.bits.ctrl_signal.rfSrc1)
  bypass.io.Reg2 := Reg.read(ID.io.out.bits.ctrl_signal.rfSrc2)

  bypass.io.reg_index1 := ID.io.out.bits.ctrl_signal.rfSrc1
  bypass.io.reg_index2 := ID.io.out.bits.ctrl_signal.rfSrc2


  // fetch inst
//  IF.io.inst := ICACHE.io.rdata
//  ICACHE.io.in.bits.addr := IF.io.out.bits.PC
  IF.io.cache_req.addr_req <> ICACHE.io.in.addr_req
  IF.io.cache_req.rdata_rep <> ICACHE.io.in.rdata_rep
  ICACHE.io.flush := EX.io.is_flush

  If_axi_birdge.io.in.addr_req <> ICACHE.io.out.addr_req
  If_axi_birdge.io.in.wdata_req.get <> ICACHE.io.out.wdata_req.get
  If_axi_birdge.io.in.rdata_rep <> ICACHE.io.out.rdata_rep
  If_axi_birdge.io.in.wdata_rep.get <> ICACHE.io.out.wdata_rep.get

  IFMEM.io.reset := reset
  IFMEM.io.clk := clock
  If_axi_birdge.io.out.raddr_req.ready := IFMEM.io.ar_ready
  IFMEM.io.ar_valid := If_axi_birdge.io.out.raddr_req.valid
  IFMEM.io.araddr := If_axi_birdge.io.out.raddr_req.bits.addr

  If_axi_birdge.io.out.waddr_req.ready := IFMEM.io.aw_ready
  IFMEM.io.aw_valid := If_axi_birdge.io.out.waddr_req.valid
  IFMEM.io.awaddr := If_axi_birdge.io.out.waddr_req.bits.addr

  If_axi_birdge.io.out.wdata_req.ready := IFMEM.io.w_ready
  IFMEM.io.wdata := If_axi_birdge.io.out.wdata_req.bits.wdata
  IFMEM.io.wstrb := If_axi_birdge.io.out.wdata_req.bits.wmask
  IFMEM.io.w_valid := If_axi_birdge.io.out.wdata_req.valid

  IFMEM.io.r_ready := If_axi_birdge.io.out.rdata_rep.ready
  If_axi_birdge.io.out.rdata_rep.valid := IFMEM.io.r_valid
  If_axi_birdge.io.out.rdata_rep.bits.rdata := IFMEM.io.rdata

  If_axi_birdge.io.out.wb.valid := IFMEM.io.bvalid
  If_axi_birdge.io.out.wb.bits := IFMEM.io.bresp
  IFMEM.io.bready := If_axi_birdge.io.out.wb.ready

//  ICACHE.io.out.rdata_rep.bits.rdata := IFMEM.io.rdata
//  IFMEM.io.clk := clock
//  IFMEM.io.reset := reset
//  IFMEM.io.addr := ICACHE.io.out.addr_req.bits.addr
//  IFMEM.io.wdata := ICACHE.io.out.wdata_req.get.bits.wdata
//  IFMEM.io.wmask := ICACHE.io.out.wdata_req.get.bits.wmask
//  IFMEM.io.we := ICACHE.io.out.addr_req.bits.we
//  IFMEM.io.ce := ICACHE.io.out.addr_req.bits.ce

//  ICACHE.io.out.addr_req.ready := true.B
//  ICACHE.io.out.wdata_req.get.ready := true.B
//  ICACHE.io.out.rdata_rep.valid := true.B
//  ICACHE.io.out.wdata_rep.get := true.B

//  ICACHE.io.out.wdata_re

//  IFM.io.pc := IF.io.out.bits.PC
//  IF.io.inst := IFM.io.inst
//  IFM.io.reset := reset
//  IFM.io.clk := clock
  IF.io.flush := EX.io.is_flush
//  IF.io.flush := EX.io.is_flush
  //ID
  Pipline_Connect(IF.io.out,ID.io.in,ID.io.out.fire,EX.io.is_flush)
  ID.io.REG1 := bypass.io.Bypass_REG1
  ID.io.REG2 := bypass.io.Bypass_REG2
  ID.io.flush := EX.io.is_flush

//  ID.io.exe_is_mem := EX.io.is_mem
//  ID.io.exe_rf <> EX.io.out.bits.ctrl_rf
  //EXE
  Pipline_Connect(ID.io.out,EX.io.in,EX.io.out.fire,EX.io.is_flush)
  IF.io.branch_io <> EX.io.branchIO
  bypass.io.EX_rf <> EX.io.out.bits.ctrl_rf

  mem_bypass.io.Reg1 := EX.io.in.bits.ctrl_data.src1
  mem_bypass.io.Reg2 := EX.io.in.bits.ctrl_data.src2
  mem_bypass.io.reg_index1 := EX.io.in.bits.ctrl_signal.rfSrc1
  mem_bypass.io.reg_index2 := EX.io.in.bits.ctrl_signal.rfSrc2

  EX.io.src1 := mem_bypass.io.Bypass_REG1
  EX.io.src2 := mem_bypass.io.Bypass_REG2

//  ID.io.flush := EX.io.is_flush
//MEM
  Pipline_Connect(EX.io.out,MEM.io.in,MEM.io.out.fire,0.B)
//  MEM.io.mem.rdata := DCACHE.io.in.rdata_rep.bits.rdata

//  MEM.io.cache_io <> DCACHE.io.in
//  DCACHE.io.out.addr_req.ready := true.B
//  DCACHE.io.flush := false.B
//  mem.io.addr := DCACHE.io.out.addr_req.bits.addr
//  mem.io.wdata := DCACHE.io.out.wdata_req.get.bits.wdata
//  DCACHE.io.out.rdata_rep.bits.rdata := mem.io.rdata
//  mem.io.ce := DCACHE.io.out.addr_req.bits.ce
//  mem.io.we := DCACHE.io.out.addr_req.bits.we
//  mem.io.wmask := DCACHE.io.out.wdata_req.get.bits.wmask
//
//  DCACHE.io.out.wdata_req.get.ready := true.B
//  DCACHE.io.out.rdata_rep.valid := true.B
//  DCACHE.io.out.wdata_rep.get := true.B
  MEM.io.cache_io <> MMIO.io.in
  MMIO.io.out.addr_req.ready := true.B
//  MMIO.io.flush := false.B
  mem.io.addr := MMIO.io.out.addr_req.bits.addr
  mem.io.wdata := MMIO.io.out.wdata_req.get.bits.wdata
  MMIO.io.out.rdata_rep.bits.rdata := mem.io.rdata
  mem.io.ce := MMIO.io.out.addr_req.bits.ce
  mem.io.we := MMIO.io.out.addr_req.bits.we
  mem.io.wmask := MMIO.io.out.wdata_req.get.bits.wmask

  MMIO.io.out.wdata_req.get.ready := true.B
  MMIO.io.out.rdata_rep.valid := true.B
  MMIO.io.out.wdata_rep.get := true.B

//  MEM.io.mem.rdata := mem.io.rdata
//  mem.io.wdata := MEM.io.mem.wdata
//  mem.io.addr := MEM.io.mem.addr
//  mem.io.wmask := MEM.io.mem.wmask
//  mem.io.ce := MEM.io.mem.ce
//  mem.io.we := MEM.io.mem.we
  mem.io.clk := clock
  mem.io.reset := reset
  bypass.io.MEM_rf <> MEM.io.out.bits.ctrl_rf

  mem_bypass.io.MEM_rf <> MEM.io.out.bits.ctrl_rf


//WB
  Pipline_Connect(MEM.io.out,WB.io.in,WB.io.out.fire,0.B)
  when((WB.io.out.bits.ctrl_rf.rfWen === RD.write)) {
    Reg.write(WB.io.out.bits.ctrl_rf.rfDest, WB.io.out.bits.ctrl_rf.rfData)
  }
  WB.io.out.ready := 1.U
  bypass.io.WB_rf <> WB.io.out.bits.ctrl_rf


  DIP.io.is_break := RegNext(RegNext(EX.io.is_break))
  for (i <- 0 until NReg) {
    DIP.io.rf(i) := Reg.rf(i)
  }
  DIP.io.inst := RegNext(WB.io.out.bits.ctrl_flow.inst)
  DIP.io.is_skip := RegNext(WB.io.out.bits.ctrl_flow.skip)
  DIP.io.inst_valid := RegNext(Mux(WB.io.out.valid,WB.io.out.bits.ctrl_signal.inst_valid,0.U))
  DIP.io.pc := RegNext(WB.io.out.bits.ctrl_flow.PC)
  DIP.io.dnpc := RegNext(WB.io.out.bits.ctrl_flow.Dnpc)
  io.inst := WB.io.out.bits.ctrl_flow.inst
  io.pc := IF.io.out.bits.PC

}

import chisel3.stage._

object Spec extends App{
  (new ChiselStage).emitVerilog(new CoreTop(),Array("--target-dir", "build"))
}
