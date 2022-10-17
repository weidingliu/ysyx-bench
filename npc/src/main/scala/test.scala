import chisel3._
import chisel3.stage.ChiselStage


class test extends Module{
  val io=IO(new Bundle{
    val in=Input(UInt(32.W))
    val out=Output(UInt(32.W))
  })
  io.out := io.in

}

object top2 extends App{
  (new ChiselStage).emitVerilog(new test())
}