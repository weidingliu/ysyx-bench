package Pipline_CPU

trait Paramete {
  val xlen = 64
  val instlen = 32
  val NReg = 32
  val masklen = 8
  val mul_select: String= "Booth"
  val div_select: String = "ImproveRadix"

//  val booth_bit = 3 //
//  val mul_len = xlen+2
}
