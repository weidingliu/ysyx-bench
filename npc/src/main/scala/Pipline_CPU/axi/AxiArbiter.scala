package Pipline_CPU.axi
import Pipline_CPU._
import chisel3._
import chisel3.util._

class AxiArbiter extends Module{
  val io = IO(new Bundle() {
    val in1 = new Axi_lite_Bundle_in
    val in2 = new Axi_lite_Bundle_in
    val out = new Axi_lite_Bundle_out
  })
  val choose_r = RegInit(0.U(1.W))
  val choose = WireDefault(0.U(1.W))
  when(io.in1.raddr_req.valid || io.in1.waddr_req.valid){
    choose_r := 0.U
    io.out <> io.in1
  }.elsewhen(io.in2.raddr_req.valid || io.in2.waddr_req.valid){
    choose_r := 1.U
    io.out <> io.in2
  }

  when(io.out.rdata_rep.valid || io.out.wb.valid){
    when(choose_r === 0.U){
      io.out <> io.in1
    }.otherwise{
      io.out <> io.in2
    }
  }


}
