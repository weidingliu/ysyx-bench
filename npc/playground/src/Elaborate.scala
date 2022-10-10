import chisel3.stage.ChiselStage

//package DoubleSwitch
//object Elaborate extends App {
//  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new top())))
//}
object Elaborate extends App{
  (new ChiselStage).emitVerilog(new DoubleSwitch())
}