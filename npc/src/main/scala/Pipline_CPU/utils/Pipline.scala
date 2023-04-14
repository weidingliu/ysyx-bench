package Pipline_CPU

import chisel3._
import chisel3.util._

object Pipline_Connect {
  def apply[T <: Data](left: DecoupledIO[T],right: DecoupledIO[T],right_fire: Bool) = {
    val valid = RegInit(false.B)
    when (left.valid && right.ready) {
      valid := true.B
    }
    when(!right_fire) {
      valid := false.B
    }

    left.ready := right.ready
    right.bits := RegEnable(left.bits,left.valid && right.ready)
    right.valid := valid;
  }
}
