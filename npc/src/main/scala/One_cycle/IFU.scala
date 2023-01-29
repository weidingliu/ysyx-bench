package One_cycle
import chisel3._
import chisel3.util.BitPat


class IFU extends Module with paramete {
    val io = IO(new Bundle() {
      val dnpc=Input(UInt(xlen.W))
      val is_jump=Input(Bool())
      val is_branch=Input(Bool())
      val pc=Output(UInt(xlen.W))
    })
  val temp=RegInit("h80000000".U(xlen.W))
  temp := Mux(io.is_jump || io.is_branch ,io.dnpc,temp + 4.U(xlen.W))
  io.pc := temp
}

//import chisel3.stage._
//
//object Spec extends App{
//  (new ChiselStage).emitVerilog(new IFU(),Array("--target-dir", "build"))
//}