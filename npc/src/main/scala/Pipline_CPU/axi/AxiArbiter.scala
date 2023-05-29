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
  val choose = RegInit(0.U(1.W))



}
