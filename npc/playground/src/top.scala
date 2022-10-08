
import chisel._
import chisel3.stage.ChiselStage

class top extends Module{
  val io=IO(new Bundle{
    val in=Input(UInt(32.W))
    val out=Output(UInt(32.W))
  })
  i0.out := io.in

}

object top extends App{
  Driver.emitVerilog(new top())
}