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

  io.out.valid := 1.U
  io.in.ready := io.out.ready

}