package One_cycle
import chisel3._

object CSR_index {
  def mstatus = 0x300.U
  def mtvec =0x305.U
  def mepc =0x341.U
  def mcause =0x342.U

  def apply() =UInt(12.W)
}


class CSR extends paramete {

  val mepc = Reg(UInt(xlen.W))
  val mcause = RegInit(UInt(xlen.W),0.U)
  val mstatus = RegInit(UInt(xlen.W),0.U)
  val mtvec = RegInit(UInt(xlen.W),0.U)
  def read (addr:UInt): UInt = addr match{
    case (CSR_index.mstatus) => mstatus
    case (CSR_index.mtvec) => mtvec
    case (CSR_index.mepc) => mepc
  }
  def write (addr:UInt,data:UInt) = {

    if (addr == CSR_index.mstatus) mstatus := data(xlen-1,0)
    else if (addr == CSR_index.mtvec) mtvec := data(xlen-1,0)
    else if (addr == CSR_index.mepc) mepc := data(xlen-1,0)
    else mcause := data(xlen-1,0)
  }
}
