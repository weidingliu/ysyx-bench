package ALU
import chisel3.stage._
object ALU_Spec {
  (new ChiselStage).emitVerilog(new ALU(),Array("--target-dir", "build"))
}
