package Pipline_CPU.backend
import Pipline_CPU._
import chisel3._
import chisel3.util._

class Partial_product (booth_bit : Int = 3, mul_len: Int)extends Module with Paramete{
  val io = IO(new Bundle() {
    val y_3 = Input(UInt(booth_bit.W))
    val x = Input(UInt(mul_len.W))
    val p = Output(UInt(mul_len.W))
    val c = Output(UInt(1.W))
  })

//  val sel_negative = WireDefault(0.U)
//  sel_negative := io.y_3[2] & (io.y_3[1] & !io.y_3[0] | !io.y_3[1] & io.y_3[0])

  io.p := MuxCase(0.U(mul_len.W),Seq(
    (io.y_3 === "b000".U) -> 0.U(mul_len.W),
    (io.y_3 === "b001".U) -> io.x,
    (io.y_3 === "b010".U) -> io.x,
    (io.y_3 === "b011".U) -> (io.x << 1),
    (io.y_3 === "b100".U) -> (~(io.x << 1)),
    (io.y_3 === "b101".U) -> ((~io.x)),
    (io.y_3 === "b110".U) -> (~io.x),
    (io.y_3 === "b111".U) -> 0.U(mul_len.W),

  ))
  io.c := MuxCase(0.U(1.W), Seq(
    (io.y_3 === "b000".U) -> 0.U(1.W),
    (io.y_3 === "b001".U) -> 0.U(1.W),
    (io.y_3 === "b010".U) -> 0.U(1.W),
    (io.y_3 === "b011".U) -> 0.U(1.W),
    (io.y_3 === "b100".U) -> 1.U(1.W),
    (io.y_3 === "b101".U) -> 1.U(1.W),
    (io.y_3 === "b110".U) -> 1.U(1.W),
    (io.y_3 === "b111".U) -> 0.U(1.W),

  ))
}

class Adder extends Module with Paramete{
  val io = IO(new Bundle() {
    val x1 = Input(UInt(1.W))
    val x2 = Input(UInt(1.W))
    val x3 = Input(UInt(1.W))
    val s = Output(UInt(1.W))
    val c = Output(UInt(1.W))
  })
  io.s := io.x1 ^ io.x2 ^ io.x3
  io.c := io.x1 & io.x2 | io.x1 & io.x3 | io.x2 & io.x3
}

class Shift_MUL (mul_len: Int)extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = Decoupled(new MUL_IN)
    val out = Decoupled(new MUL_OUT)
  })


}


class MUL extends Module with Paramete {
  val io = IO(new Bundle() {
    val in = Decoupled(new MUL_IN)
    val out = Decoupled(new MUL_OUT)
  })




}
