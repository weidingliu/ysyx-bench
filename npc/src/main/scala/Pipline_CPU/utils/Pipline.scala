package Pipline_CPU.utils

import chisel3._
import chisel3.util._

object Pipline_Connect {
  def apply[T <: Data](left: DecoupledIO[T],right: DecoupledIO[T],right_fire: Bool,flush: Bool) = {
    val valid = RegInit(false.B)
    when(!right_fire) {
      valid := false.B
    }
    .elsewhen(flush === 1.U) {
      valid := false.B
    }
    .elsewhen (left.valid && right.ready) {
      valid := true.B
    }
    .otherwise{
      valid := false.B
      }


    left.ready := right.ready
    right.bits := RegEnable(left.bits,  !flush && left.valid && right.ready)
    right.valid := valid
  }
}
