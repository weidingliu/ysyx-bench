package Pipline_CPU.utils

import chisel3._
import chisel3.util._
import Pipline_CPU._
import Pipline_CPU.backend._

class Bypass extends Module with Paramete{
  val io = IO(new Bundle() {
    val EX_rf = Flipped(new RFCtrlIO)
    val MEM_rf = Flipped(new RFCtrlIO)
    val WB_rf = Flipped(new RFCtrlIO)

    val Reg1 = Input(UInt(xlen.W))
    val reg_index1 = Input(UInt(5.W))
    val Reg2 = Input(UInt(xlen.W))
    val reg_index2 = Input(UInt(5.W))

    val Bypass_REG1 = Output(UInt(xlen.W))
    val Bypass_REG2 = Output(UInt(xlen.W))
  })
  val reg1_temp = WireDefault(0.U)
  val reg2_temp = WireDefault(0.U)
  reg1_temp := PriorityMux(
    Seq(
      (io.EX_rf.rfWen === RD.write && io.EX_rf.rfDest === io.reg_index1 && io.EX_rf.rfDest =/= 0.U) -> io.EX_rf.rfData,
      (io.MEM_rf.rfWen === RD.write && io.MEM_rf.rfDest === io.reg_index1 && io.MEM_rf.rfDest =/= 0.U) -> io.MEM_rf.rfData,
      (io.WB_rf.rfWen === RD.write && io.WB_rf.rfDest === io.reg_index1 && io.WB_rf.rfDest =/= 0.U) -> io.WB_rf.rfData,
      (1.B) -> io.Reg1
    )
  )
  reg2_temp := PriorityMux(
    Seq(
      (io.EX_rf.rfWen === RD.write && io.EX_rf.rfDest === io.reg_index2 && io.EX_rf.rfDest =/= 0.U) -> io.EX_rf.rfData,
      (io.MEM_rf.rfWen === RD.write && io.MEM_rf.rfDest === io.reg_index2 && io.MEM_rf.rfDest =/= 0.U) -> io.MEM_rf.rfData,
      (io.WB_rf.rfWen === RD.write && io.WB_rf.rfDest === io.reg_index2 && io.WB_rf.rfDest =/= 0.U) -> io.WB_rf.rfData,
      (1.B) -> io.Reg2
    )
  )


  io.Bypass_REG1 := reg1_temp
  io.Bypass_REG2 := reg2_temp



}
