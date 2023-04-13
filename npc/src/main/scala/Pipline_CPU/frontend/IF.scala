package Pipline_CPU
import chisel3._
import chisel3.util._

class IF extends Module with Paramete{
  val io = IO(new Bundle() {
    val branch_io = Flipped(new BranchIO)

    val out = Decoupled(new FetchIO)

  })

  val temp = RegInit("h80000000".U(xlen.W))
  temp := Mux(io.branch_io.is_jump || io.branch_io.is_branch, io.branch_io.dnpc, temp + 4.U(xlen.W))
  io.out := temp

}
