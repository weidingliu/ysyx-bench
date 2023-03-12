package One_cycle
import chisel3._
import chisel3.util._

object TIME_index {
  val mtime = 0xBFF8.U
  val mtimecmp =0x4000.U

  def apply() =UInt(16.W)
}


class TIME extends paramete{
  val mtime =RegInit(0.U(xlen.W))//0xbff8
  val mtimecmp = RegInit(2000.U(xlen.W))//0x4000
  mtime := mtime +1.U(xlen.W)
  def read (addr:UInt): UInt = MuxCase(0.U(xlen.W),Seq(
    (addr === TIME_index.mtimecmp) -> mtimecmp,
    (addr === TIME_index.mtime) -> mtime,
  ))
  def write (addr:UInt,data:UInt) = {
    when(addr ===  TIME_index.mtimecmp) {mtimecmp := data(xlen-1,0)}
    .elsewhen(addr === TIME_index.mtime) {mtime := data(xlen-1,0)}
    .otherwise{}

  }

}


class MMIO extends Module{
    val io =IO(new Bundle() {
      val addr=Input(UInt(64.W))
      val we = Input(Bool())
      val ce = Input(Bool())
      val wdata = Input(UInt(64.W))
      val rdata = Output(UInt(64.W))
      val wmask = Input(UInt(8.W))

      val addr_m = Output(UInt(64.W))
      val we_m = Output(Bool())
      val ce_m = Output(Bool())
      val wdata_m = Output(UInt(64.W))
      val rdata_m = Input(UInt(64.W))
      val wmask_m = Output(UInt(8.W))

      val time = Output(UInt(64.W))
      val timecmp = Output(UInt(64.W))
      val time_int= Input(Bool())
    })
    val time =new TIME
    val flag = Wire(Bool())
    flag := (io.addr(63,48) === TIME_index.mtimecmp | io.addr(63,48) === TIME_index.mtime)
    when(flag & io.we===1.U) {
      time.write(io.addr(63,48),io.wdata)
    }

    io.addr_m := io.addr
    io.we_m := io.we
    io.ce_m := Mux(io.addr(63,48) === 0x8000.U,0.U,Mux(io.addr(63,48) === 0xBFF8.U,0.U,io.ce))
    io.wdata_m := io.wdata
    io.rdata := Mux(flag,time.read(io.addr(63,48)),io.rdata_m)
    io.wmask_m:=io.wmask

    io.time := time.read(TIME_index.mtime)
    io.timecmp := time.read(TIME_index.mtimecmp)
    when(io.time_int===1.U){
      time.write(TIME_index.mtimecmp,time.read(TIME_index.mtimecmp)+10000.U)

    }

}
