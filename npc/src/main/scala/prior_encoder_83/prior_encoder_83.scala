package prior_encoder_83
import chisel3._
import chisel3.util._
import BCD7SEG.BCD7SEG

/*
* seg+encoder
* */
class encoderIO extends Bundle{
  val in=Input(UInt(8.W))//encoder input
  val out=Output(UInt(3.W))
  val flag=Output(UInt(1.W))
  val seg=Output(UInt(7.W))
}


class prior_encoder_83 extends Module {
    val seg = Module(new BCD7SEG())
    val io=IO(new encoderIO)
    when(io.in(0)){
      io.flag := 1.U
      io.out := 0.U
    }.elsewhen(io.in(1)){
      io.flag := 1.U
      io.out := 1.U
    }.elsewhen(io.in(2)) {
      io.flag := 1.U
      io.out := 2.U
    }.elsewhen(io.in(3)) {
      io.flag := 1.U
      io.out := 3.U
    }.elsewhen(io.in(4)) {
      io.flag := 1.U
      io.out := 4.U
    }.elsewhen(io.in(5)) {
      io.flag := 1.U
      io.out := 5.U
    }.elsewhen(io.in(6)) {
      io.flag := 1.U
      io.out := 6.U
    }.elsewhen(io.in(7)) {
      io.flag := 1.U
      io.out := 7.U
    }.otherwise{
      io.flag := 0.U
      io.out := 0.U
    }
    seg.io.b := Cat(0.U,io.out)
    io.seg := seg.io.h
}
