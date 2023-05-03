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
  //data array
  val data = Vec(Cache_way,SyncReadMem(Cache_line_num,UInt(Cache_line_size.W)))
  //meat data array
  val TAG = Vec(Cache_way,SyncReadMem(Cache_line_num,UInt(Tag_size.W)))
  val data_valid = Vec(Cache_way,SyncReadMem(Cache_line_num,UInt(1.W)))
  val dirt = Vec(Cache_way,SyncReadMem(Cache_line_num,UInt(1.W)))
//  val lru = Vec(Cache_way,SyncReadMem(Cache_line_num,UInt(1.W)))
  val lru = SyncReadMem(Cache_line_num,UInt(1.W)) //2 way
  def scanf (addr : UInt) ={
    val tag = addr(xlen-1,xlen-Tag_size)
    val index = addr(xlen-Tag_size-1,log2Ceil(Cache_line_size))
//    val offset = addr(log2Ceil(Cache_line_size)-1,0)

    for (i <- 0 until Cache_way){
        when(TAG(i).read(index) === tag && data_valid(i).read(index) === 1.U){
          (1.B,data(i).read(index),dirt(i).read(index),lru.read(index))
        }
      }
    (0.B,0.U,0.U,0.U)
  }

  def allocation (addr : UInt)={
    val index = addr(xlen - Tag_size - 1, log2Ceil(Cache_line_size))
    lru.read(index)
  }
  def write_back(addr:UInt,wdata:UInt,way:Int)={
    val tag = addr(xlen - 1, xlen - Tag_size)
    val index = addr(xlen - Tag_size - 1, log2Ceil(Cache_line_size))
    val offset = addr(log2Ceil(Cache_line_size)-1,0)
    TAG(way).write(index,tag)
    data(way).write(index,wdata)
    dirt(way).write(index,1.U)
  }
}


class Cache extends Module with Paramete{
    val io = IO(new Bundle() {
      val in = Flipped(Decoupled(new MEMCtrlIO))
      val out = Decoupled(new MEMCtrlIO)
    })
  val idle :: scanf :: miss :: wait_data :: Nil = Enum(4)



}

import chisel3.stage._
object app extends App{
  (new ChiselStage).emitVerilog(new Cache,Array("--target-dir", "build"))
}