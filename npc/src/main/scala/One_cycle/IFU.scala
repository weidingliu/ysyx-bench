package One_cycle
import chisel3._
import chisel3.util.BitPat


class IFU extends Module with paramete {
    val io = IO(new Bundle() {

      val pc=Output(UInt(xlen.W))
    })
  val temp=RegInit("h80000000".U(xlen.W))
  temp := temp + 4.U(xlen.W)
  io.pc :=temp
}

//import chisel3.stage._
//
//object Spec extends App{
//  (new ChiselStage).emitVerilog(new IFU(),Array("--target-dir", "build"))
//}