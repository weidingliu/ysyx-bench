package Mux21
import chisel3._

class boubleIO extends Bundle{
  val a=Input(UInt(1.W))
  val b=Input(UInt(1.W))
  val s=Input(UInt(1.W))
  val y=Output(UInt(1.W))
}
/**
 * mux 2 to 1
 * */
class Mux21 extends Module {
    val io=IO(new boubleIO)
    io.y := (~io.s & io.a) | (io.s & io.b)
}
