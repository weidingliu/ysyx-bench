package Pipline_CPU.axi
import Pipline_CPU._
import chisel3._
import chisel3.util._
import firrtl.Utils.False

import scala.collection.immutable

class sram2axi extends Module with Paramete{
    val io = IO(new Bundle() {
      val in = new CPU_MEM_Bundle("WRIO")
      val out = new Axi_lite_Bundle_out
    })
  val idle :: read :: write :: Nil = Enum(3)
  val state = RegInit(idle)
  switch(state){
    is(idle){
      when(io.in.addr_req.valid && io.in.addr_req.bits.ce && !io.in.addr_req.bits.we){
        state := read
      }
      when(io.in.addr_req.valid && io.in.addr_req.bits.ce && io.in.addr_req.bits.we) {
        state := write
      }
    }
    is(read){
        when(io.in.rdata_rep.ready && io.out.rdata_rep.valid){
          state := idle
        }
    }
    is(write){
        when(io.out.wb.valid){
          state := idle
        }
    }
  }

  io.in.addr_req.ready := Mux(state === idle ,1.B,0.B)
  io.in.wdata_req.get.ready := Mux(state === idle ,1.B,0.B)

  io.in.rdata_rep.valid := Mux(state === read && io.out.rdata_rep.valid,1.B,0.B)

  io.out.rdata_rep.ready := io.in.rdata_rep.ready
  io.out.wb.ready := Mux(state === write,1.B,0.B )

  io.out.raddr_req.valid := Mux(state === idle && io.in.addr_req.valid && io.in.addr_req.bits.ce && !io.in.addr_req.bits.we,1.B,0.B)
  io.out.waddr_req.valid := Mux(state === idle && io.in.addr_req.valid && io.in.addr_req.bits.ce &&  io.in.addr_req.bits.we,1.B,0.B)
  io.out.wdata_req.valid := Mux(state === idle && io.in.addr_req.valid && io.in.addr_req.bits.ce &&  io.in.addr_req.bits.we,1.B,0.B)
}
