package VGA
import chisel3._
import chisel3.util._
class vga_ctrl extends BlackBox{
  val io = IO(new Bundle() {
    val pclk = Input(Clock())
    val reset = Input(Bool())
    val vga_data = Input(UInt(24.W))
    val h_addr = Output(UInt(10.W))
    val v_addr = Output(UInt(10.W))
    val hsync = Output(UInt(1.W))
    val vsync = Output(UInt(1.W))
    val valid = Output(UInt(1.W))
    val vga_r = Output(UInt(8.W))
    val vga_g = Output(UInt(8.W))
    val vga_b = Output(UInt(8.W))
  })
}
class vgam extends BlackBox{
  val io = IO(new Bundle() {
    val vga_data = Output(UInt(24.W))
    val h_addr = Input(UInt(10.W))
    val v_addr = Input(UInt(9.W))
  })
}

class VGA extends Module{
  val io = IO(new Bundle() {
    val hsync = Output(UInt(1.W))
    val vsync = Output(UInt(1.W))
    val valid = Output(UInt(1.W))
    val vga_r = Output(UInt(8.W))
    val vga_g = Output(UInt(8.W))
    val vga_b = Output(UInt(8.W))
  })
  val vga_ctrl=Module(new vga_ctrl)
  val vgam=Module(new vgam)

  vga_ctrl.io.pclk := clock
  vga_ctrl.io.reset := reset
  vga_ctrl.io.vga_data := vgam.io.vga_data

  vgam.io.h_addr := vga_ctrl.io.h_addr
  vgam.io.v_addr := vga_ctrl.io.v_addr(8,0)

  io.hsync := vga_ctrl.io.hsync
  io.vsync := vga_ctrl.io.vsync
  io.valid := vga_ctrl.io.valid
  io.vga_r := vga_ctrl.io.vga_r
  io.vga_g := vga_ctrl.io.vga_g
  io.vga_b := vga_ctrl.io.vga_b

  
}


import chisel3.stage._

object Spec extends App{
  (new ChiselStage).emitVerilog(new VGA(),Array("--target-dir", "build"))
}