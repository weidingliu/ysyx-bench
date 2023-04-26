package Pipline_CPU.backend
import Pipline_CPU._

import chisel3._
import chisel3.util._
class WB extends Module with Paramete{
  val io =IO(new Bundle() {
    val in = Flipped(Decoupled(new WBIO))

    val out = Decoupled(new WBIO)
  })

  io.out.bits <> io.in.bits

  io.out.bits.ctrl_signal.inst_valid := Mux(io.in.valid,io.in.bits.ctrl_signal.inst_valid,0.U)
  io.out.bits.ctrl_rf.rfWen := Mux(io.out.bits.ctrl_signal.inst_valid,io.in.bits.ctrl_signal.rfWen,0.U)

  io.out.valid := 1.U//Mux(io.in.valid,1.U,0.U)
  io.in.ready := io.out.ready

}
