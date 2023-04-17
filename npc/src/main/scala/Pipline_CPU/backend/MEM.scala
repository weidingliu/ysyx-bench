package Pipline_CPU.backend
import Pipline_CPU._
import Pipline_CPU.utils.SIgEXtend
import Pipline_CPU.utils.ZeroEXtend
import Pipline_CPU.frontend.FUType

import chisel3._
import chisel3.util._

class MEM_stage extends Module with Paramete {
    val io= IO(new Bundle() {
      val in = Flipped(Decoupled(new MEMIO))

      val out = Decoupled(new WBIO)

      val mem = new MEMCtrlIO
    })

  val src1 = WireDefault(0.U(xlen.W))
  val src2 = WireDefault(0.U(xlen.W))
  val Imm = WireDefault(0.U(xlen.W))
  val we = WireDefault(0.U(1.W))

  src1 := io.in.bits.ctrl_data.src1
  src2 := io.in.bits.ctrl_data.src2
  Imm := io.in.bits.ctrl_data.Imm

  val wmask_temp = WireDefault(0.U(masklen.W))
  val wdata_temp = WireDefault(0.U(xlen.W))
  val addr_temp = WireDefault(0.U(xlen.W))

  val sb_wmask = Seq(
    (addr_temp(2, 0) === "b000".U) -> "b00000001".U,
    (addr_temp(2, 0) === "b001".U) -> "b00000010".U,
    (addr_temp(2, 0) === "b010".U) -> "b00000100".U,
    (addr_temp(2, 0) === "b011".U) -> "b00001000".U,
    (addr_temp(2, 0) === "b100".U) -> "b00010000".U,
    (addr_temp(2, 0) === "b101".U) -> "b00100000".U,
    (addr_temp(2, 0) === "b110".U) -> "b01000000".U,
    (addr_temp(2, 0) === "b111".U) -> "b10000000".U
  )
  val sb_wdata = Seq(
    (addr_temp(2, 0) === "b000".U) -> Cat(Fill(56, 0.U), src2(7, 0)),
    (addr_temp(2, 0) === "b001".U) -> Cat(Fill(48, 0.U), src2(7, 0), Fill(8, 0.U)),
    (addr_temp(2, 0) === "b010".U) -> Cat(Fill(40, 0.U), src2(7, 0), Fill(16, 0.U)),
    (addr_temp(2, 0) === "b011".U) -> Cat(Fill(32, 0.U), src2(7, 0), Fill(24, 0.U)),
    (addr_temp(2, 0) === "b100".U) -> Cat(Fill(24, 0.U), src2(7, 0), Fill(32, 0.U)),
    (addr_temp(2, 0) === "b101".U) -> Cat(Fill(16, 0.U), src2(7, 0), Fill(40, 0.U)),
    (addr_temp(2, 0) === "b110".U) -> Cat(Fill(8, 0.U), src2(7, 0), Fill(48, 0.U)),
    (addr_temp(2, 0) === "b111".U) -> Cat(src2(7, 0), Fill(56, 0.U))
  )

  switch(io.in.bits.ctrl_signal.aluoptype) {
    is(ALUOPType.ld) {
      addr_temp := src1 + Imm
    }
    is(ALUOPType.sd) {
      addr_temp := src1 + Imm
      we := 1.U
    }
    is(ALUOPType.sh) {
      addr_temp := src1 + Imm
      we := 1.U
    }
    is(ALUOPType.lw) {
      addr_temp := src1 + Imm
    }
    is(ALUOPType.lwu) {
      addr_temp := src1 + Imm
    }
    is(ALUOPType.lbu) {
      addr_temp := src1 + Imm
    }
    is(ALUOPType.lb) {
      addr_temp := src1 + Imm
    }
    is(ALUOPType.sb) {
      addr_temp := src1 + Imm
      we := 1.U
    }
    is(ALUOPType.sw) {
      addr_temp := src1 + Imm
      we := 1.U
    }
    is(ALUOPType.lh) {
      addr_temp := src1 + Imm
    }
    is(ALUOPType.lhu) {
      addr_temp := src1 + Imm
    }
  }
  switch(io.in.bits.ctrl_signal.aluoptype) {

    is(ALUOPType.sd) {
      wmask_temp := "b11111111".U
      wdata_temp := src2
    }
    is(ALUOPType.sh) {
      switch(addr_temp(2, 1)) {
        is("b00".U) {
          wmask_temp := "b00000011".U
          wdata_temp := Cat(Fill(48, 0.U), src2(15, 0))
        }
        is("b01".U) {
          wmask_temp := "b00001100".U
          wdata_temp := Cat(Fill(32, 0.U), src2(15, 0), Fill(16, 0.U))
        }
        is("b10".U) {
          wmask_temp := "b00110000".U
          wdata_temp := Cat(Fill(16, 0.U), src2(15, 0), Fill(32, 0.U))
        }
        is("b11".U) {
          wmask_temp := "b11000000".U
          wdata_temp := Cat(src2(15, 0), Fill(48, 0.U))

        }
      }
    }
    is(ALUOPType.sb) {
      wmask_temp := MuxCase(0.U(8.W), sb_wmask)
      wdata_temp := MuxCase(0.U(xlen.W), sb_wdata)
    }
    is(ALUOPType.sw) {
      wmask_temp := Mux(addr_temp(2, 2) === 1.U, "b11110000".U, "b00001111".U)
      wdata_temp := Mux(addr_temp(2, 2) === 1.U, Cat(src2(31, 0), Fill(32, 0.U)), Cat(Fill(32, 0.U), src2(31, 0)))
    }
  }
  val lb_mem_select = Seq(
    (addr_temp(2, 0) === "b000".U) -> io.mem.rdata(7, 0),
    (addr_temp(2, 0) === "b001".U) -> io.mem.rdata(15, 8),
    (addr_temp(2, 0) === "b010".U) -> io.mem.rdata(23, 16),
    (addr_temp(2, 0) === "b011".U) -> io.mem.rdata(31, 24),
    (addr_temp(2, 0) === "b100".U) -> io.mem.rdata(39, 32),
    (addr_temp(2, 0) === "b101".U) -> io.mem.rdata(47, 40),
    (addr_temp(2, 0) === "b110".U) -> io.mem.rdata(55, 48),
    (addr_temp(2, 0) === "b111".U) -> io.mem.rdata(63, 56)
  )
  val lh_mem_select = Seq(
    (addr_temp(2, 1) === "b00".U) -> io.mem.rdata(15, 0),
    (addr_temp(2, 1) === "b01".U) -> io.mem.rdata(31, 16),
    (addr_temp(2, 1) === "b10".U) -> io.mem.rdata(47, 32),
    (addr_temp(2, 1) === "b11".U) -> io.mem.rdata(63, 48),
  )
  val mem_result = WireDefault(0.U(xlen.W))
  switch(io.in.bits.ctrl_signal.aluoptype) {
    is(ALUOPType.ld) {
      mem_result := io.mem.rdata
    }
    is(ALUOPType.lw) {
      mem_result := Mux(addr_temp(2, 2) === 1.U, SIgEXtend(io.mem.rdata(63, 32), xlen), SIgEXtend(io.mem.rdata(31, 0), xlen))
    }
    is(ALUOPType.lwu) {
      mem_result := Mux(addr_temp(2, 2) === 1.U, ZeroEXtend(io.mem.rdata(63, 32), xlen), ZeroEXtend(io.mem.rdata(31, 0), xlen))
    }
    is(ALUOPType.lbu) {
      mem_result := ZeroEXtend(MuxCase(0.U(8.W), lb_mem_select), xlen)
    }
    is(ALUOPType.lb) {
      mem_result := SIgEXtend(MuxCase(0.U(8.W), lb_mem_select), xlen)
    }
    is(ALUOPType.lh) {
      mem_result := SIgEXtend(MuxCase(0.U(16.W), lh_mem_select), xlen)
    }
    is(ALUOPType.lhu) {
      mem_result := ZeroEXtend(MuxCase(0.U(16.W), lh_mem_select), xlen)
    }
  }


  io.out.bits.ctrl_signal <> io.in.bits.ctrl_signal
  io.out.bits.ctrl_flow <> io.in.bits.ctrl_flow
  io.out.bits.ctrl_rf <> io.in.bits.ctrl_rf
  io.out.bits.ctrl_signal.inst_valid := Mux(io.in.valid,io.in.bits.ctrl_signal.inst_valid,0.U)
  io.out.bits.ctrl_rf.rfData := Mux(io.in.bits.ctrl_signal.fuType === FUType.mem,mem_result,io.in.bits.ctrl_rf.rfData)
  io.out.bits.ctrl_rf.rfWen := Mux(io.in.valid,io.in.bits.ctrl_signal.rfWen,0.U)

  io.mem.addr := addr_temp
  io.mem.wdata := wdata_temp
  io.mem.wmask := wmask_temp

  io.out.valid := Mux(io.out.ready && io.in.valid ,1.U,0.U)
  io.in.ready := io.out.ready

  io.mem.ce := Mux(io.in.bits.ctrl_signal.fuType === FUType.mem && io.in.valid,1.U,0.U)
  io.mem.we := we

}
