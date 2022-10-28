package ALU
import chisel3.stage._

object ALU_Spec extends App{
  (new ChiselStage).emitVerilog(new ALU(),Array("--target-dir", "build"))
}
