package Pipline_CPU.cache
import Pipline_CPU.{MEMCtrlIO, Paramete}
import chisel3._
import chisel3.util._

trait CacheParamete{
  val xlen = 64
  val Cache_line_size = xlen*8
  val Cache_way = 2
  val Cache_line_num = log2Ceil(4096/Cache_way/Cache_line_size)
  val Tag_size = xlen - log2Ceil(Cache_line_size/8) - log2Ceil(Cache_line_num)
}

class Cache_Data extends CacheParamete{
  val data = Vec(Cache_way,SyncReadMem(Cache_line_num,UInt(Cache_line_size.W)))
  val TAG = Vec(Cache_way,SyncReadMem(Cache_line_num,UInt(Tag_size.W)))
  def scanf (addr : UInt): ={
    val tag = addr(xlen-1,xlen-Tag_size)
    val index = addr(xlen-Tag_size-1,log2Ceil(Cache_line_size))
    val offset = addr(log2Ceil(Cache_line_size)-1,0)
    
    for (i <- 0 until Cache_way){

      }
  }
}


class Cache extends Module with Paramete{
    val io = IO(new Bundle() {
      val in = Flipped(Decoupled(new MEMCtrlIO))
      val out = Decoupled(new MEMCtrlIO)
    })
  val idle :: scanf :: hit :: miss :: wait_data :: Nil = Enum(5)



}

import chisel3.stage._
object app extends App{
  (new ChiselStage).emitVerilog(new Cache,Array("--target-dir", "build"))
}