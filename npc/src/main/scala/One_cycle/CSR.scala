package One_cycle
import chisel3._
import chisel3.util._

object CSR_index {
  val mstatus = 0x300.U
  val mtvec =0x305.U
  val mepc =0x341.U
  val mcause =0x342.U
  val mie = 0x304.U
  val mip=0x344.U

  def apply() =UInt(12.W)
}


class CSR extends paramete {

  val mepc = Reg(UInt(xlen.W))
  val mcause = RegInit(0.U(xlen.W))
  val mstatus = RegInit(0.U(xlen.W))
  val mtvec = RegInit(0.U(xlen.W))
  val mie =RegInit(0.U(xlen.W))
  val mip = RegInit(0.U(xlen.W))
  
  def read (addr:UInt): UInt = MuxCase(0.U(xlen.W),Seq(
      (addr===CSR_index.mstatus) -> mstatus,
      (addr === CSR_index.mtvec) -> mtvec,
      (addr === CSR_index.mepc) -> mepc,
      (addr === CSR_index.mcause) -> mcause,
      (addr === CSR_index.mie) -> mie,
      (addr === CSR_index.mip) -> mip,
    ))

  def write (addr:UInt,data:UInt) = {
    when (addr === CSR_index.mstatus){ mstatus := data(xlen-1,0)}
    .elsewhen (addr === CSR_index.mtvec) {mtvec := data(xlen-1,0)}
    .elsewhen (addr === CSR_index.mepc) {mepc := data(xlen-1,0)}
    .elsewhen (addr === CSR_index.mcause) {mcause := data(xlen-1,0)}
      .elsewhen(addr === CSR_index.mie){mie := data(xlen-1,0)}
      .elsewhen(addr === CSR_index.mip){mip :=data(xlen-1,0)}
      .otherwise{}
  }
}
