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

//class Cache_Bundle
//class Cache_Scanf extends Module with CacheParamete{
//  val io = IO(new Bundle() {
//    val in = new Bundle() {
//      val cache_valid = Input(Bool())
//      val
//    }
//  })
//}

class DataBundle extends Bundle with CacheParamete{
  val data = Output(UInt(Cache_line_size.W))
}

class MetaBundle extends Bundle with CacheParamete{
  val tag = Output(UInt(Tag_size.W))
  val valid = Output(Bool())
  val dirt = Output(Bool())
  val lru = Output(Bool())
}


class Cache_Data extends Module with CacheParamete{
  val io = IO(new Bundle(){
    val in = new Bundle() {
      val valid = Input(Bool())
      val addr = Input(UInt(xlen.W))
    }
    val out = Decoupled(new Bundle() {
      val meat=new MetaBundle
      val data = new DataBundle
    })

  })

  //data array
  val data = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(Cache_line_size.W)))
  //meat data array
  val TAG = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(Tag_size.W)))
  val data_valid = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(1.W)))
  val dirt = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(1.W)))
//  val lru = Vec(Cache_way,SyncReadMem(Cache_line_num,UInt(1.W)))
  val lru = SyncReadMem(Cache_line_num,UInt(1.W)) //2 way

  when(io.in.valid){
    val index = io.in.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size))
    io.out.bits.meat.valid := data_valid.read(index)
    io.out.bits.data.data := data.read(index)
    io.out.bits.meat.dirt := dirt.read(index)
    io.out.bits.meat.lru := lru.read(index)
    io.out.bits.meat.tag := TAG.read(index)
  }.otherwise{
    io.out.bits.meat.valid :=
      io.out.bits.data.data :=
      io.out.bits.meat.dirt :=
      io.out.bits.meat.lru :=
      io.out.bits.meat.tag :=
  }



  def allocation (addr : UInt)={
    val index = addr(xlen - Tag_size - 1, log2Ceil(Cache_line_size))
    lru.read(index)
  }
  def write_back(addr:UInt,wdata:UInt,waymask:Int)={
    val tag = addr(xlen - 1, xlen - Tag_size)
    val index = addr(xlen - Tag_size - 1, log2Ceil(Cache_line_size))
    val offset = addr(log2Ceil(Cache_line_size)-1,0)

    TAG.write(index,tag,waymask)
    data.write(index,wdata,waymask)
    dirt.write(index,1.U)
  }
}

class Cache extends Module with Paramete with CacheParamete {
    val io = IO(new Bundle() {
      val in = Flipped(Decoupled(new MEMCtrlIO))
      val out = Decoupled(new MEMCtrlIO)
    })
  val cache_data = new Cache_Data
  val idle :: scanf :: miss :: wait_data :: Nil = Enum(4)
  val state = RegInit(idle)

  val cache_line_w = WireDefault(0.U)
  val dirt_w = WireDefault(0.U)
  val lru_w = WireDefault(0.U)
  val data_valid = WireDefault(0.U)
  val tag_w = WireDefault(0.U)

  val cache_line_reg = Reg(Vec(Cache_way,UInt(Cache_line_size.W)))
  val dirt_reg = Reg(Vec(Cache_way,UInt(1.W)))
  val lru_reg = Reg(UInt(1.W))
  val tag_reg = Reg(Vec(Cache_way,UInt(Tag_size.W)))

  switch(state){
    is(idle) {
      when(io.in.valid) {
        val (valid, data, dirt, lru,tag) = cache_data.scanf(io.in.bits.addr)
        cache_line_w := data
        dirt_w := dirt
        lru_w := lru
        data_valid := valid
        tag_w := tag
      }.otherwise {

      }
    }
    is(scanf) {

    }
    is(miss) {

    }
  }


  switch(state){
    is(idle){
      when(io.in.valid){
        state := scanf
      }.otherwise{
        state := idle
      }
    }
    is(scanf){
        when(hit_ === )
    }
    is(miss){

    }
  }



}

import chisel3.stage._
object app extends App{
  (new ChiselStage).emitVerilog(new Cache,Array("--target-dir", "build"))
}