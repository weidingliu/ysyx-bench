package Pipline_CPU.axi
import Pipline_CPU._
import chisel3._
import chisel3.util._
import firrtl.Utils.False

class sram2axi extends Module with Paramete{
    val io = IO(new Bundle() {
      val in = new CPU_MEM_Bundle("WRIO")
      val out = new Axi_lite_Bundle_out
    })
  val ar_valid = RegInit(false.B)
  val aw_valid = RegInit(false.B)
  val wd_valid = RegInit(false.B)


}
