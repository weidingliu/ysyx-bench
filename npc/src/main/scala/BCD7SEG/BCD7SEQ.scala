package BCD7SEG
import chisel3._
import chisel3.util._

/*
* 数码管显示模块,输入是BCD码
* */

class bcd_bundleIO extends Bundle{
  val b=Input(UInt(4.W))//BCD
  val h=Output(UInt(7.W))

}

class BCD7SEG extends Module{
  val io=IO(new bcd_bundleIO)
  val temp = WireDefault(127.U(7.W))

  switch(io.b){
    is(0.U(4.W)){
      temp := 64.U
    }
    is(1.U(4.W)) {
      temp := 124.U
    }
    is(2.U(4.W)) {
      temp := 36.U
    }
    is(3.U(4.W)) {
      temp := 79.U
    }
    is(4.U(4.W)) {
      temp := 25.U
    }
    is(5.U(4.W)) {
      temp := 18.U
    }
    is(6.U(4.W)) {
      temp := 2.U
    }
    is(7.U(4.W)) {
      temp := 120.U
    }
    is(8.U(4.W)) {
      temp := 0.U
    }
    is(9.U(4.W)) {
      temp := 16.U
    }

  }
  io.h := temp
}
