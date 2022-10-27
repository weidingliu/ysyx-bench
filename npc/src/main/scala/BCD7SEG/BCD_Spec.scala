package BCD7SEG

import chisel3.stage._
object BCD_Spec extends App{
  (new ChiselStage).emitVerilog(new BCD7SEG(),Array("--target-dir", "build"))
}
