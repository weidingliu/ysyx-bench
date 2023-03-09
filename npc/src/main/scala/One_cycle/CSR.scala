package One_cycle
import chisel3._

object CSR_index {
  def mstatus = "0x300".U
  def mtvec ="0x305".U
  def mepc ="0x341".U
  def mcause ="0x342".U

  def apply() =UInt(12.W)
}


class CSR extends paramete {

  val mepc = RegInit(0.U(xlen.W))
  val mcause = RegInit(0.U(xlen.W))
  val mstatus = RegInit(0.U(xlen.W))
  val mtvec = RegInit(0.U(xlen.W))
  def read (addr:UInt): UInt = {
    if(addr == CSR_index.mstatus) mstatus
    else if(addr == CSR_index.mtvec) mtvec
    else if(addr == CSR_index.mepc) mepc
    else mcause
  }
  def write (addr:UInt,data:UInt) = {

    if (addr == CSR_index.mstatus) mstatus := data(xlen-1,0)
    else if (addr == CSR_index.mtvec) mtvec := data(xlen-1,0)
    else if (addr == CSR_index.mepc) mepc := data(xlen-1,0)
    else mcause := data(xlen-1,0)
  }
}
