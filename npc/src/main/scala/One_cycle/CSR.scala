package One_cycle
import chisel3._

object CSR_index {
  val mstatus = 0x300.U
  val mtvec =0x305.U
  val mepc =0x341.U
  val mcause =0x342.U

  def apply() =UInt(12.W)
}


class CSR extends paramete {

  val mepc = Reg(UInt(xlen.W))
  val mcause = RegInit(0.U(xlen.W))
  val mstatus = RegInit(0.U(xlen.W))
  val mtvec = RegInit(0.U(xlen.W))
  val map =Map(
    CSR_index.mstatus -> 1,
    CSR_index.mtvec -> 2,
    CSR_index.mepc -> 3,
    CSR_index.mcause -> 4,
  )
  def read (addr:UInt): UInt = {
    map(addr) match{
    case (1) => mstatus
    case (2) => mtvec
    case (3) => mepc
    case (4) => mcause
  }
}
  def write (addr:UInt,data:UInt) = {

    if (addr == CSR_index.mstatus) mstatus := data(xlen-1,0)
    else if (addr == CSR_index.mtvec) mtvec := data(xlen-1,0)
    else if (addr == CSR_index.mepc) mepc := data(xlen-1,0)
    else mcause := data(xlen-1,0)
  }
}
