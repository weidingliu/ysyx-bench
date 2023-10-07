package Pipline_CPU.backend
import Pipline_CPU._
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
class CSR_DIFF extends BlackBox{
  val io=IO(new Bundle() {
    val mepc = Input(UInt(64.W))
    val mcause = Input(UInt(64.W))
    val mstatus = Input(UInt(64.W))
    val mtvec = Input(UInt(64.W))
  })
}
class CSR_ extends Module with Paramete{
  val io = IO(new Bundle() {
    val rd = Flipped(new CSR_RDIO)
    val wr = Flipped(new CSR_WRIO)
    val excp_flush = Input(Bool())
    val mert_flush = Input(Bool())
    val epc = Input(UInt(xlen.W))

    val mtvec_o = Output(UInt(xlen.W))
    val mepc_o = Output(UInt(xlen.W))

    val mtime = Input(UInt(xlen.W))
    val mtimecmp = Input(UInt(xlen.W))
    val
  })
  val mepc = Reg(UInt(xlen.W))
  val mcause = RegInit(0.U(xlen.W))
  val mstatus = RegInit(0.U(xlen.W))
  val mtvec = RegInit(0.U(xlen.W))
  val mie = RegInit(0.U(xlen.W))
  val mip = RegInit(0.U(xlen.W))

  val time_int = (io.mtime >= io.mtimecmp) && ((mstatus)(3, 3) === 1.U) & ((mie)(7, 7) === 1.U)

// read port
  val read_table = Seq(
    (io.rd.csr_addr === CSR_index.mstatus) -> mstatus,
    (io.rd.csr_addr  === CSR_index.mtvec) -> mtvec,
    (io.rd.csr_addr  === CSR_index.mepc) -> mepc,
    (io.rd.csr_addr  === CSR_index.mcause) -> mcause,
    (io.rd.csr_addr  === CSR_index.mie) -> mie,
    (io.rd.csr_addr  === CSR_index.mip) -> mip,
  )
  io.rd.rd_data := MuxCase(0.U(xlen.W),read_table)

  when(io.excp_flush){
    mstatus := mstatus & "hfffffffffffffff7".U(xlen.W)
    mcause := Mux(time_int,7.U(xlen.W),11.U(xlen.W))
    mepc := io.epc
    mip := mip | 0x0000000000000080.U
  }
  when(io.mert_flush){
    mstatus := mstatus | "h0000000000000008".U(xlen.W)
  }

  //write port
  when(io.wr.csr_idx === CSR_index.mstatus && io.wr.csr_en) {
    mstatus := io.wr.csr_data(xlen - 1, 0)
  }
    .elsewhen(io.wr.csr_idx === CSR_index.mtvec && io.wr.csr_en) {
      mtvec := io.wr.csr_data(xlen - 1, 0)
    }
    .elsewhen(io.wr.csr_idx === CSR_index.mepc && io.wr.csr_en) {
      mepc := io.wr.csr_data(xlen - 1, 0)
    }
    .elsewhen(io.wr.csr_idx === CSR_index.mcause && io.wr.csr_en) {
      mcause := io.wr.csr_data(xlen - 1, 0)
    }
    .elsewhen(io.wr.csr_idx === CSR_index.mie && io.wr.csr_en) {
      mie := io.wr.csr_data(xlen - 1, 0)
    }
    .elsewhen(io.wr.csr_idx === CSR_index.mip && io.wr.csr_en) {
      mip := io.wr.csr_data(xlen - 1, 0)
    }
    .otherwise {}

  io.mtvec_o := mtvec
  io.mepc_o := mepc

//  val CSRDIFF = Module(new CSR_DIFF)
//  CSRDIFF.io.mepc := mepc
//  CSRDIFF.io.mtvec := mtvec
//  CSRDIFF.io.mcause := mcause
//  CSRDIFF.io.mstatus := mstatus
}


class CSR extends Paramete{
  val mepc = Reg(UInt(xlen.W))
  val mcause = RegInit(0.U(xlen.W))
  val mstatus = RegInit(0.U(xlen.W))
  val mtvec = RegInit(0.U(xlen.W))
  val mie = RegInit(0.U(xlen.W))
  val mip = RegInit(0.U(xlen.W))

  def read(addr: UInt): UInt = MuxCase(0.U(xlen.W), Seq(
    (addr === CSR_index.mstatus) -> mstatus,
    (addr === CSR_index.mtvec) -> mtvec,
    (addr === CSR_index.mepc) -> mepc,
    (addr === CSR_index.mcause) -> mcause,
    (addr === CSR_index.mie) -> mie,
    (addr === CSR_index.mip) -> mip,
  ))

  def write(addr: UInt, data: UInt) = {
    when(addr === CSR_index.mstatus) {
      mstatus := data(xlen - 1, 0)
    }
      .elsewhen(addr === CSR_index.mtvec) {
        mtvec := data(xlen - 1, 0)
      }
      .elsewhen(addr === CSR_index.mepc) {
        mepc := data(xlen - 1, 0)
      }
      .elsewhen(addr === CSR_index.mcause) {
        mcause := data(xlen - 1, 0)
      }
      .elsewhen(addr === CSR_index.mie) {
        mie := data(xlen - 1, 0)
      }
      .elsewhen(addr === CSR_index.mip) {
        mip := data(xlen - 1, 0)
      }
      .otherwise {}
  }
}



