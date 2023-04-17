package Pipline_CPU.frontend
import Pipline_CPU._
import chisel3._
import chisel3.util._

class IF extends Module with Paramete{
  val io = IO(new Bundle() {
    val branch_io = Flipped(new BranchIO)
    val inst = Input(UInt(instlen.W))
    val out = Decoupled(new FetchIO)
    val flush = Input(Bool())


  })

  val temp = RegInit("h80000000".U(xlen.W))
  temp := Mux(io.branch_io.is_jump || io.branch_io.is_branch, io.branch_io.dnpc, Mux(io.out.ready,temp + 4.U(xlen.W),temp))
  io.out.bits.PC := temp
  io.out.bits.Inst := io.inst

  io.out.valid := Mux(io.flush,0.U,1.U)

}
