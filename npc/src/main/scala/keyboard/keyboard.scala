package keyboard

import chisel3._
import chisel3.util._
import chisel3.util.{Cat, is, switch}

class ps2_keyboard extends BlackBox{
  val io=IO(new Bundle() {
    val clk=Input(Clock())
    val clrn=Input(Bool())
    val ps2_clk=Input(UInt(1.W))
    val ps2_data=Input(UInt(1.W))
    val nextdata_n=Input(Bool())//output data featch finish
    val data=Output(UInt(8.W))//data output
    val ready=Output(Bool())//data ready
    val overflow=Output(Bool())//fifo full
  })

}

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

class keyboard extends Module{
  val io=IO(new Bundle() {
    val ps2_clk = Input(UInt(1.W))
    val ps2_data = Input(UInt(1.W))
    val seg0=Output(UInt(8.W))
    val seg1=Output(UInt(8.W))
    val seg2=Output(UInt(8.W))
//    val seg3=Output(UInt(8.W))
    val seg4=Output(UInt(8.W))
    val seg5=Output(UInt(8.W))
  })
  val ps2key=Module(new ps2_keyboard)

  val Seg0=Module(new segcon)
  val Seg1=Module(new segcon)
  val Seg2=Module(new segcon)
//  val Seg3=Module(new segcon)
  val Seg4=Module(new segcon)
  val Seg5=Module(new segcon)
//  val Seg6=Module(new segcon)
//  val Seg7=Module(new segcon)

  val iDLE :: oUT :: eND :: Nil =Enum(3)

  val statereg=RegInit(iDLE)
  val count=RegInit(0.U(8.W))
  val temp=RegInit(0.U(8.W))
  ps2key.io.clk := clock
  ps2key.io.clrn := reset
  ps2key.io.ps2_clk := io.ps2_clk
  ps2key.io.ps2_data := io.ps2_data

  Seg0.io.in := temp(3,0)
  Seg1.io.in := temp(7,4)
  Seg2.io.in := statereg
//  Seg3.io.in := ps2key.io.data
  Seg4.io.in := count(3,0)
  Seg5.io.in := count(7,4)

  io.seg0 := Seg0.io.out
  io.seg1 := Seg1.io.out
  io.seg2 :=Seg2.io.out
//  io.seg3 := Seg3.io.out
  io.seg4 :=Seg4.io.out
  io.seg5 :=Seg5.io.out

  switch(statereg){
    is(iDLE){
      when(ps2key.io.ready){
        statereg := oUT
        ps2key.io.nextdata_n := 1.B
      }otherwise{
        statereg := iDLE
        ps2key.io.nextdata_n := 1.B
      }
    }
    is(oUT){
        statereg := eND
        ps2key.io.nextdata_n := 1.B
        temp := ps2key.io.data
        when(ps2key.io.data==="hf0".U){
          count := count+1.U
        }
    }
    is(eND){
      statereg := iDLE
      ps2key.io.nextdata_n := 0.B
    }
  }

}


import chisel3.stage._

object Spec extends App{
  (new ChiselStage).emitVerilog(new keyboard(),Array("--target-dir", "build"))
}