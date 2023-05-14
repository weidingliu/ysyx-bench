package Pipline_CPU

import chisel3._
import chisel3.util._
import Pipline_CPU.cache.Cache
class MMIO extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = new Cache_MemReq_Bundle("Dcache")

    val out = new CPU_MEM_Bundle("WRIO")
  })
  val DCACHE = Module(new Cache("Dcache"))

  DCACHE.io.in <> io.in
  DCACHE.io.flush := false.B

  io.out <> DCACHE.io.out
  when(io.in.addr_req.valid){
    when(io.in.addr_req.bits.addr >= "ha0000000".U && io.in.addr_req.bits.addr <= "ha2000000".U){
      DCACHE.io.in.addr_req.valid := false.B
//      io.out.addr_req.valid := true.B
      io.out.addr_req <> io.in.addr_req
      io.out.wdata_rep.get <> io.in.wdata_rep.get
      io.out.rdata_rep <> io.in.rdata_rep
      io.out.wdata_req.get <> io.in.wdata_req.get
    }
  }
  when(io.in.addr_req.valid ){
    when(io.in.addr_req.bits.we){
      printf(p"->WRITE addr : ${Hexadecimal(io.in.addr_req.bits.addr)} " +
        p"wdata : ${Hexadecimal(io.in.wdata_req.get.bits.wdata)} wmask : ${Hexadecimal(io.in.wdata_req.get.bits.wmask)}\n")
    }.otherwise{
      printf(p"->READ addr : ${Hexadecimal(io.in.addr_req.bits.addr)} rdata: ${Hexadecimal(io.in.rdata_rep.bits.rdata)}\n")
    }

  }


}
