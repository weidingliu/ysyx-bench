package Pipline_CPU.backend
import Pipline_CPU._
import chisel3._
import chisel3.util._
import Pipline_CPU.utils.SIgEXtend
import Pipline_CPU.utils.LookupTree
import Pipline_CPU.utils.ZeroEXtend
//import math._


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

class Improved_Partial_product(mul_len : Int)extends Module{
  val io = IO(new Bundle(){
    val y_3 = Input(UInt(3.W))
    val x = Input(UInt((mul_len+2).W))
    val p = Output(UInt((mul_len+2).W))
    val c = Output(UInt(2.W))
})
  io.p := MuxCase(0.U((mul_len + 2).W), Seq(
    (io.y_3 === "b000".U) -> 0.U(((mul_len + 2)).W),
    (io.y_3 === "b001".U) -> io.x,
    (io.y_3 === "b010".U) -> io.x,
    (io.y_3 === "b011".U) -> (io.x << 1),
    (io.y_3 === "b100".U) -> ((~io.x) << 1),
    (io.y_3 === "b101".U) -> (~io.x),
    (io.y_3 === "b110".U) -> (~io.x),
    (io.y_3 === "b111".U) -> 0.U(((mul_len + 2)).W),

  ))
  io.c := MuxCase(0.U(1.W), Seq(
    (io.y_3 === "b000".U) -> "b00".U(2.W),
    (io.y_3 === "b001".U) -> "b00".U(2.W),
    (io.y_3 === "b010".U) -> "b00".U(2.W),
    (io.y_3 === "b011".U) -> "b00".U(2.W),
    (io.y_3 === "b100".U) -> "b10".U(2.W),
    (io.y_3 === "b101".U) -> "b01".U(2.W),
    (io.y_3 === "b110".U) -> "b01".U(2.W),
    (io.y_3 === "b111".U) -> "b00".U(2.W),
  ))
}
object Improved_Partial_product{
    def apply( mul_len: Int,y_3:UInt,x:UInt) ={
      val m = Module(new Improved_Partial_product(mul_len))
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

class Half_Adder extends Module{
  val io = IO(new Bundle() {
    val in = Input(Vec(2,Bool()))
    val out = Output(Vec(2,Bool()))
  })
  io.out(0) := io.in(0) ^ io.in(1)
  io.out(1) := io.in(0) & io.in(1)
}
object Half_Adder{
  def apply(in1:Bool,in2:Bool): (Bool,Bool) = {
    val m = Module(new Half_Adder)
    m.io.in(0) := in1
    m.io.in(1) := in2
    (m.io.out(0) ,m.io.out(1))
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
    val in = Flipped(Decoupled(new MUL_IN(mul_len)))
    val out = Decoupled(new MUL_OUT(mul_len))
  })
  def max_col (y:Array[Seq[Bool]]): Int = {
    var max_size = 0
    for(i <- 0 until y.size){
      if(max_size < y(i).size) max_size = y(i).size
    }
    max_size
  }
  def array_take(y:Seq[Bool],x:Seq[Bool]): Seq[Bool] ={
    if(y == null){
      x
    }
    else{
      y ++ x
    }
  }

  def Add_Onecolmn(col:Seq[Bool],cin:Seq[Bool]): (Seq[Bool],Seq[Bool]) = {
    var sum = Seq[Bool]()
    var cout = Seq[Bool]()

    col.size match {
      case 1 => {
        sum = col ++ cin
      }
      case 2 => {
        val (s,c) = Half_Adder(col(0),col(1))
        sum = Seq(s) ++ cin
        cout = Seq(c)
      }
      case 3 => {
        val (s,c) = Adder(col(0),col(1),col(2))
        sum = Seq(s.asBool) ++ cin
        cout = Seq(c.asBool)
      }
      case n => {
        val count_1 = if(cin.nonEmpty) Seq(cin.head) else Nil
        val count_2 = if(cin.nonEmpty) cin.drop(1) else Nil
        val (s_1,c_1) = Add_Onecolmn(col take 3,count_1)
        val (s_2,c_2) = Add_Onecolmn(col drop 3,count_2)
        sum = s_1 ++ s_2
        cout = c_1 ++ c_2
      }
    }
    (sum,cout)
  }
  def Add_All(cols: Array[Seq[Bool]],depth:Int): (UInt,UInt) ={

    if(max_col(cols) <= 2){
      val sum = Cat(cols.map(_(0)).reverse)
      var k = 0
      while(cols(k).size == 1) k = k+1
      val carry = Cat(cols.drop(k).map(_(1)).reverse)
//      println(depth)
      (sum,Cat(carry,Fill(k,0.U(1.W))))
    }
    else {
      val columns_next = Array.fill(cols.size)(Seq[Bool]())
      var cout = Seq[Bool]()
      for(i<-0 until cols.size){
        val (s,c) = Add_Onecolmn(cols(i),cout)
        columns_next(i) = s
        cout = c
      }
      Add_All(columns_next,depth+1)
    }
  }

  // src2 is Double sign bit
  val list_table = List(
    (Siganle.ss) -> (Cat(SIgEXtend(io.in.bits.ctrl_data.src1, mul_len + 2),Fill(1,0.U)), SIgEXtend(io.in.bits.ctrl_data.src2, mul_len + 2)),
    (Siganle.su) -> (Cat(SIgEXtend(io.in.bits.ctrl_data.src1, mul_len + 2),Fill(1,0.U)), ZeroEXtend(io.in.bits.ctrl_data.src2, mul_len + 2)),
    (Siganle.uu) -> (Cat(ZeroEXtend(io.in.bits.ctrl_data.src1, mul_len + 2),Fill(1,0.U)), ZeroEXtend(io.in.bits.ctrl_data.src2, mul_len + 2)),
  )
  val src1 = LookupTree(io.in.bits.ctrl_flow.mul_sign, list_table.map(p => (p._1, p._2._1)))
  val src2 = LookupTree(io.in.bits.ctrl_flow.mul_sign, list_table.map(p => (p._1, p._2._2)))

  val partial_product_array = new Array[Seq[Bool]]((mul_len +2 )*2-1)
//  val last_c = Seq[UInt]
  var next_c = 0.U(2.W)
  for (i<-0 until (mul_len+2) by 2){
    val (p,c) = Improved_Partial_product(mul_len,src1(i+2,i),src2)
    for(j<-0 until (mul_len+2)){
      partial_product_array(j + i) = array_take(partial_product_array(j + i) , Seq(p(j)))
      if(j == mul_len +1 && i != 0 && i != mul_len){
        partial_product_array(j + i +1) = array_take(partial_product_array(j + i +1) , Seq(!p(j)))
        partial_product_array(j + i +2) = array_take(partial_product_array(j + i +2) , Seq(1.B))
      }
      if(j == mul_len +1 && i == 0){
        partial_product_array(j + i + 1) = array_take(partial_product_array(j + i + 1), Seq(p(j)))
        partial_product_array(j + i + 2) = array_take(partial_product_array(j + i + 2), Seq(p(j)))
        partial_product_array(j + i + 3) = array_take(partial_product_array(j + i + 3), Seq(!p(j)))
      }
      if(j == mul_len +1 && i == mul_len){
        partial_product_array(j + i +1) = array_take(partial_product_array(j + i +1) , Seq(!p(j)))
      }
    }
    if (i != 0) {
      partial_product_array(i - 1) = array_take(partial_product_array(i - 1), Seq(next_c(1)))
      partial_product_array(i - 2) = array_take(partial_product_array(i - 2), Seq(next_c(0)))
    }
    next_c = c
  }
//for(i<-0 until partial_product_array.size){
//  println(i.toString +" "+ partial_product_array(i).size.toString)
//}
  val cols_reg = partial_product_array.map(col => col.map(x => RegNext(x)))
  val (sum,c) = Add_All(cols_reg,0)

  val result = sum + c

  io.out.bits.result.result_hi := result(mul_len * 2-1,mul_len)
  io.out.bits.result.result_lo:= result(mul_len -1,0)
  io.out.valid := true.B
  io.in.ready := true.B
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
  (new ChiselStage).emitVerilog(new Booth_Walloc_MUL(32),Array("--target-dir", "build"))
}
