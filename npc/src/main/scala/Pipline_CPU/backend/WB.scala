package Pipline_CPU.backend
import Pipline_CPU._

import chisel3._
import chisel3.util._
class WB extends Module with Paramete{
  val io =IO(new Bundle() {
    val in = Flipped(Decoupled(new WBIO))

    val out = Decoupled(new WBIO)
    val icache_busy = Input(Bool())
    val wb_time_int = Output(Bool())

  })

  io.out.bits <> io.in.bits
  io.out.bits.ctrl_csr.csr_en := Mux(io.in.valid,io.in.bits.ctrl_csr.csr_en,0.U)
  io.out.bits.ctrl_signal.inst_valid := Mux(io.in.valid,io.in.bits.ctrl_signal.inst_valid,0.U)
  io.out.bits.ctrl_rf.rfWen := Mux(io.in.valid,io.in.bits.ctrl_signal.rfWen,0.U)

  io.out.bits.ctrl_signal.excp_flush := Mux(io.icache_busy,false.B,io.in.bits.ctrl_signal.excp_flush && io.in.valid)
  io.out.bits.ctrl_signal.ertn_flush := Mux(io.icache_busy,false.B,io.in.bits.ctrl_signal.ertn_flush && io.in.valid)
  io.wb_time_int := Mux(io.icache_busy,false.B,io.in.bits.ctrl_signal.has_int && io.in.valid)
//  io.stall :=Mux(io.in.valid && (io.in.bits.ctrl_signal.excp_flush || io.in.bits.ctrl_signal.ertn_flush) && io.icache_busy,true.B,false.B)

  io.out.valid := io.in.valid
  io.in.ready := io.out.ready

  when(io.out.valid){
    printf(p"PC: ${Hexadecimal(io.out.bits.ctrl_flow.PC)}  Wen: ${Hexadecimal(io.out.bits.ctrl_rf.rfWen)} Dst: ${Hexadecimal(io.out.bits.ctrl_rf.rfDest)} Wdata: ${Hexadecimal(io.out.bits.ctrl_rf.rfData)}\n")
  }

}
