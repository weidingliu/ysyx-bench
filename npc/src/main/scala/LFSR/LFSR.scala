package LFSR
import chisel3._
import chisel3.util._


class LFSR extends Module {
    val io=IO(new Bundle() {
      val en=Input(Clock())
      val out=Output(UInt(8.W))
    })

    val temp=RegInit(0.U(8.W))
  withClock(io.en){
    temp := Cat(temp(0)^temp(2)^temp(3)^temp(4),temp(7,1))
  }
  io.out := temp
}

import chisel3.stage._
//import java.sql.Driver

object Spec extends App{
  (new ChiselStage).emitVerilog(new LFSR(),Array("--target-dir", "build"))
}