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

//class DIP_model extends BlackBox{
//  val io = IO(new Bundle() {
//    val is_break = Input(Bool())
//    val rf=Input(Vec(32,UInt(64.W)))
//    val inst=Input(UInt(32.W))
//    val pc = Input(UInt(64.W))
//    val inst_valid = Input(Bool())
//    val dnpc = Input(UInt(64.W))
//    val is_skip=Input(Bool())
//  })
//}

//class SRAM extends BlackBox{
//  val io = IO(new Bundle() {
//    val reset = Input(Bool())
//    val clk = Input(Clock())
//
//    val ar_valid = Input(Bool())
//    val ar_ready = Output(Bool())
//    val araddr = Input(UInt(64.W))
//
//    val r_valid = Output(Bool())
//    val r_ready = Input(Bool())
//    val rdata = Output(UInt(64.W))
//
//    val aw_valid = Input(Bool())
//    val aw_ready = Output(Bool())
//    val awaddr = Input(UInt(64.W))
//
//    val w_valid = Input(Bool())
//    val w_ready = Output(Bool())
//    val wdata = Input(UInt(64.W))
//    val wstrb = Input(UInt(8.W))
//
//    val bvalid = Output(Bool())
//    val bready = Input(Bool())
//    val bresp = Output(UInt(2.W))
//  })
//}
//
//
//class SRAM_AXI extends BlackBox{
//  val io = IO(new Bundle() {
//    val reset = Input(Bool())
//    val clk = Input(Clock())
//
//    val ar_valid = Input(Bool())
//    val ar_ready = Output(Bool())
//    val ar_addr = Input(UInt(64.W))
//    val ar_id = Input(UInt(4.W))
//    val ar_len = Input(UInt(8.W))
//    val ar_size = Input(UInt(3.W))
//    val ar_prot = Input(UInt(3.W))
//    val ar_burst = Input(UInt(2.W))
//    val ar_lock = Input(UInt(2.W))
//    val ar_cache = Input(UInt(4.W))
//
//    val rd_valid = Output(Bool())
//    val rd_ready = Input(Bool())
//    val rd_data = Output(UInt(64.W))
//    val rd_id = Output(UInt(4.W))
//    val rd_resp = Output(UInt(2.W))
//    val rd_last = Output(Bool())
//
//    val aw_valid = Input(Bool())
//    val aw_ready = Output(Bool())
//    val aw_addr = Input(UInt(64.W))
//    val aw_id = Input(UInt(4.W))
//    val aw_len = Input(UInt(8.W))
//    val aw_size = Input(UInt(3.W))
//    val aw_prot = Input(UInt(3.W))
//    val aw_burst = Input(UInt(2.W))
//    val aw_lock = Input(UInt(2.W))
//    val aw_cache = Input(UInt(4.W))
//
//    val wd_valid = Input(Bool())
//    val wd_ready = Output(Bool())
//    val wd_data = Input(UInt(64.W))
//    val wstrb = Input(UInt(8.W))
//    val wd_id = Input(UInt(4.W))
//    val wd_last = Input(Bool())
//
//    val wr_valid = Output(Bool())
//    val wr_ready = Input(Bool())
//    val wr_breap = Output(UInt(2.W))
//    val wr_id = Output(UInt(4.W))
//  })
//}
//
//class MEM extends BlackBox{
//  val io=IO(new Bundle() {
//    val addr=Input(UInt(64.W))
//    val reset=Input(Bool())
//    val clk=Input(Clock())
//    val we=Input(Bool())
//    val ce=Input(Bool())
//    val wdata=Input(UInt(64.W))
//    val rdata=Output(UInt(64.W))
//    val wmask=Input(UInt(8.W))
//  })
//}

class SRAMBundle extends Bundle{
  val addr = Output(UInt(6.W))
  val cen = Output(Bool())
  val wen = Output(Bool())
  val wmask = Output(UInt(128.W))
  val wdata = Output(UInt(128.W))
  val rdata = Input(UInt(128.W))
}

class ysyx_22050321 extends Module with Paramete{
  val io =IO(new Bundle() {
    val interrupt = Input(Bool())
    //master
    // ar
    val master_araddr = Output(UInt(32.W))
    val master_arid = Output(UInt(4.W))
    val master_arlen = Output(UInt(8.W))
    val master_arsize = Output(UInt(3.W))
    val master_arburst = Output(UInt(2.W))
    val master_arready = Input(Bool())
    val master_arvalid = Output(Bool())
    //aw
    val master_awaddr = Output(UInt(32.W))
    val master_awid = Output(UInt(4.W))
    val master_awlen = Output(UInt(8.W))
    val master_awsize = Output(UInt(3.W))
    val master_awburst = Output(UInt(2.W))
    val master_awready = Input(Bool())
    val master_awvalid = Output(Bool())
    //wd
    val master_wdata = Output(UInt(64.W))
    val master_wstrb = Output(UInt((64 / 8).W))
    val master_wlast = Output(Bool())
    val master_wready = Input(Bool())
    val master_wvalid = Output(Bool())
    //rd
    val master_rid = Input(UInt(4.W))
    val master_rdata = Input(UInt(64.W))
    val master_rresp = Input(UInt(2.W))
    val master_rlast = Input(Bool())
    val master_rready = Output(Bool())
    val master_rvalid = Input(Bool())
    //wr
    val master_bid = Input(UInt(4.W))
    val master_bresp = Input(UInt(2.W))
    val master_bready = Output(Bool())
    val master_bvalid = Input(Bool())
    //slave
    // ar
    val slave = new Bundle() {
      val araddr = Input(UInt(32.W))
      val arid = Input(UInt(4.W))
      val arlen = Input(UInt(8.W))
      val arsize = Input(UInt(3.W))
      val arburst = Input(UInt(2.W))
      val arready = Output(Bool())
      val arvalid = Input(Bool())
      //aw
      val awaddr = Input(UInt(32.W))
      val awid = Input(UInt(4.W))
      val awlen = Input(UInt(8.W))
      val awsize = Input(UInt(3.W))
      val awburst = Input(UInt(2.W))
      val awready = Output(Bool())
      val awvalid = Input(Bool())
      //wd
      val wdata = Input(UInt(64.W))
      val wstrb = Input(UInt((64 / 8).W))
      val wlast = Input(Bool())
      val wready = Output(Bool())
      val wvalid = Input(Bool())
      //rd
      val rid = Output(UInt(4.W))
      val rdata = Output(UInt(64.W))
      val rresp = Output(UInt(2.W))
      val rlast = Output(Bool())
      val rready = Input(Bool())
      val rvalid = Output(Bool())
      //wr
      val bid = Output(UInt(4.W))
      val bresp = Output(UInt(2.W))
      val bready = Input(Bool())
      val bvalid = Output(Bool())
    }
    val sram0 = new SRAMBundle
    val sram1 = new SRAMBundle
    val sram2 = new SRAMBundle
    val sram3 = new SRAMBundle
    val sram4 = new SRAMBundle
    val sram5 = new SRAMBundle
    val sram6 = new SRAMBundle
    val sram7 = new SRAMBundle

  })
  val IF = Module(new IF)

//  val IFM = Module(new ifm)


  val ID = Module(new ID)

  val EX = Module(new EXE)

//  val DIP = Module(new DIP_model)

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
//  val MMEM = Module(new SRAM_AXI)

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
  ICACHE.io.flush := 0.B // EX.io.is_flush | excp_flush | mert_flush | WB.io.stall | EX.io.stall

  ARBITER.io.in2 <> ICACHE.io.out
  ARBITER.io.in1 <> MMIO.io.out

//  MMEM.io.reset := reset
//  MMEM.io.clk := clock

  ARBITER.io.out.raddr_req.ready := io.master_arready
  io.master_arvalid := ARBITER.io.out.raddr_req.valid
  io.master_araddr := ARBITER.io.out.raddr_req.bits.addr
  io.master_arid := ARBITER.io.out.raddr_req.bits.id
  io.master_arsize := ARBITER.io.out.raddr_req.bits.size
  io.master_arlen := ARBITER.io.out.raddr_req.bits.len
//  io.ar_lock := ARBITER.io.out.raddr_req.bits.lock
//  io.ar_cache := ARBITER.io.out.raddr_req.bits.cache
  io.master_arburst := ARBITER.io.out.raddr_req.bits.brust
//  io.ar_prot := ARBITER.io.out.raddr_req.bits.prot

  ARBITER.io.out.waddr_req.ready := io.master_awready
  io.master_awvalid := ARBITER.io.out.waddr_req.valid
  io.master_awaddr := ARBITER.io.out.waddr_req.bits.addr
  io.master_awid := ARBITER.io.out.waddr_req.bits.id
  io.master_awsize := ARBITER.io.out.waddr_req.bits.size
  io.master_awlen := ARBITER.io.out.waddr_req.bits.len
//  io.aw_lock := ARBITER.io.out.waddr_req.bits.lock
//  io.aw_cache := ARBITER.io.out.waddr_req.bits.cache
  io.master_awburst := ARBITER.io.out.waddr_req.bits.brust
//  io.aw_prot := ARBITER.io.out.waddr_req.bits.prot

  ARBITER.io.out.wdata_req.ready := io.master_wready
  io.master_wdata := ARBITER.io.out.wdata_req.bits.data
  io.master_wstrb := ARBITER.io.out.wdata_req.bits.wstrb
  io.master_wvalid := ARBITER.io.out.wdata_req.valid
//  io.wd_id := ARBITER.io.out.wdata_req.bits.id
  io.master_wlast := ARBITER.io.out.wdata_req.bits.last

  io.master_rready := ARBITER.io.out.rdata_rep.ready
  ARBITER.io.out.rdata_rep.valid := io.master_rvalid
  ARBITER.io.out.rdata_rep.bits.data := io.master_rdata
  ARBITER.io.out.rdata_rep.bits.id := io.master_rid
  ARBITER.io.out.rdata_rep.bits.last := io.master_rlast
  ARBITER.io.out.rdata_rep.bits.resp := io.master_rresp

  ARBITER.io.out.wb.valid := io.master_bvalid
  ARBITER.io.out.wb.bits.breap := io.master_bresp
  ARBITER.io.out.wb.bits.id := io.master_bid
  io.master_bready := ARBITER.io.out.wb.ready

  IF.io.flush := EX.io.is_flush
  IF.io.excp_flush := WB.io.out.bits.ctrl_signal.excp_flush
  IF.io.mret_flush := WB.io.out.bits.ctrl_signal.ertn_flush
  IF.io.mret := CSR.io.mepc_o
  IF.io.mtvec := CSR.io.mtvec_o

  IF.io.wb_stall := WB.io.stall
  IF.io.ex_stall := EX.io.stall

//  IF.io.flush := EX.io.is_flush
  BUFFER_Connect(IF.io.out,ID.io.in,ID.io.out.fire,EX.io.is_flush | excp_flush | mert_flush | WB.io.stall | EX.io.stall | WB.io.stall)
//   Pipline_Connect(IF.io.out,ID.io.in,ID.io.out.fire,EX.io.is_flush | excp_flush | mert_flush | WB.io.stall | EX.io.stall)
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
  Pipline_Connect(ID.io.out,EX.io.in,EX.io.out.fire,EX.io.is_flush | excp_flush | mert_flush | WB.io.stall)
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
  Pipline_Connect(EX.io.out,MEM.io.in,MEM.io.out.fire,excp_flush | mert_flush | WB.io.stall)
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

  io.slave := DontCare
  io.sram0 := DontCare
  io.sram1 := DontCare
  io.sram2 := DontCare
  io.sram3 := DontCare
  io.sram4 := DontCare
  io.sram5 := DontCare
  io.sram6 := DontCare
  io.sram7 := DontCare
}

import chisel3.stage._

object Spec extends App{
  (new chisel3.stage.ChiselStage).execute(Array("--target-dir", "build"), Seq(
    chisel3.stage.ChiselGeneratorAnnotation(() => new ysyx_22050321()),
    firrtl.stage.RunFirrtlTransformAnnotation(new AddModulePrefix()),
    ModulePrefixAnnotation("ysyx_22050321_")
  ))
}
