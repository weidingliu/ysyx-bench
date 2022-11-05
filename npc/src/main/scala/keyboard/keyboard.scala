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
    val seg3=Output(UInt(8.W))
    val seg4=Output(UInt(8.W))
    val seg5=Output(UInt(8.W))
  })
  val ps2key=Module(new ps2_keyboard)

  val Seg0=Module(new segcon)
  val Seg1=Module(new segcon)
  val Seg2=Module(new segcon)
  val Seg3=Module(new segcon)
  val Seg4=Module(new segcon)
  val Seg5=Module(new segcon)
//  val Seg6=Module(new segcon)
//  val Seg7=Module(new segcon)

  val iDLE :: oUT :: eND :: Nil =Enum(3)

  val statereg=RegInit(iDLE)
  val count=RegInit(0.U(8.W))
  val temp=RegInit(0.U(8.W))
  val ascii=WireDefault(0.U(8.W))
  ps2key.io.clk := clock
  ps2key.io.clrn := reset//~reset
  ps2key.io.ps2_clk := io.ps2_clk
  ps2key.io.ps2_data := io.ps2_data

  Seg0.io.in := temp(3,0)
  Seg1.io.in := temp(7,4)
  Seg2.io.in := ascii(3,0)
  Seg3.io.in := ascii(7,4)
  Seg4.io.in := count(3,0)
  Seg5.io.in := count(7,4)

  io.seg0 := Seg0.io.out
  io.seg1 := Seg1.io.out
  io.seg2 :=Seg2.io.out
  io.seg3 := Seg3.io.out
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

        when(temp==="hf0".U){
          temp := 0.U
        }otherwise {
          temp := ps2key.io.data
        }
        when(ps2key.io.data==="hf0".U){
          count := count+1.U
        }
    }
    is(eND){
      statereg := iDLE
      ps2key.io.nextdata_n := 0.B
    }
  }

  switch(temp){
    is("h00".U){
      ascii := "h00".U
    }
    is("h76".U){
      ascii := "h1b".U//esc
    }
    is("h05".U) {
      ascii := "h70".U//f1
    }
    is("h06".U) {
      ascii := "h71".U //f2
    }
    is("h04".U) {
      ascii := "h72".U //f3
    }
    is("h0c".U) {
      ascii := "h73".U //f4
    }
    is("h03".U) {
      ascii := "h74".U //f5
    }
    is("h0b".U) {
      ascii := "h75".U //f6
    }
    is("h83".U) {
      ascii := "h76".U //f7
    }
    is("h0a".U) {
      ascii := "h77".U //f8
    }
    is("h01".U) {
      ascii := "h78".U //f9
    }
    is("h09".U) {
      ascii := "h79".U //f10
    }
    is("h78".U) {
      ascii := "h7a".U //f11
    }
    is("h07".U) {
      ascii := "h7b".U //f12
    }

    is("h0e".U) {
      ascii := "h60".U // `
    }
    is("h16".U) {
      ascii := "h31".U // 1
    }
    is("h1e".U) {
      ascii := "h32".U // 2
    }
    is("h26".U) {
      ascii := "h33".U // 3
    }
    is("h25".U) {
      ascii := "h34".U // 4
    }
    is("h2e".U) {
      ascii := "h35".U // 5
    }
    is("h36".U) {
      ascii := "h36".U // 6
    }
    is("h3d".U) {
      ascii := "h37".U // 7
    }
    is("h3e".U) {
      ascii := "h38".U // 8
    }
    is("h46".U) {
      ascii := "h39".U // 9
    }
    is("h45".U) {
      ascii := "h30".U // 0
    }
    is("h4e".U) {
      ascii := "h2d".U // -_
    }
    is("h55".U) {
      ascii := "h3d".U // +=
    }
    is("h5d".U) {
      ascii := "h6c".U // |
    }
    is("h66".U) {
      ascii := "h08".U // backspace
    }
    is("h0d".U) {
      ascii := "h09".U // tab
    }
    is("h15".U) {
      ascii := "h71".U // q
    }
    is("h1d".U) {
      ascii := "h77".U // w
    }
    is("h24".U) {
      ascii := "h65".U // e
    }
    is("h2d".U) {
      ascii := "h72".U // r
    }
    is("h2c".U) {
      ascii := "h74".U // t
    }
    is("h35".U) {
      ascii := "h79".U // y
    }
    is("h3c".U) {
      ascii := "h75".U // u
    }
    is("h43".U) {
      ascii := "h68".U // i
    }
    is("h44".U) {
      ascii := "h6f".U // o
    }
    is("h4d".U) {
      ascii := "h70".U // p
    }
    is("h54".U) {
      ascii := "h5b".U // [
    }
    is("h5b".U) {
      ascii := "h5d".U // ]
    }
    is("h5a".U) {
      ascii := "h0d".U // enter
    }
    is("h1c".U) {
      ascii := "h61".U // a
    }
    is("h1b".U) {
      ascii := "h73".U // s
    }
    is("h23".U) {
      ascii := "h64".U // d
    }
    is("h2b".U) {
      ascii := "h66".U // f
    }
    is("h34".U) {
      ascii := "h67".U // g
    }
    is("h33".U) {
      ascii := "h68".U // h
    }
    is("h3b".U) {
      ascii := "h6a".U // j
    }
    is("h42".U) {
      ascii := "h6b".U // k
    }
    is("h4b".U) {
      ascii := "h6c".U // l
    }
    is("h4c".U) {
      ascii := "h3b".U // ;
    }
    is("h52".U) {
      ascii := "h27".U // '
    }
    is("h58".U) {
      ascii := "h14".U // caps
    }
    is("h12".U) {
      ascii := "h0a".U // shift
    }
    is("h1a".U) {
      ascii := "h7a".U // z
    }
    is("h22".U) {
      ascii := "h78".U // x
    }
    is("h21".U) {
      ascii := "h63".U // c
    }
    is("h2a".U) {
      ascii := "h76".U // v
    }
    is("h32".U) {
      ascii := "h62".U // b
    }
    is("h31".U) {
      ascii := "h6e".U // n
    }
    is("h3a".U) {
      ascii := "h6d".U // m
    }
    is("h41".U) {
      ascii := "h2c".U // ,
    }
    is("h49".U) {
      ascii := "h2e".U // .
    }
    is("h4a".U) {
      ascii := "h2f".U // /
    }
    is("h59".U) {
      ascii := "h0a".U // right shift
    }
    is("h29".U) {
      ascii := "h20".U // space
    }
    is("h14".U) {
      ascii := "h11".U // ctrl
    }
    is("h11".U) {
      ascii := "h12".U // alt
    }

  }

}


import chisel3.stage._

object Spec extends App{
  (new ChiselStage).emitVerilog(new keyboard(),Array("--target-dir", "build"))
}