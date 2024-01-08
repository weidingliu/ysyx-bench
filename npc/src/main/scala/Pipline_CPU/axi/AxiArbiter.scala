package Pipline_CPU.axi
import Pipline_CPU._
import chisel3._
import chisel3.util._


class Axi_FULLArbiter extends Module{
  val io = IO(new Bundle() {
    val in1 = new Axi_full_Bundle_in
    val in2 = new Axi_full_Bundle_in
    val out = new Axi_full_Bundle_out
  })
  val raNotArbiter = RegInit(false.B)
  val waNotArbiter = RegInit(false.B)

  when(io.in2.raddr_req.valid && !io.in1.raddr_req.valid){
    raNotArbiter := true.B
  }.elsewhen(io.out.rdata_rep.valid & (io.out.rdata_rep.bits.id === 1.U)){
    raNotArbiter := false.B
  }

  when(io.in2.waddr_req.valid && !io.in1.waddr_req.valid){
    waNotArbiter := true.B
  }.elsewhen(io.out.wb.valid & (io.out.wb.bits.id === 1.U)){
    waNotArbiter := false.B
  }

  def Arbiter [T <: Data](in0 : DecoupledIO[T], in1 : DecoupledIO[T], out : DecoupledIO[T], notArbiter : Bool) = {
//    val grant = Cat(in1.valid,in0.valid)
    when(in0.valid && !notArbiter) {
      out.bits := in0.bits
    }.otherwise {
      out.bits := in1.bits
    }
    in0.ready := out.ready & in0.valid & !notArbiter
    in1.ready := out.ready & in1.valid & !in0.valid

    out.valid := in0.valid | in1.valid

  }

  Arbiter(io.in1.raddr_req,io.in2.raddr_req,io.out.raddr_req,raNotArbiter)
  Arbiter(io.in1.waddr_req,io.in2.waddr_req,io.out.waddr_req,waNotArbiter)
  Arbiter(io.in1.wdata_req,io.in2.wdata_req,io.out.wdata_req,waNotArbiter)

  io.out.rdata_rep.ready := io.in2.rdata_rep.ready
  when(io.out.rdata_rep.bits.id === 0.U){
    io.out.rdata_rep.ready := io.in1.rdata_rep.ready
  }
  io.in1.rdata_rep.valid := io.out.rdata_rep.valid & (io.out.rdata_rep.bits.id === 0.U)
  io.in2.rdata_rep.valid := io.out.rdata_rep.valid & (io.out.rdata_rep.bits.id === 1.U)

  io.out.wb.ready := io.in2.wb.ready
  when(io.out.wb.bits.id === 0.U) {
    io.out.wb.ready := io.in1.wb.ready
  }
  io.in1.wb.valid := io.out.wb.valid & (io.out.wb.bits.id === 0.U)
  io.in2.wb.valid := io.out.wb.valid & (io.out.wb.bits.id === 1.U)

  io.in1.rdata_rep.bits <> io.out.rdata_rep.bits
  io.in2.rdata_rep.bits <> io.out.rdata_rep.bits

  io.in1.wb.bits <> io.out.wb.bits
  io.in2.wb.bits <> io.out.wb.bits

}

class AxiliteArbiter extends Module{
  val io = IO(new Bundle() {
    val in1 = new Axi_lite_Bundle_in
    val in2 = new Axi_lite_Bundle_in
    val out = new Axi_lite_Bundle_out
  })
  val idle :: busy :: Nil = Enum(2)
  val state = RegInit(idle)
  val choose_r = RegInit(0.U(1.W))
  val choose = WireDefault(0.U(1.W))

//  val in1_reg = RegNext(io.in1)
//  val in2_reg = RegNext(io.in2)

  when((io.in1.raddr_req.valid || io.in1.waddr_req.valid) && state === idle){
    choose_r := 0.U
    io.in1.raddr_req.ready := true.B
    io.in1.waddr_req.ready := true.B
    io.in1.wdata_req.ready := true.B
    io.out.raddr_req.valid := io.in1.raddr_req.valid
    io.out.waddr_req.valid := io.in1.waddr_req.valid
    io.out.wdata_req.valid := io.in1.wdata_req.valid

    io.in2.raddr_req.ready := false.B
    io.in2.waddr_req.ready := false.B
    io.in2.wdata_req.ready := false.B

    io.in1.raddr_req.bits <> io.out.raddr_req.bits
    io.in1.waddr_req.bits <> io.out.waddr_req.bits
    io.in1.wdata_req.bits <> io.out.wdata_req.bits
    state := busy
  }.elsewhen((io.in2.raddr_req.valid || io.in2.waddr_req.valid) && state === idle){
    choose_r := 1.U
    //    io.out.raddr_req <> io.in2.raddr_req
    //    io.out.waddr_req <> io.in2.waddr_req
    //    io.out.wdata_req <> io.in2.wdata_req
    //    io.out.rdata_rep <> io.in2.rdata_rep
    //    io.out.wb <> io.in2.wb
    io.in2.raddr_req.ready := true.B
    io.in2.waddr_req.ready := true.B
    io.in2.wdata_req.ready := true.B
    io.out.raddr_req.valid := io.in2.raddr_req.valid
    io.out.waddr_req.valid := io.in2.waddr_req.valid
    io.out.wdata_req.valid := io.in2.wdata_req.valid

    io.in1.raddr_req.ready := false.B
    io.in1.waddr_req.ready := false.B
    io.in1.wdata_req.ready := false.B

    io.in2.raddr_req.bits <> io.out.raddr_req.bits
    io.in2.waddr_req.bits <> io.out.waddr_req.bits
    io.in2.wdata_req.bits <> io.out.wdata_req.bits
    state := busy
  }.otherwise{
    //    io.out.raddr_req <> io.in1.raddr_req
    //    io.out.waddr_req <> io.in1.waddr_req
    //    io.out.wdata_req <> io.in1.wdata_req
    //    io.out.rdata_rep <> io.in1.rdata_rep
    //    io.out.wb <> io.in1.wb
    io.in1.raddr_req.ready := false.B
    io.in1.waddr_req.ready := false.B
    io.in1.wdata_req.ready := false.B
    io.out.raddr_req.valid := false.B
    io.out.waddr_req.valid := false.B
    io.out.wdata_req.valid := false.B

    io.in2.raddr_req.ready := false.B
    io.in2.waddr_req.ready := false.B
    io.in2.wdata_req.ready := false.B

    io.in1.raddr_req.bits <> io.out.raddr_req.bits
    io.in1.waddr_req.bits <> io.out.waddr_req.bits
    io.in1.wdata_req.bits <> io.out.wdata_req.bits
    state := idle
  }

  when(io.out.rdata_rep.valid || io.out.wb.valid){
    when(choose_r === 0.U){

      io.in1.rdata_rep.valid := io.out.rdata_rep.valid
      io.in1.wb.valid := io.out.wb.valid

      io.in2.rdata_rep.valid := false.B
      io.in2.wb.valid := false.B

      io.out.rdata_rep.ready := io.in1.rdata_rep.ready
      io.out.wb.ready := io.in1.wb.ready

      state := idle

    }.otherwise{
      //      io.out.raddr_req <> io.in2.raddr_req
      //      io.out.waddr_req <> io.in2.waddr_req
      //      io.out.wdata_req <> io.in2.wdata_req
      //      io.out.rdata_rep <> io.in2.rdata_rep
      //      io.out.wb <> io.in2.wb

      io.in2.rdata_rep.valid := io.out.rdata_rep.valid
      io.in2.wb.valid := io.out.wb.valid

      io.in1.rdata_rep.valid := false.B
      io.in1.wb.valid := false.B

      io.out.rdata_rep.ready := io.in2.rdata_rep.ready
      io.out.wb.ready := io.in2.wb.ready
      state := idle
    }
  }.otherwise{
    //    io.out.raddr_req <> io.in1.raddr_req
    //    io.out.waddr_req <> io.in1.waddr_req
    //    io.out.wdata_req <> io.in1.wdata_req
    //    io.out.rdata_rep <> io.in1.rdata_rep
    //    io.out.wb <> io.in1.wb
    io.in1.rdata_rep.valid := false.B
    io.in1.wb.valid := false.B

    io.in2.rdata_rep.valid := false.B
    io.in2.wb.valid := false.B

    io.out.rdata_rep.ready := true.B
    io.out.wb.ready := true.B

  }

  io.in2.rdata_rep.bits <> io.out.rdata_rep.bits
  io.in2.wb.bits <> io.out.wb.bits

  io.in1.rdata_rep.bits <> io.out.rdata_rep.bits
  io.in1.wb.bits <> io.out.wb.bits

}

//import chisel3.stage._
//
//object Spec extends App{
//  (new ChiselStage).emitVerilog(new AxiArbiter(),Array("--target-dir", "build"))
//}
