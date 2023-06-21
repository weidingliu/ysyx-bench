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

class Sram2axi_mulit extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = new Cache_MemReq_Bundle("Dcache")
    val out = new Axi_lite_Bundle_out
  })
//  val idle :: read :: write :: Nil = Enum(3)
  val tran :: wait_respone :: Nil = Enum(2)
//  val main_state = RegInit(idle)
  val ar_state = RegInit(tran)
  val aw_state = RegInit(tran)
  val wd_state = RegInit(tran)
  val rd_state = RegInit(tran)
  val wp_state = RegInit(tran)

//  val ar_valid = RegInit(false.B)
//  val aw_valid = RegInit(false.B)
//  val ar_valid = RegInit(false.B)


  switch(ar_state){
    is(tran){
      when(io.in.addr_req.valid && io.out.raddr_req.ready && io.in.addr_req.bits.ce && !io.in.addr_req.bits.we){
        ar_state := wait_respone
      }

    }
    is(wait_respone){
//      io.out.raddr_req.valid := false.B
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

    }
    is(wait_respone) {
//      io.out.waddr_req.valid := false.B
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
    }
    is(wait_respone) {
//      io.out.wdata_req.valid := false.B
      when(io.out.wb.valid && io.out.wb.ready) {
        wd_state := tran
      }
    }
  }
//  switch(rd_state) {
//    is(tran) {
////      io.in.rdata_rep.valid :=
//    }
//    is(wait_respone) {
//
//    }
//  }
//  switch(wp_state) {
//    is(tran) {
//
//    }
//    is(wait_respone) {
//
//    }
//  }

  io.in.addr_req.ready := true.B
  io.in.wdata_req.get.ready := true.B

  io.in.rdata_rep.valid := Mux(ar_state === wait_respone && io.out.rdata_rep.valid, 1.B, 0.B)

  io.out.rdata_rep.ready := io.in.rdata_rep.ready
  io.out.wb.ready := Mux(aw_state === wait_respone, 1.B, 0.B)

  io.out.raddr_req.valid := Mux(ar_state === tran && io.in.addr_req.valid && io.in.addr_req.bits.ce && !io.in.addr_req.bits.we, 1.B, 0.B)
  io.out.waddr_req.valid := Mux(aw_state === tran && io.in.addr_req.valid && io.in.addr_req.bits.ce && io.in.addr_req.bits.we, 1.B, 0.B)
  io.out.wdata_req.valid := Mux(aw_state === tran && io.in.addr_req.valid && io.in.addr_req.bits.ce && io.in.addr_req.bits.we, 1.B, 0.B)

  io.out.raddr_req.bits.addr := io.in.addr_req.bits.addr
  io.out.waddr_req.bits.addr := io.in.addr_req.bits.addr
  io.in.rdata_rep.bits.rdata := io.out.rdata_rep.bits.rdata
  io.out.wdata_req.bits.wdata := io.in.wdata_req.get.bits.wdata
  io.out.wdata_req.bits.wmask := io.in.wdata_req.get.bits.wmask
  io.in.wdata_rep.get := io.out.wb.valid & (io.out.wb.bits === "b00".U)

}

class Sram_axifull extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = new Cache_MemReq_Bundle("Dcache")
    val out = new Axi_full_Bundle_out
  })
  val read_idle :: read_transfer_addr :: wait_data_transfer :: Nil = Enum(3)
  val write_idle :: write_transfer_addr :: write_transfer_data :: write_wait_respone :: Nil = Enum(4)

  val read_state = RegInit(read_idle)
  val write_state = RegInit(write_idle)

  switch(read_state){
    is(read_idle){
      when(io.in.addr_req.valid && io.in.addr_req.bits.ce && !io.in.addr_req.bits.we){
        read_state := read_transfer_addr
      }
    }
    is(read_transfer_addr){
      when(io.out.raddr_req.valid && io.out.raddr_req.ready){
        read_state := wait_data_transfer
      }
    }
    is(wait_data_transfer){
      when(io.out.rdata_rep.valid && io.out.rdata_rep.ready && io.out.rdata_rep.bits.last){
        read_state := read_idle
      }
    }
  }

  switch(write_state){
    is(write_idle){
      when(io.in.addr_req.valid  && io.in.addr_req.bits.ce && io.in.addr_req.bits.we){
        write_state := write_transfer_addr
      }
    }
    is(write_transfer_addr){
      when(io.out.waddr_req.ready && io.out.waddr_req.valid){
        write_state := write_transfer_data
      }
    }
    is(write_transfer_data){
      when(io.out.wdata_req.valid && io.out.wdata_req.ready && io.out.wdata_req.bits.last) {
        write_state := write_wait_respone
      }
    }
    is(write_wait_respone){
      when(io.out.wb.valid && io.out.wb.ready && io.out.wb.bits.breap === 0.U){
        write_state := write_idle
      }
    }
  }

  io.out.raddr_req.bits.id := 1.U(4.W)
  io.out.raddr_req.bits.size := "b011".U(3.W)
  io.out.raddr_req.bits.brust := 1.U(2.W)
  io.out.raddr_req.bits.lock := 0.U(2.W)
  io.out.raddr_req.bits.cache := 0.U(4.W)
  io.out.raddr_req.bits.prot := 0.U(3.W)
  io.out.raddr_req.valid := Mux(read_state === read_transfer_addr,true.B,false.B)
  io.out.raddr_req.bits.addr := io.in.addr_req.bits.addr
//  io.out.raddr_req.bits.len := 0xf.U(8.W)

  io.out.waddr_req.bits.id := 1.U(4.W)
  io.out.waddr_req.bits.size := "b011".U(3.W)
  io.out.waddr_req.bits.brust := 1.U(2.W)
  io.out.waddr_req.bits.lock := 0.U(2.W)
  io.out.waddr_req.bits.cache := 0.U(4.W)
  io.out.waddr_req.bits.prot := 0.U(3.W)
  io.out.waddr_req.valid := Mux(write_state === write_transfer_addr,true.B,false.B)
  io.out.waddr_req.bits.addr := io.in.addr_req.bits.addr

  io.out.rdata_rep.ready := io.in.rdata_rep.ready
  io.in.rdata_rep.bits.rdata := io.out.rdata_rep.bits.data
  io.in.rdata_rep.valid := io.out.rdata_rep.valid

  io.out.wdata_req.valid := io.in.wdata_req.get.valid
  io.out.wdata_req.bits.data := io.in.wdata_req.get.bits.wdata
//  io.out.wdata_req.bits.last :=
  io.out.wdata_req.bits.id := 1.U(4.W)
  io.out.wdata_req.bits.wstrb := io.in.wdata_req.get.bits.wmask

  io.out.wb.ready := Mux(write_state === write_wait_respone,true.B,false.B)
  io.in.wdata_rep.get := io.out.wb.valid & (io.out.wb.bits.breap === "b00".U)
}


//import chisel3.stage._
//
//object Spec extends App{
//  (new ChiselStage).emitVerilog(new Sram2axi(),Array("--target-dir", "build"))
//}
