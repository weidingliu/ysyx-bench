package LFSR
import chisel3._
import chisel3.util._

/**
 * seg显示16进制
 *
 */
class segcon extends Module{
    val io=IO(new Bundle() {
    val in =Input(UInt(4.W))
    val out = Output(UInt(8.W))
  })
  val temp=WireDefault(127.U(7.W))
  switch(io.in){
    is(0.U(4.W)) {
      temp := 64.U
    }
    is(1.U(4.W)) {
      temp := 121.U
    }
    is(2.U(4.W)) {
      temp := 36.U
    }
    is(3.U(4.W)) {
      temp := 48.U
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
    is(10.U(4.W)) {
      temp := 24.U
    }
    is(11.U(4.W)) {
      temp := 3.U
    }
    is(12.U(4.W)) {
      temp := 70.U
    }
    is(13.U(4.W)) {
      temp := 33.U
    }
    is(14.U(4.W)) {
      temp := 6.U
    }
    is(15.U(4.W)) {
      temp := 14.U
    }
  }
  io.out := Cat(temp,1.U)
}

class LFSR extends Module {
    val io=IO(new Bundle() {
      val en=Input(Clock())
      val out1=Output(UInt(8.W))
      val out2=Output(UInt(8.W))
    })


  withClock(io.en){
    val seg1=Module(new segcon)
    val seg2=Module(new segcon)
    val temp=RegInit(6.U(8.W))
    temp := Cat(temp(0)^temp(2)^temp(3)^temp(4),temp(7,1))
    seg1.io.in := temp(3,0)
    seg2.io.in := temp(7,4)
    io.out1 := seg1.io.out
    io.out2 := seg2.io.out
  }

}

import chisel3.stage._
//import java.sql.Driver

object Spec extends App{
  (new ChiselStage).emitVerilog(new LFSR(),Array("--target-dir", "build"))
}