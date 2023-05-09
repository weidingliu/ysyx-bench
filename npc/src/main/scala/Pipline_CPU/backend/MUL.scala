package Pipline_CPU.backend
import Pipline_CPU._
import chisel3._
import chisel3.util._
import Pipline_CPU.utils.SIgEXtend
import Pipline_CPU.utils.LookupTree
import Pipline_CPU.utils.ZeroEXtend


object Siganle{
  val ss = "b00".U
  val su = "b01".U
  val uu = "b11".U
}

class Partial_product (booth_bit : Int = 3, mul_len: Int)extends Module{
  val io = IO(new Bundle() {
    val y_3 = Input(UInt(booth_bit.W))
    val x = Input(UInt(((mul_len+2)*2).W))
    val p = Output(UInt(((mul_len+2)*2).W))
    val c = Output(UInt(1.W))
  })


  io.p := MuxCase(0.U(((mul_len+2)*2).W),Seq(
    (io.y_3 === "b000".U) -> 0.U(((mul_len+2)*2).W),
    (io.y_3 === "b001".U) -> io.x,
    (io.y_3 === "b010".U) -> io.x,
    (io.y_3 === "b011".U) -> (io.x << 1),
    (io.y_3 === "b100".U) -> (~(io.x << 1)),
    (io.y_3 === "b101".U) -> ((~io.x)),
    (io.y_3 === "b110".U) -> (~io.x),
    (io.y_3 === "b111".U) -> 0.U(((mul_len+2)*2).W),

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
object Partial_product{
    def apply(booth_bit : Int = 3, mul_len: Int,y_3:UInt,x:UInt) ={
      val m = Module(new Partial_product(booth_bit,mul_len))
      m.io.y_3 := y_3
      m.io.x := x
      (m.io.p,m.io.c)
    }
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

object Adder  {
  def apply(x1:UInt,x2:UInt,x3:UInt) ={
    val m = Module(new Adder)
    m.io.x1 := x1
    m.io.x2 := x2
    m.io.x3 := x3
//    Cat(m.io.s,m.io.c)
    (m.io.s,m.io.c)

//    s := m.io.s
//    c := m.io.c
  }
}

class Shift_MUL (mul_len: Int)extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new MUL_IN(mul_len)))
    val out = Decoupled(new MUL_OUT(mul_len))
  })

  val count = RegInit(0.U((log2Ceil(mul_len)+1).W))
  val result_temp = RegInit(0.U((mul_len*2+1).W))
  val src1 = RegInit(0.U(mul_len.W))
  val src2 = RegInit(0.U(mul_len.W))

  count := Mux(!io.in.bits.ctrl_flow.flush && io.in.valid && !io.out.valid,count+1.U,0.U)
  when(!io.in.bits.ctrl_flow.flush && io.in.valid){
    when(count === 0.U){
        src1 := io.in.bits.ctrl_data.src1
        src2 := io.in.bits.ctrl_data.src2
        result_temp := Cat(Fill(mul_len+1,0.U),io.in.bits.ctrl_data.src2)
    }
    .otherwise{
      result_temp := Mux(result_temp(0),Cat(result_temp(mul_len*2,mul_len)+src1,result_temp(mul_len-1,0))>> 1,result_temp>>1)
      count := count+1.U
    }
  }
//  val (count,flag) = Counter(io.in.valid && !io.in.bits.ctrl_flow.flush,mul_len+1)
//  val result_temp = ShiftRegister(Cat(Fill(mul_len,0.U),src2),1,0.U)
  io.out.valid := Mux((count === (mul_len/2+1).U && io.in.bits.ctrl_flow.mulw)||count === (mul_len+1).U,true.B,false.B)
  io.in.ready := true.B
  io.out.bits.result.result_hi := result_temp(mul_len*2-1,mul_len)
  io.out.bits.result.result_lo := result_temp(mul_len-1,0)
}

class Booth_MUL(booth_bit : Int = 3, mul_len: Int) extends Module{
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new MUL_IN(mul_len)))
    val out = Decoupled(new MUL_OUT(mul_len))
  })
//  val s = Wire(UInt(1.W))
//  val c = Wire(UInt(1.W))
//
//  io.out.bits.result.result_hi := 0.U
////  io.in.bits.ctrl_flow.flush := 0.U
//  io.out.bits.result.result_lo := 0.U
//
//  val (s,c) = Adder(io.in.bits.ctrl_data.src1(0),io.in.bits.ctrl_data.src1(2),io.in.bits.ctrl_data.src1(3))
//  io.in.ready := s
//  io.out.valid := c
//  c := Adder(io.in.bits.ctrl_data.src1(0),io.in.bits.ctrl_data.src1(2),io.in.bits.ctrl_data.src1(3))._2
  val multiplier = RegInit(0.U(((mul_len+2)).W))
  val multiplicand = RegInit(0.U(((mul_len+2)*2).W))
  val p = RegInit(0.U(((mul_len+2)*2).W))
  val count = RegInit(0.U(log2Ceil(mul_len+4).W))
  val partial = Module(new Partial_product(booth_bit = 3,mul_len = mul_len))
  val partial_c = partial.io.c
  val partial_p = partial.io.p

  val list_table = List(
    (Siganle.ss) -> (SIgEXtend(io.in.bits.ctrl_data.src1,mul_len+1),SIgEXtend(io.in.bits.ctrl_data.src2,mul_len+1)),
    (Siganle.su) -> (SIgEXtend(io.in.bits.ctrl_data.src1,mul_len+1),ZeroEXtend(io.in.bits.ctrl_data.src2,mul_len+1)),
    (Siganle.uu) -> (ZeroEXtend(io.in.bits.ctrl_data.src1,mul_len+1),ZeroEXtend(io.in.bits.ctrl_data.src2,mul_len+1)),
  )
  val src1 = LookupTree(io.in.bits.ctrl_flow.mul_sign,list_table.map(p => (p._1,p._2._1)))
  val src2 = LookupTree(io.in.bits.ctrl_flow.mul_sign,list_table.map(p => (p._1,p._2._2)))

  count := Mux(!io.in.bits.ctrl_flow.flush && io.in.valid && !io.out.valid,count+2.U,0.U)
  when(!io.in.bits.ctrl_flow.flush && io.in.valid){
    when (count === 0.U){
      multiplier := Cat(src2, Fill(1, 0.U))//xlen+2
      multiplicand := Cat(Fill(1,0.U),src1, Fill(mul_len + 2, 0.U))
      p := 0.U
    }
    .otherwise {
      val temp =p+partial_p+partial_c
      p := SIgEXtend(temp((mul_len+2)*2-1,2),(mul_len+2)*2)
      multiplier := multiplier >> 2
    }
  }

  partial.io.y_3 := multiplier(2,0)
  partial.io.x := multiplicand

  io.out.valid := Mux((count === ((mul_len+2) + 2).U && io.in.bits.ctrl_flow.mulw) || count === ((mul_len+2) + 2).U, true.B, false.B)
  io.in.ready := true.B
  io.out.bits.result.result_hi := p(mul_len * 2 -1, mul_len)
  io.out.bits.result.result_lo := p(mul_len -1 , 0)

}

class Booth_Walloc_MUL (mul_len:Int) extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new MUL_IN(xlen)))
    val out = Decoupled(new MUL_OUT(xlen))
  })

}


class MUL (booth_bit : Int = 3, mul_len: Int) extends Module with Paramete {
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new MUL_IN(mul_len)))
    val out = Decoupled(new MUL_OUT(mul_len))
  })

//  def select_mul(x:String) = x match {
//    case "Booth" => {
//      val mult = Module(new Booth_MUL(booth_bit, mul_len))
//    }
//    case "Shift" => {
//      val mult = Module(new Shift_MUL(mul_len))
//    }
//    case _ => {
//      val mult = Module(new Booth_MUL(booth_bit, mul_len))
//    }
//  }
//  val mult = select_mul(mul_select)
//  io.in <> mult.io.in
//  io.out <> mult.io.out


  val mul = mul_select match {
    case "Booth" => {
      val mult = Module(new Booth_MUL(booth_bit,mul_len))
      io.in <> mult.io.in
      io.out <> mult.io.out
    }
    case "Shift" => {
      val mult = Module(new Shift_MUL(mul_len))
      io.in <> mult.io.in
      io.out <> mult.io.out
    }
    case _ => {
      val mult = Module(new Booth_MUL(booth_bit, mul_len))
      io.in <> mult.io.in
      io.out <> mult.io.out
    }
  }

}

import chisel3.stage._
object app extends App{
  (new ChiselStage).emitVerilog(new Booth_MUL(3,32),Array("--target-dir", "build"))
}
