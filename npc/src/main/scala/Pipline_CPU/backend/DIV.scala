package Pipline_CPU.backend
import Pipline_CPU.Paramete
import chisel3._
import chisel3.util._
import Pipline_CPU.DIV_IN
import Pipline_CPU.DIV_OUT
import Pipline_CPU.utils.LookupTree


class V_Div extends BlackBox{
  val io = IO(new Bundle(){
    val clk = Input(Clock())
    val reset = Input(Bool())
    
    val in_valid = Input(Bool())
    val in_a = Input(UInt(64.W))
    val in_b = Input(UInt(64.W))
    val div_signed = Input(Bool())
    val flush = Input(Bool())

    val result_valid = Output(Bool())
    val quotient = Output(UInt(64.W))
    val remainder = Output(UInt(64.W))
  })
}

class DIV (div_len:Int)extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new DIV_IN(div_len)))
    val out = Decoupled(new DIV_OUT(div_len))
  })
  val dividend = RegInit(0.U((div_len*2).W))
  val divisor = RegInit(0.U(div_len.W))
  val S = RegInit(0.U(div_len.W))
  val R = RegInit(0.U(div_len.W))
//  val negative_src1 = ~io.in.bits.ctrl_data.src1 + "b1"
//  val negative_src2 = ~io.in.bits.ctrl_data.src2 + "b1"

  val iDLE :: rUN :: eND :: Nil = Enum(3)
  val state = RegInit(iDLE)
  val (count,s) = Counter(state === rUN,div_len)
  val res_div = dividend(div_len*2-1,div_len-1) - Cat(0.U,divisor)
  when(io.in.valid && !io.in.bits.ctrl_flow.flush){
    when(state === iDLE){
      state := rUN
    }
    when(state === rUN & s === true.B) {
        state := eND
    }
    when(state === eND){
      state := iDLE
    }
  }.otherwise{
    state := iDLE
  }

  switch(state){
    is(iDLE){
      dividend := Cat(Fill(div_len, 0.U),
        Mux(io.in.bits.ctrl_flow.div_signed & io.in.bits.ctrl_data.src1(div_len - 1), -io.in.bits.ctrl_data.src1, io.in.bits.ctrl_data.src1))
      divisor := Mux(io.in.bits.ctrl_flow.div_signed & io.in.bits.ctrl_data.src2(div_len - 1), -io.in.bits.ctrl_data.src2, io.in.bits.ctrl_data.src2)
    }
    is(rUN ){
      when(count =/= (div_len-1).U){
        S := Mux(res_div(div_len) =/= 1.U,
          Cat(S(div_len - 1, 1), 1.U(1.W)), Cat(S(div_len - 1, 1), 0.U(1.W))) << 1
      }.otherwise{
        S := Mux(res_div(div_len) =/= 1.U,
          Cat(S(div_len - 1, 1), 1.U(1.W)), Cat(S(div_len - 1, 1), 0.U(1.W)))
      }
      dividend := Mux(res_div(div_len) =/= 1.U,
        Cat(dividend(div_len * 2 - 1, div_len - 1) - Cat(0.U, divisor), dividend(div_len - 2, 0)), dividend) << 1
    }
    is(eND){

    }

  }
  //
  val negative_s = -S
  val negative_r = -dividend(div_len*2-1,div_len)

  val select_list = List(
    (0.U) -> (Mux(S(div_len-1),negative_s,S),Mux(dividend(div_len*2-1),negative_r,dividend(div_len*2-1,div_len))),//+s +r
    (1.U) -> (Mux(S(div_len-1),S,negative_s),Mux(dividend(div_len*2-1),negative_r,dividend(div_len*2-1,div_len))),//-s +r
    (2.U) -> (Mux(S(div_len-1),S,negative_s),Mux(dividend(div_len*2-1),dividend(div_len*2-1,div_len),negative_r)),// -s -r
    (3.U) -> (Mux(S(div_len-1),negative_s,S),Mux(dividend(div_len*2-1),dividend(div_len*2-1,div_len),negative_r)),//+s -r
  )
  val s_o = LookupTree(Cat(io.in.bits.ctrl_data.src1(div_len - 1),io.in.bits.ctrl_data.src2(div_len - 1)),select_list.map(p => (p._1,p._2._1)))
  val r_o = LookupTree(Cat(io.in.bits.ctrl_data.src1(div_len - 1),io.in.bits.ctrl_data.src2(div_len - 1)),select_list.map(p => (p._1,p._2._2)))

  io.in.ready := true.B
  io.out.valid := Mux(state === eND,true.B,false.B)
  io.out.bits.result.quotient := Mux(io.in.bits.ctrl_flow.div_signed,s_o,S)
  io.out.bits.result.remainder := Mux(io.in.bits.ctrl_flow.div_signed,r_o,dividend(div_len*2-1,div_len))
}

class Radix_DIV (div_len:Int)extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new DIV_IN(div_len)))
    val out = Decoupled(new DIV_OUT(div_len))
  })
  val dividend = RegInit(0.U((div_len * 2).W))
  val divisor = RegInit(0.U(div_len.W))
  val S = RegInit(0.U(div_len.W))
  val R = RegInit(0.U(div_len.W))

  val iDLE :: rUN :: eND :: Nil = Enum(3)
  val state = RegInit(iDLE)
  val (count, s) = Counter(state === rUN, div_len)
  when(io.in.valid && !io.in.bits.ctrl_flow.flush) {
    when(state === iDLE) {
      state := rUN
    }
    when(state === rUN & s === true.B) {
      state := eND
    }
    when(state === eND) {
      state := iDLE
    }
  }.otherwise {
    state := iDLE
  }

  switch(state) {
    is(iDLE) {
      dividend := Cat(Fill(div_len, 0.U),
        Mux(io.in.bits.ctrl_flow.div_signed & io.in.bits.ctrl_data.src1(div_len - 1), -io.in.bits.ctrl_data.src1, io.in.bits.ctrl_data.src1))
      divisor := Mux(io.in.bits.ctrl_flow.div_signed & io.in.bits.ctrl_data.src2(div_len - 1), -io.in.bits.ctrl_data.src2, io.in.bits.ctrl_data.src2)
    }
    is(rUN) {
      val res_div = dividend(div_len * 2 - 1, div_len - 1) - Cat(0.U, divisor)
      S := Mux(res_div(div_len) =/= 1.U,
        Cat(S(div_len - 1, 0), 1.U(1.W)), Cat(S(div_len - 1, 0), 0.U(1.W)))
      dividend := Mux(res_div(div_len) =/= 1.U,
        Cat(res_div, dividend(div_len - 2, 0)), dividend) << 1
    }
    is(eND) {

    }

  }
  //
  val negative_s = -S
  val negative_r = -dividend(div_len * 2 - 1, div_len)

  val select_list = List(
    (0.U) -> (Mux(S(div_len - 1), negative_s, S), Mux(dividend(div_len * 2 - 1), negative_r, dividend(div_len * 2 - 1, div_len))), //+s +r
    (1.U) -> (Mux(S(div_len - 1), S, negative_s), Mux(dividend(div_len * 2 - 1), negative_r, dividend(div_len * 2 - 1, div_len))), //-s +r
    (2.U) -> (Mux(S(div_len - 1), S, negative_s), Mux(dividend(div_len * 2 - 1), dividend(div_len * 2 - 1, div_len), negative_r)), // -s -r
    (3.U) -> (Mux(S(div_len - 1), negative_s, S), Mux(dividend(div_len * 2 - 1), dividend(div_len * 2 - 1, div_len), negative_r)), //+s -r
  )
  val s_o = LookupTree(Cat(io.in.bits.ctrl_data.src1(div_len - 1), io.in.bits.ctrl_data.src2(div_len - 1)), select_list.map(p => (p._1, p._2._1)))
  val r_o = LookupTree(Cat(io.in.bits.ctrl_data.src1(div_len - 1), io.in.bits.ctrl_data.src2(div_len - 1)), select_list.map(p => (p._1, p._2._2)))

  io.in.ready := true.B
  io.out.valid := Mux(state === eND, true.B, false.B)
  io.out.bits.result.quotient := Mux(io.in.bits.ctrl_flow.div_signed, s_o, S)
  io.out.bits.result.remainder := Mux(io.in.bits.ctrl_flow.div_signed, r_o, dividend(div_len * 2 - 1, div_len))
}

class Div_Top (div_len:Int)extends Module with Paramete{
    val io = IO(new Bundle() {
      val in = Flipped(Decoupled(new DIV_IN(div_len)))
      val out = Decoupled(new DIV_OUT(div_len))
  })
  val div = div_select match{
    case "Radix" => {
      val divi = Module(new Radix_DIV(div_len))
      io.in <> divi.io.in
      io.out <> divi.io.out
    }
    case "Veri" => {
      val divi = Module(new V_Div)
      divi.io.clk := clock
      divi.io.reset := reset
      divi.io.flush := io.in.bits.ctrl_flow.flush
      divi.io.div_signed := io.in.bits.ctrl_flow.div_signed
      divi.io.in_valid := io.in.valid
      divi.io.in_a := io.in.bits.ctrl_data.src1
      divi.io.in_b := io.in.bits.ctrl_data.src2

      io.out.valid := divi.io.result_valid
      io.out.bits.result.quotient := divi.io.quotient
      io.out.bits.result.remainder := divi.io.remainder

      io.in.ready := true.B
    }
    case _ => {
      val divi = Module(new Radix_DIV(div_len))
      io.in <> divi.io.in
      io.out <> divi.io.out
    }
  }
    
  

}

import chisel3.stage._
object app extends App{
  (new ChiselStage).emitVerilog(new Div_Top(64),Array("--target-dir", "build"))
}