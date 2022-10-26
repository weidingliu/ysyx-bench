package Mux41
import chisel3._
import chisel3.util._

class buldIO extends Bundle{
  val x_0=Input(UInt(2.W))
  val x_1=Input(UInt(2.W))
  val x_2=Input(UInt(2.W))
  val x_3=Input(UInt(2.W))
  val s=Input(UInt(2.W))
  val out=Output(UInt(2.W))

}

/**
 * 四路选择器
 */
class Mux41 extends Module {
    val io=IO(new buldIO)
   val temp_1= Wire(UInt())
   val temp_2= Wire(UInt())
    temp_1 := (~io.s(0) & ~io.s(1) & io.x_0(0)) | (io.s(0) & ~io.s(1) & io.x_1(0)) | (~io.s(0) & io.s(1) & io.x_2(0)) | (io.s(0) & io.s(1) & io.x_3(0))
    temp_2 := (~io.s(0) & ~io.s(1) & io.x_0(1)) | (io.s(0) & ~io.s(1) & io.x_1(1)) | (~io.s(0) & io.s(1) & io.x_2(1)) | (io.s(0) & io.s(1) & io.x_3(1))
    io.out := Cat(temp_2,temp_1)
//    io.out := (~io.s(0) & ~io.s(1) & io.x_0) | (io.s(0) & ~io.s(1) & io.x_1) | (~io.s(0) & io.s(1) & io.x_2) | (io.s(0) & io.s(1) & io.x_3)
}

//object pr extends App{
//  val q=new Mux41()
//}