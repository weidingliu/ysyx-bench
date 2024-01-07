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
    val mtime = if(Type == "Dcache") Some(Output(UInt(xlen.W))) else None
    val mtimecmp = if(Type == "Dcache") Some(Output(UInt(xlen.W))) else None
    val time_intfeedback = if(Type == "Dcache") Some(Input(Bool())) else None

    val out = new Axi_full_Bundle_out

    val sram0 = new SRAMBundle
    val sram1 = new SRAMBundle
    val sram2 = new SRAMBundle
    val sram3 = new SRAMBundle
  })
  val CACHE = Module(new Cache_Axi(Type))
  val birdge = Module(new Sram_axifull(Type))
  val busy = RegInit(0.U(1.W))

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
  io.cache_busy := CACHE.io.cache_busy || busy.asBool

//  birdge.io.in <> io.in
  birdge.io.in.rdata_rep.bits <> io.in.rdata_rep.bits
  birdge.io.in.addr_req.bits <> io.in.addr_req.bits
  if(Type == "Dcache") birdge.io.in.wdata_req.get.bits <> io.in.wdata_req.get.bits
  if(Type == "Dcache") birdge.io.in.wdata_rep.get <> io.in.wdata_rep.get

  when(io.out.raddr_req.valid || io.out.waddr_req.valid) {
    busy := true.B
  }
  when(io.out.wb.fire || io.out.rdata_rep.fire) {
    busy := false.B
  }
  val is_uncached = io.in.addr_req.bits.addr < "h80000000".U && io.in.addr_req.bits.addr >= "h10000000".U
  val is_CLINT = io.in.addr_req.bits.addr >= "h02000000".U && io.in.addr_req.bits.addr < "h0200_ffff".U
  val timeReadData = WireDefault(0.U(xlen.W))
  if(Type == "Dcache"){
    // timer
    val mtime = RegInit(0.U(xlen.W)) //0x0200bff8
    val mtimecmp = RegInit(2000.U(xlen.W)) //0x02004000
    mtime := mtime + 1.U
    io.mtime.get := mtime
    io.mtimecmp.get := mtimecmp
    when(io.time_intfeedback.get){
      mtimecmp := mtimecmp + "h200000".U(xlen.W)
    }
    timeReadData := Mux((io.in.addr_req.bits.addr === "h0200bff8".U(xlen.W)), mtime,mtimecmp)
  }

    birdge.io.in.addr_req.valid := Mux(is_uncached,io.in.addr_req.valid & !(io.flush & !busy),false.B)
    io.in.addr_req.ready := Mux(is_uncached,birdge.io.in.addr_req.ready,CACHE.io.in.addr_req.ready)

    if (Type == "Dcache") birdge.io.in.wdata_req.get.valid := Mux(is_uncached,io.in.wdata_req.get.valid,false.B)
    if (Type == "Dcache") io.in.wdata_req.get.ready := Mux(is_uncached,birdge.io.in.wdata_req.get.ready,CACHE.io.in.wdata_req.get.ready)

    io.in.rdata_rep.valid := Mux(is_CLINT, true.B, Mux(is_uncached,birdge.io.in.rdata_rep.valid,CACHE.io.in.rdata_rep.valid))
    birdge.io.in.rdata_rep.ready := Mux(is_uncached,io.in.rdata_rep.ready,false.B)

//    io.in.rdata_rep.bits <> birdge.io.in.rdata_rep.bits
    io.in.rdata_rep.bits.rdata := Mux(is_CLINT, timeReadData, Mux(is_uncached, birdge.io.in.rdata_rep.bits.rdata, CACHE.io.in.rdata_rep.bits.rdata))
    birdge.io.in.addr_req.bits <> io.in.addr_req.bits
    if (Type == "Dcache") io.in.wdata_req.get.bits <> birdge.io.in.wdata_req.get.bits

    if (Type == "Dcache") io.in.wdata_rep.get := Mux(is_uncached,birdge.io.in.wdata_rep.get,CACHE.io.in.wdata_rep.get)
      //output
    CACHE.io.out.rdata_rep.valid := Mux(is_uncached || is_CLINT,false.B,true.B)
    CACHE.io.out.wb.valid := Mux(is_uncached || is_CLINT,false.B,true.B)
    CACHE.io.out.raddr_req.ready := Mux(is_uncached || is_CLINT,false.B,true.B)
    CACHE.io.in.rdata_rep.ready := Mux(is_uncached || is_CLINT,false.B,true.B)
//    CACHE.io.in.addr_req.valid := Mux(is_uncached || is_CLINT,false.B,true.B)

    if(Type == "Dcache") CACHE.io.in.wdata_req.get.valid := Mux(is_uncached || is_CLINT,false.B,true.B) else None

    if(Type == "Dcache") CACHE.io.out.waddr_req.ready := Mux(is_uncached || is_CLINT,false.B,true.B) else None
    if(Type == "Dcache") CACHE.io.out.wdata_req.ready := Mux(is_uncached || is_CLINT,false.B,true.B) else None

    birdge.io.out.rdata_rep.valid := Mux(is_uncached,io.out.rdata_rep.valid,false.B)
    io.out.rdata_rep.ready := Mux(is_uncached,birdge.io.out.rdata_rep.ready,CACHE.io.out.rdata_rep.ready)

    io.out.raddr_req.valid := Mux(is_uncached,birdge.io.out.raddr_req.valid,CACHE.io.out.raddr_req.valid)
    birdge.io.out.raddr_req.ready := Mux(is_uncached,io.out.raddr_req.ready,false.B)

    io.out.waddr_req.valid := Mux(is_uncached,birdge.io.out.waddr_req.valid,CACHE.io.out.waddr_req.valid)
    birdge.io.out.waddr_req.ready := Mux(is_uncached,io.out.waddr_req.ready,false.B)

    io.out.wdata_req.valid := Mux(is_uncached,birdge.io.out.wdata_req.valid,CACHE.io.out.wdata_req.valid)
    birdge.io.out.wdata_req.ready := Mux(is_uncached,io.out.wdata_req.ready,false.B)

    birdge.io.out.wb.valid := Mux(is_uncached,io.out.wb.valid,false.B)
    io.out.wb.ready := Mux(is_uncached,birdge.io.out.wb.ready,CACHE.io.out.wb.ready)

    birdge.io.in.addr_req.bits <> io.in.addr_req.bits
    birdge.io.out.wb.bits <> io.out.wb.bits
    io.out.raddr_req.bits <> birdge.io.out.raddr_req.bits
    io.out.waddr_req.bits <> birdge.io.out.waddr_req.bits
    birdge.io.out.rdata_rep.bits <> io.out.rdata_rep.bits
    io.out.wdata_req.bits <> birdge.io.out.wdata_req.bits
  when(!is_uncached){
    io.out.raddr_req.bits <> CACHE.io.out.raddr_req.bits
    io.out.waddr_req.bits <> CACHE.io.out.waddr_req.bits
    io.out.wdata_req.bits <> CACHE.io.out.wdata_req.bits
//    io.in.rdata_rep.bits <> CACHE.io.in.rdata_rep.bits
    if (Type == "Dcache") io.in.wdata_req.get.bits <>  CACHE.io.in.wdata_req.get.bits
  }

    CACHE.io.in.addr_req.valid := Mux(is_uncached || is_CLINT,false.B,io.in.addr_req.valid & !(io.flush & !busy))

    if(Type == "Dcache") CACHE.io.in.wdata_req.get.valid := Mux(is_uncached,false.B,io.in.wdata_req.get.valid)
    CACHE.io.in.rdata_rep.ready := Mux(is_uncached,false.B,io.in.rdata_rep.ready)
    CACHE.io.in.addr_req.bits <> io.in.addr_req.bits

    CACHE.io.out.rdata_rep.valid := Mux(is_uncached  || is_CLINT,false.B,io.out.rdata_rep.valid)
    CACHE.io.out.raddr_req.ready := Mux(is_uncached  || is_CLINT,false.B,io.out.raddr_req.ready)
    CACHE.io.out.waddr_req.ready := Mux(is_uncached  || is_CLINT,false.B,io.out.waddr_req.ready)
    CACHE.io.out.wdata_req.ready := Mux(is_uncached  || is_CLINT,false.B,io.out.wdata_req.ready)
    CACHE.io.out.wb.valid := Mux(is_uncached  || is_CLINT,false.B,io.out.wb.valid)

    CACHE.io.out.wb.bits <> io.out.wb.bits
    CACHE.io.out.rdata_rep.bits <> io.out.rdata_rep.bits

}
