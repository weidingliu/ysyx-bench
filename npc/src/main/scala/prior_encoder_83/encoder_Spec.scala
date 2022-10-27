package prior_encoder_83

import chisel3.stage._
object encoder_Spec extends App{
  (new ChiselStage).emitVerilog(new prior_encoder_83(),Array("--target-dir", "build"))
}
