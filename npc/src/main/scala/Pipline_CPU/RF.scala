package Pipline_CPU

import chisel3._
import chisel3.util._

class RF extends Paramete{
  val rf = Mem(NReg,UInt(xlen.W))
  def read (addr : UInt): UInt = Mux((addr === 0.U), 0.U,rf(addr))
  def write (addr:UInt,data:UInt)  = {rf(addr) := Mux((addr ===0.U ),0.U,data(xlen-1,0))}
}
