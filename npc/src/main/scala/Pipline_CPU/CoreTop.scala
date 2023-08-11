package Pipline_CPU
import Pipline_CPU.utils._
import Pipline_CPU.frontend._
import Pipline_CPU.backend._
import chisel3._
import chisel3.util._
import cache.Cache_Axi
import axi.sram2axi
import axi.Sram2axi_mulit
import axi.AxiliteArbiter
import axi.Axi_FULLArbiter

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


class SRAM_AXI extends BlackBox{
  val io = IO(new Bundle() {
    val reset = Input(Bool())
    val clk = Input(Clock())

    val ar_valid = Input(Bool())
    val ar_ready = Output(Bool())
    val ar_addr = Input(UInt(64.W))
    val ar_id = Input(UInt(4.W))
    val ar_len = Input(UInt(8.W))
    val ar_size = Input(UInt(3.W))
    val ar_prot = Input(UInt(3.W))
    val ar_burst = Input(UInt(2.W))
    val ar_lock = Input(UInt(2.W))
    val ar_cache = Input(UInt(4.W))

    val rd_valid = Output(Bool())
    val rd_ready = Input(Bool())
    val rd_data = Output(UInt(64.W))
    val rd_id = Output(UInt(4.W))
    val rd_resp = Output(UInt(2.W))
    val rd_last = Output(Bool())

    val aw_valid = Input(Bool())
    val aw_ready = Output(Bool())
    val aw_addr = Input(UInt(64.W))
    val aw_id = Input(UInt(4.W))
    val aw_len = Input(UInt(8.W))
    val aw_size = Input(UInt(3.W))
    val aw_prot = Input(UInt(3.W))
    val aw_burst = Input(UInt(2.W))
    val aw_lock = Input(UInt(2.W))
    val aw_cache = Input(UInt(4.W))

    val wd_valid = Input(Bool())
    val wd_ready = Output(Bool())
    val wd_data = Input(UInt(64.W))
    val wstrb = Input(UInt(8.W))
    val wd_id = Input(UInt(4.W))
    val wd_last = Input(Bool())

    val wr_valid = Output(Bool())
    val wr_ready = Input(Bool())
    val wr_breap = Output(UInt(2.W))
    val wr_id = Output(UInt(4.W))
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

//  val mem = Module(new MEM)

  val MEM = Module(new MEM_stage)

  val WB = Module(new WB)

  val bypass = Module(new Bypass)

//  val mem_bypass =Module(new MEM_Bypass)

  val ICACHE = Module(new Cache_Axi("icache"))

//  val If_axi_birdge = Module(new Sram2axi_mulit)
//  val MEM_axi_birdge = Module(new Sram2axi_mulit)

//  val IFMEM = Module(new SRAM)
  val MMEM = Module(new SRAM_AXI)

  val ARBITER = Module(new Axi_FULLArbiter)

  val MMIO = Module(new MMIO)
//  val DCACHE = Module(new Cache("Dcache"))
  val CSR = Module(new CSR_)

  val excp_flush = WB.io.out.bits.ctrl_signal.excp_flush
  val mert_flush = WB.io.out.bits.ctrl_signal.ertn_flush

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
  ICACHE.io.flush := 0.U

  ARBITER.io.in2 <> ICACHE.io.out
  ARBITER.io.in1 <> MMIO.io.out

  MMEM.io.reset := reset
  MMEM.io.clk := clock

  ARBITER.io.out.raddr_req.ready := MMEM.io.ar_ready
  MMEM.io.ar_valid := ARBITER.io.out.raddr_req.valid
  MMEM.io.ar_addr := ARBITER.io.out.raddr_req.bits.addr
  MMEM.io.ar_id := ARBITER.io.out.raddr_req.bits.id
  MMEM.io.ar_size := ARBITER.io.out.raddr_req.bits.size
  MMEM.io.ar_len := ARBITER.io.out.raddr_req.bits.len
  MMEM.io.ar_lock := ARBITER.io.out.raddr_req.bits.lock
  MMEM.io.ar_cache := ARBITER.io.out.raddr_req.bits.cache
  MMEM.io.ar_burst := ARBITER.io.out.raddr_req.bits.brust
  MMEM.io.ar_prot := ARBITER.io.out.raddr_req.bits.prot


  ARBITER.io.out.waddr_req.ready := MMEM.io.aw_ready
  MMEM.io.aw_valid := ARBITER.io.out.waddr_req.valid
  MMEM.io.aw_addr := ARBITER.io.out.waddr_req.bits.addr
  MMEM.io.aw_id := ARBITER.io.out.waddr_req.bits.id
  MMEM.io.aw_size := ARBITER.io.out.waddr_req.bits.size
  MMEM.io.aw_len := ARBITER.io.out.waddr_req.bits.len
  MMEM.io.aw_lock := ARBITER.io.out.waddr_req.bits.lock
  MMEM.io.aw_cache := ARBITER.io.out.waddr_req.bits.cache
  MMEM.io.aw_burst := ARBITER.io.out.waddr_req.bits.brust
  MMEM.io.aw_prot := ARBITER.io.out.waddr_req.bits.prot

  ARBITER.io.out.wdata_req.ready := MMEM.io.wd_ready
  MMEM.io.wd_data := ARBITER.io.out.wdata_req.bits.data
  MMEM.io.wstrb := ARBITER.io.out.wdata_req.bits.wstrb
  MMEM.io.wd_valid := ARBITER.io.out.wdata_req.valid
  MMEM.io.wd_id := ARBITER.io.out.wdata_req.bits.id
  MMEM.io.wd_last := ARBITER.io.out.wdata_req.bits.last

  MMEM.io.rd_ready := ARBITER.io.out.rdata_rep.ready
  ARBITER.io.out.rdata_rep.valid := MMEM.io.rd_valid
  ARBITER.io.out.rdata_rep.bits.data := MMEM.io.rd_data
  ARBITER.io.out.rdata_rep.bits.id := MMEM.io.rd_id
  ARBITER.io.out.rdata_rep.bits.last := MMEM.io.rd_last
  ARBITER.io.out.rdata_rep.bits.resp := MMEM.io.rd_resp

  ARBITER.io.out.wb.valid := MMEM.io.wr_valid
  ARBITER.io.out.wb.bits.breap := MMEM.io.wr_breap
  ARBITER.io.out.wb.bits.id := MMEM.io.wr_id
  MMEM.io.wr_ready := ARBITER.io.out.wb.ready

  IF.io.flush := EX.io.is_flush
  IF.io.excp_flush := WB.io.out.bits.ctrl_signal.excp_flush
  IF.io.mret_flush := WB.io.out.bits.ctrl_signal.ertn_flush
  IF.io.mret := CSR.io.mepc_o
  IF.io.mtvec := CSR.io.mtvec_o

  IF.io.wb_stall := WB.io.stall
  IF.io.ex_stall := EX.io.stall

//  IF.io.flush := EX.io.is_flush
  BUFFER_Connect(IF.io.out,ID.io.in,ID.io.out.fire,EX.io.is_flush | excp_flush | mert_flush | WB.io.stall | EX.io.stall)
  //ID
//  Pipline_Connect(IF.io.out,ID.io.in,ID.io.out.fire,EX.io.is_flush)
  ID.io.REG1 := bypass.io.Bypass_REG1
  ID.io.REG2 := bypass.io.Bypass_REG2
  ID.io.flush := EX.io.is_flush
  ID.io.ex_is_mem :=   EX.io.is_mem
  ID.io.ex_reg := EX.io.out.bits.ctrl_rf
//  ID.io.exe_is_mem := EX.io.is_mem
//  ID.io.exe_rf <> EX.io.out.bits.ctrl_rf
  //EXE
  Pipline_Connect(ID.io.out,EX.io.in,EX.io.out.fire,EX.io.is_flush | excp_flush | mert_flush)
  IF.io.branch_io <> EX.io.branchIO
  bypass.io.EX_rf <> EX.io.out.bits.ctrl_rf
  EX.io.csr_rd_io.rd_data := CSR.io.rd.rd_data
  CSR.io.rd.csr_addr := EX.io.csr_rd_io.csr_addr
//  mem_bypass.io.Reg1 := EX.io.in.bits.ctrl_data.src1
//  mem_bypass.io.Reg2 := EX.io.in.bits.ctrl_data.src2
//  mem_bypass.io.reg_index1 := EX.io.in.bits.ctrl_signal.rfSrc1
//  mem_bypass.io.reg_index2 := EX.io.in.bits.ctrl_signal.rfSrc2

//  EX.io.src1 := mem_bypass.io.Bypass_REG1
//  EX.io.src2 := mem_bypass.io.Bypass_REG2

  EX.io.icache_busy := ICACHE.io.cache_busy

//  ID.io.flush := EX.io.is_flush
//MEM
  Pipline_Connect(EX.io.out,MEM.io.in,MEM.io.out.fire,excp_flush | mert_flush)
//  MEM.io.mem.rdata := DCACHE.io.in.rdata_rep.bits.rdata


  MEM.io.cache_io <> MMIO.io.in

  bypass.io.MEM_rf <> MEM.io.out.bits.ctrl_rf
  WB.io.icache_busy := ICACHE.io.cache_busy

//  mem_bypass.io.MEM_rf <> MEM.io.out.bits.ctrl_rf


//WB
  Pipline_Connect(MEM.io.out,WB.io.in,WB.io.out.fire,excp_flush | mert_flush)
  when((WB.io.out.bits.ctrl_rf.rfWen === RD.write)) {
    Reg.write(WB.io.out.bits.ctrl_rf.rfDest, WB.io.out.bits.ctrl_rf.rfData)
  }
  WB.io.out.ready := 1.U
  bypass.io.WB_rf <> WB.io.out.bits.ctrl_rf
//  mem_bypass.io.WB_rf <> WB.io.out.bits.ctrl_rf

  CSR.io.wr <> WB.io.out.bits.ctrl_csr
  CSR.io.excp_flush := WB.io.out.bits.ctrl_signal.excp_flush
  CSR.io.mert_flush := WB.io.out.bits.ctrl_signal.ertn_flush
  CSR.io.epc := WB.io.out.bits.ctrl_flow.PC

  // difftest
  DIP.io.is_break := RegNext(RegNext(EX.io.is_break))
  for (i <- 0 until NReg) {
    DIP.io.rf(i) := Reg.rf(i)
  }
  DIP.io.inst := RegNext(WB.io.out.bits.ctrl_flow.inst)
  DIP.io.is_skip := RegNext(WB.io.out.bits.ctrl_flow.skip)
  DIP.io.inst_valid := RegNext(Mux(WB.io.out.valid,WB.io.out.bits.ctrl_signal.inst_valid,0.U))
  DIP.io.pc := RegNext(WB.io.out.bits.ctrl_flow.PC)
  DIP.io.dnpc := RegNext(Mux(WB.io.out.bits.ctrl_signal.excp_flush,CSR.io.mtvec_o,Mux(WB.io.out.bits.ctrl_signal.ertn_flush,CSR.io.mepc_o,WB.io.out.bits.ctrl_flow.Dnpc)))
  io.inst := WB.io.out.bits.ctrl_flow.inst
  io.pc := IF.io.out.bits.PC


}

import chisel3.stage._

object Spec extends App{
  (new ChiselStage).emitVerilog(new CoreTop(),Array("--target-dir", "build"))
}
