package Pipline_CPU

import chisel3._
import chisel3.util._
import Pipline_CPU.cache.Cache_Axi
import Pipline_CPU.axi.Sram_axifull
class MMIO (Type : String)extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = new Cache_MemReq_Bundle(Type)
    val flush = Input(Bool())
    val cache_busy = Output(Bool())

    val out = new Axi_full_Bundle_out

    val sram0 = new SRAMBundle
    val sram1 = new SRAMBundle
    val sram2 = new SRAMBundle
    val sram3 = new SRAMBundle
  })
  val CACHE = Module(new Cache_Axi(Type))
  val birdge = Module(new Sram_axifull(Type))

  CACHE.io.out.wdata_req := DontCare
  CACHE.io.out.waddr_req := DontCare

  CACHE.io.sram0 <> io.sram0
  CACHE.io.sram1 <> io.sram1
  CACHE.io.sram2 <> io.sram2
  CACHE.io.sram3 <> io.sram3

  CACHE.io.in.rdata_rep.bits <> io.in.rdata_rep.bits
  CACHE.io.in.addr_req.bits <> io.in.addr_req.bits

  if(Type == "Dcache") CACHE.io.in.wdata_req.get.bits <> io.in.wdata_req.get.bits else None
  if(Type == "Dcache") CACHE.io.in.wdata_rep.get <> io.in.wdata_rep.get else None
  CACHE.io.flush := io.flush
  io.cache_busy := CACHE.io.cache_busy

//  birdge.io.in <> io.in
  birdge.io.in.rdata_rep.bits <> io.in.rdata_rep.bits
  birdge.io.in.addr_req.bits <> io.in.addr_req.bits
  if(Type == "Dcache") birdge.io.in.wdata_req.get.bits <> io.in.wdata_req.get.bits
  if(Type == "Dcache") birdge.io.in.wdata_rep.get <> io.in.wdata_rep.get

  when(io.in.addr_req.valid && io.in.addr_req.bits.addr <= "h80000000".U){

    birdge.io.in <> io.in

    CACHE.io.in.addr_req.valid := false.B
//    DCACHE.io.in.addr_req.ready
    if(Type == "Dcache") CACHE.io.in.wdata_req.get.valid := false.B else None
    CACHE.io.in.rdata_rep.ready := false.B

    CACHE.io.out.rdata_rep.valid := false.B
    CACHE.io.out.wb.valid := false.B
    CACHE.io.out.raddr_req.ready := false.B
    if(Type == "Dcache") CACHE.io.out.waddr_req.ready := false.B else None
    if(Type == "Dcache") CACHE.io.out.wdata_req.ready := false.B else None

    birdge.io.out.rdata_rep.valid := io.out.rdata_rep.valid
    io.out.rdata_rep.ready := birdge.io.out.rdata_rep.ready

    io.out.raddr_req.valid := birdge.io.out.raddr_req.valid
    birdge.io.out.raddr_req.ready := io.out.raddr_req.ready

    io.out.waddr_req.valid := birdge.io.out.waddr_req.valid
    birdge.io.out.waddr_req.ready := io.out.waddr_req.ready

    io.out.wdata_req.valid := birdge.io.out.wdata_req.valid
    birdge.io.out.wdata_req.ready := io.out.wdata_req.ready

    birdge.io.out.wb.valid := io.out.wb.valid
    io.out.wb.ready := birdge.io.out.wb.ready

    birdge.io.out.wb.bits <> io.out.wb.bits
    birdge.io.out.raddr_req.bits <> io.out.raddr_req.bits
    birdge.io.out.waddr_req.bits <> io.out.waddr_req.bits
    birdge.io.out.rdata_rep.bits <> io.out.rdata_rep.bits
    birdge.io.out.wdata_req.bits <> io.out.wdata_req.bits

    CACHE.io.out.wb.bits := DontCare
    CACHE.io.out.raddr_req.bits := DontCare
    CACHE.io.out.waddr_req.bits := DontCare
    CACHE.io.out.rdata_rep.bits := DontCare
    CACHE.io.out.wdata_req.bits := DontCare

  }.otherwise{
    CACHE.io.in <> io.in

    birdge.io.in.addr_req.valid := false.B
    if(Type == "Dcache") birdge.io.in.wdata_req.get.valid := false.B else None
    birdge.io.in.rdata_rep.ready := false.B

    birdge.io.out.rdata_rep.valid := false.B
    birdge.io.out.wb.valid := false.B
    birdge.io.out.raddr_req.ready := false.B
    birdge.io.out.waddr_req.ready := false.B
    birdge.io.out.wdata_req.ready := false.B

    CACHE.io.out.rdata_rep.valid := io.out.rdata_rep.valid
    io.out.rdata_rep.ready := CACHE.io.out.rdata_rep.ready

    io.out.raddr_req.valid := CACHE.io.out.raddr_req.valid
    CACHE.io.out.raddr_req.ready := io.out.raddr_req.ready

    io.out.waddr_req.valid := CACHE.io.out.waddr_req.valid
    CACHE.io.out.waddr_req.ready := io.out.waddr_req.ready

    io.out.wdata_req.valid := CACHE.io.out.wdata_req.valid
    CACHE.io.out.wdata_req.ready := io.out.wdata_req.ready

    CACHE.io.out.wb.valid := io.out.wb.valid
    io.out.wb.ready := CACHE.io.out.wb.ready

    CACHE.io.out.wb.bits <> io.out.wb.bits
    CACHE.io.out.raddr_req.bits <> io.out.raddr_req.bits
    CACHE.io.out.waddr_req.bits <> io.out.waddr_req.bits
    CACHE.io.out.rdata_rep.bits <> io.out.rdata_rep.bits
    CACHE.io.out.wdata_req.bits <> io.out.wdata_req.bits

    birdge.io.out.wb.bits := DontCare
    birdge.io.out.raddr_req.bits := DontCare
    birdge.io.out.waddr_req.bits := DontCare
    birdge.io.out.rdata_rep.bits := DontCare
    birdge.io.out.wdata_req.bits := DontCare
//      birdge.io.out.wb.bits := DontCare
  }
}
