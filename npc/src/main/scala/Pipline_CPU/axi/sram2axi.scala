package Pipline_CPU.axi
import Pipline_CPU._
import chisel3._
import chisel3.util._


class sram2axi extends Module with Paramete{
    val io = IO(new Bundle() {
      val in = new Cache_MemReq_Bundle("Dcache")
      val out = new Axi_lite_Bundle_out
    })
  val idle :: read :: write :: Nil = Enum(3)
  val state = RegInit(idle)
  switch(state){
    is(idle){
      when(io.in.addr_req.valid && io.in.addr_req.bits.ce && !io.in.addr_req.bits.we && io.out.raddr_req.ready){
        state := read
      }
      when(io.in.addr_req.valid && io.in.addr_req.bits.ce && io.in.addr_req.bits.we && io.out.waddr_req.ready) {
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
  io.out.wb.ready := Mux(state === write, 1.B,0.B)

  io.out.raddr_req.valid := Mux(state === idle && io.in.addr_req.valid && io.in.addr_req.bits.ce && !io.in.addr_req.bits.we,1.B,0.B)
  io.out.waddr_req.valid := Mux(state === idle && io.in.addr_req.valid && io.in.addr_req.bits.ce &&  io.in.addr_req.bits.we,1.B,0.B)
  io.out.wdata_req.valid := Mux(state === idle && io.in.addr_req.valid && io.in.addr_req.bits.ce &&  io.in.addr_req.bits.we,1.B,0.B)

  io.out.raddr_req.bits.addr := io.in.addr_req.bits.addr
  io.out.waddr_req.bits.addr := io.in.addr_req.bits.addr
  io.in.rdata_rep.bits.rdata := io.out.rdata_rep.bits.rdata
  io.out.wdata_req.bits.wdata := io.in.wdata_req.get.bits.wdata
  io.out.wdata_req.bits.wmask := io.in.wdata_req.get.bits.wmask
  io.in.wdata_rep.get := io.out.wb.valid & (io.out.wb.bits === "b00".U)

}

class Sram2axi extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = new Cache_MemReq_Bundle("Dcache")
    val out = new Axi_lite_Bundle_out
  })
  val idle :: read :: write :: Nil = Enum(3)
  val tran :: wait_respone :: Nil = Enum(2)
  val main_state = RegInit(idle)
  val ar_state = RegInit(tran)
  val aw_state = RegInit(tran)
  val wd_state = RegInit(tran)
  val rd_state = RegInit(tran)
  val wp_state = RegInit(tran)

  switch(main_state){
    is(idle){

    }
    is(read){
      
    }
    is(write){

    }
  }

  switch(ar_state){
    is(tran){
      when(io.in.addr_req.valid && io.out.raddr_req.ready && io.in.addr_req.bits.ce && !io.in.addr_req.bits.we){
        ar_state := wait_respone
      }
      io.out.raddr_req.valid := true.B
    }
    is(wait_respone){
      io.out.raddr_req.valid := false.B
      when(io.out.rdata_rep.valid && io.out.rdata_rep.ready){
        ar_state := tran
      }
    }
  }

  switch(aw_state) {
    is(tran) {
      when(io.in.addr_req.valid && io.out.waddr_req.ready && io.in.addr_req.bits.ce && io.in.addr_req.bits.we) {
        aw_state := wait_respone
      }
      io.out.waddr_req.valid := true.B
    }
    is(wait_respone) {
      io.out.waddr_req.valid := false.B
      when(io.out.wb.valid && io.out.wb.ready) {
        aw_state := tran
      }
    }
  }

  switch(wd_state) {
    is(tran) {
      when(io.in.addr_req.valid && io.out.wdata_req.ready && io.in.addr_req.bits.ce && io.in.addr_req.bits.we) {
        wd_state := wait_respone
      }
      io.out.wdata_req.valid := true.B
    }
    is(wait_respone) {
      io.out.wdata_req.valid := false.B
      when(io.out.wb.valid && io.out.wb.ready) {
        wd_state := tran
      }
    }
  }
  switch(rd_state) {
    is(tran) {

    }
    is(wait_respone) {

    }
  }
  switch(wp_state) {
    is(tran) {

    }
    is(wait_respone) {

    }
  }


}


import chisel3.stage._

object Spec extends App{
  (new ChiselStage).emitVerilog(new Sram2axi(),Array("--target-dir", "build"))
}
