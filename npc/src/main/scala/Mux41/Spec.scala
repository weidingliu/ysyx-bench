package Mux41
import chisel3.stage._
object Spec extends App{
  (new ChiselStage).emitVerilog(new Mux41(),Array("--target-dir", "build"))
}
