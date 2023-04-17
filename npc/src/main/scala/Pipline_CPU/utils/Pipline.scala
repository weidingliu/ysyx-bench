package Pipline_CPU.utils

import chisel3._
import chisel3.util._

object Pipline_Connect {
  def apply[T <: Data](left: DecoupledIO[T],right: DecoupledIO[T],right_fire: Bool,flush: Bool) = {
    val valid = RegInit(false.B)
    when(right_fire === 0.B) {
      valid := false.B
    }
    when(left.valid && right.ready) {
      valid := true.B
    }.otherwise{
      valid := false.B
    }

    when(flush === 1.U) {
      valid := false.B
    }

    left.ready := right.ready
    right.bits := RegEnable(left.bits, left.valid && right.ready)
    right.valid := valid
  }
}
