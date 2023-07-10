package Pipline_CPU.frontend
import Pipline_CPU._
import chisel3._
import chisel3.util._

class IF extends Module with Paramete{
  val io = IO(new Bundle() {
    val branch_io = Flipped(new BranchIO)
//    val cache_io = Decoupled()
//    val cache_req = new Bundle() {
//      val addr_req = Decoupled(new ADDRBus)
//      val rdata_rep = Flipped(Decoupled(new ReadDataBus))
//    }
    val cache_req = new CPU_Cache_Bundle("icache")

//    val inst = Input(UInt(instlen.W))
    val out = Decoupled(new FetchIO)
    val flush = Input(Bool())

  })

  val temp = RegInit("h80000000".U(xlen.W))
  temp := Mux(io.branch_io.is_jump || io.branch_io.is_branch, io.branch_io.dnpc, Mux(io.out.ready && io.cache_req.rdata_rep.valid,temp + 4.U(xlen.W),temp))
//  temp := Mux(io.branch_io.is_jump || io.branch_io.is_branch, io.branch_io.dnpc, temp + 4.U(xlen.W))


//  io.cache_io.bits.addr := temp
//  io.cache_io.bits.ce := 1.U
//  io.cache_io.bits.we := 0.U
//  io.cache_io.ready := io.out.ready
  io.out.valid := Mux(io.cache_req.rdata_rep.valid,1.U,0.U)

  io.cache_req.addr_req.bits.addr := temp
  io.cache_req.addr_req.valid := Mux(io.out.ready & !io.branch_io.is_jump & !io.branch_io.is_branch,true.B,false.B)
  io.cache_req.addr_req.bits.ce := Mux(io.branch_io.is_jump || io.branch_io.is_branch,false.B,true.B)
  io.cache_req.addr_req.bits.we := false.B
//  io.flush := io.flush

  io.cache_req.rdata_rep.ready := io.out.ready
  val inst = Mux(temp(2, 2) === 1.U, io.cache_req.rdata_rep.bits.rdata(63, 32), io.cache_req.rdata_rep.bits.rdata(31, 0))

  io.out.bits.PC := temp
  io.out.bits.Inst := Mux(io.flush, 0.U, inst)
//  io.out.valid := Mux(io.cache_io.valid,1.U,0.U) //Mux(io.out.ready && !io.branch_io.is_jump && !io.branch_io.is_branch,1.U,0.U)
  //  io.out.valid := Mux(io.flush,0.U,1.U)

}
