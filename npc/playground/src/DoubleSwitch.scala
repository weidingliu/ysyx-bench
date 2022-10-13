package DoubleSwitch

import chisel3._

/**
 *DoubleSwitch IO define
 */
class doubleIO extends Bundle{
  val a=Input(UInt(1.W))
  val b=Input(UInt(1.W))
  val out=Output(UInt(1.W))
}

class DoubleSwitch extends Module {
    val io=IO(new doubleIO)//IO define
    io.out := io.a & io.b
}

//object Elaborate extends App{
//  (new ChiselStage).emitVerilog(new DoubleSwitch())
//}