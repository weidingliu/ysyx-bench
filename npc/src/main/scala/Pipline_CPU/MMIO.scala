package Pipline_CPU

import chisel3._
import chisel3.util._
import Pipline_CPU.cache.{Cache, Cache_Axi}
import Pipline_CPU.axi.Sram_axifull
class MMIO extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = new Cache_MemReq_Bundle("Dcache")

    val out = new Axi_full_Bundle_out
  })
  val DCACHE = Module(new Cache_Axi("Dcache"))
  val birdge = Module(new Sram_axifull)

  DCACHE.io.in.rdata_rep.bits <> io.in.rdata_rep.bits
  DCACHE.io.in.addr_req.bits <> io.in.addr_req.bits
  DCACHE.io.in.wdata_req.get.bits <> io.in.wdata_req.get.bits
  DCACHE.io.in.wdata_rep.get <> io.in.wdata_rep.get
  DCACHE.io.flush := false.B

//  birdge.io.in <> io.in
  birdge.io.in.rdata_rep.bits <> io.in.rdata_rep.bits
  birdge.io.in.addr_req.bits <> io.in.addr_req.bits
  birdge.io.in.wdata_req.get.bits <> io.in.wdata_req.get.bits
  birdge.io.in.wdata_rep.get <> io.in.wdata_rep.get


  when(io.in.addr_req.valid && io.in.addr_req.bits.addr >= "ha0000000".U && io.in.addr_req.bits.addr <= "ha2000000".U){

    birdge.io.in <> io.in

    DCACHE.io.in.addr_req.valid := false.B
//    DCACHE.io.in.addr_req.ready
    DCACHE.io.in.wdata_req.get.valid := false.B
    DCACHE.io.in.rdata_rep.ready := false.B


    DCACHE.io.out.rdata_rep.valid := false.B
    DCACHE.io.out.wb.valid := false.B
    DCACHE.io.out.raddr_req.ready := false.B
    DCACHE.io.out.waddr_req.ready := false.B
    DCACHE.io.out.wdata_req.ready := false.B

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

    DCACHE.io.out.wb.bits := DontCare
    DCACHE.io.out.raddr_req.bits := DontCare
    DCACHE.io.out.waddr_req.bits := DontCare
    DCACHE.io.out.rdata_rep.bits := DontCare
    DCACHE.io.out.wdata_req.bits := DontCare

  }.otherwise{
    DCACHE.io.in <> io.in

    birdge.io.in.addr_req.valid := false.B
    birdge.io.in.wdata_req.get.valid := false.B
    birdge.io.in.rdata_rep.ready := false.B

    birdge.io.out.rdata_rep.valid := false.B
    birdge.io.out.wb.valid := false.B
    birdge.io.out.raddr_req.ready := false.B
    birdge.io.out.waddr_req.ready := false.B
    birdge.io.out.wdata_req.ready := false.B

    DCACHE.io.out.rdata_rep.valid := io.out.rdata_rep.valid
    io.out.rdata_rep.ready := DCACHE.io.out.rdata_rep.ready

    io.out.raddr_req.valid := DCACHE.io.out.raddr_req.valid
    DCACHE.io.out.raddr_req.ready := io.out.raddr_req.ready

    io.out.waddr_req.valid := DCACHE.io.out.waddr_req.valid
    DCACHE.io.out.waddr_req.ready := io.out.waddr_req.ready

    io.out.wdata_req.valid := DCACHE.io.out.wdata_req.valid
    DCACHE.io.out.wdata_req.ready := io.out.wdata_req.ready

    DCACHE.io.out.wb.valid := io.out.wb.valid
    io.out.wb.ready := DCACHE.io.out.wb.ready

    DCACHE.io.out.wb.bits <> io.out.wb.bits
    DCACHE.io.out.raddr_req.bits <> io.out.raddr_req.bits
    DCACHE.io.out.waddr_req.bits <> io.out.waddr_req.bits
    DCACHE.io.out.rdata_rep.bits <> io.out.rdata_rep.bits
    DCACHE.io.out.wdata_req.bits <> io.out.wdata_req.bits

    birdge.io.out.wb.bits := DontCare
    birdge.io.out.raddr_req.bits := DontCare
    birdge.io.out.waddr_req.bits := DontCare
    birdge.io.out.rdata_rep.bits := DontCare
    birdge.io.out.wdata_req.bits := DontCare
//      birdge.io.out.wb.bits := DontCare
  }



}
