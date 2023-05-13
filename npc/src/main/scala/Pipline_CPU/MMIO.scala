package Pipline_CPU

import chisel3._
import chisel3.util._
class MMIO extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = new Cache_MemReq_Bundle("Dcache")

  })
}
