package Pipline_CPU.utils

import chisel3._
import chisel3.util._

object Pipline_Connect {
  def apply[T <: Data](left: DecoupledIO[T],right: DecoupledIO[T],right_fire: Bool,flush: Bool) = {
    val valid = RegInit(false.B)
//    val bit_temp = RegInit(0.U)
    when(right_fire) {
      valid := false.B
    }
    when(left.valid && right.ready) {
      valid := true.B
    }
    when(flush === 1.U) {
      valid := false.B
    }

    left.ready := right.ready
    right.bits := RegEnable(left.bits,left.valid && right.ready)
//    right.bits := RegEnable(left.bits, 0.U,left.valid && right.ready)
    right.valid := valid
  }
}

object BUFFER_Connect {
  def apply[T <: Data](left: DecoupledIO[T],right: DecoupledIO[T],right_fire: Bool,flush: Bool) = {
    val head = RegInit(0.U(6.W))
    val tail = RegInit(0.U(6.W))
    val empty = head === tail
    val full = (head(4,0) === tail (4,0)) && (head(5) ^ tail(5))

    val buffer = Reg(Vec(32,left.bits.cloneType))

    when(right_fire){
      tail := tail + 1.U
    }
    when(left.valid && !full){
      head := head + 1.U
      buffer(head(4,0)) := left.bits
    }
    when(flush){
      head := 0.U(6.W)
      tail := 0.U(6.W)
    }
    right.bits := buffer(tail(4,0))
    left.ready := !full
    right.valid := !empty

  }
}

