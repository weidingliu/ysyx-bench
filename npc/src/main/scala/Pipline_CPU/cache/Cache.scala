package Pipline_CPU.cache
import Pipline_CPU.{MEMCtrlIO, Paramete}
import chisel3._
import chisel3.util._

trait CacheParamete{
  val xlen = 64
  val Cache_line_size = xlen*8
  val Cache_way = 2
  val Cache_line_num = 4096/Cache_way/Cache_line_size
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
  val data = Output(Vec(Cache_way,UInt(Cache_line_size.W)))
}

class MetaBundle extends Bundle with CacheParamete{
  val tag = Output(Vec(Cache_way,UInt(Tag_size.W)))
  val valid = Output(Vec(Cache_way,Bool()))
  val dirt = Output(Vec(Cache_way,Bool()))
}
class Ctrl_Bundle extends Bundle with CacheParamete{
  val tag = Output(UInt(Tag_size.W))
  val index = Output(UInt(log2Ceil(Cache_line_num).W))
  val offset = Output(UInt(log2Ceil(Cache_line_size/8).W))
  val lru = Output(Bool())
}
class cache_data_bundle extends Bundle with CacheParamete{
  val meat = new MetaBundle
  val data = new DataBundle
  val ctrl_data = new Ctrl_Bundle
}

class Hit_data extends Bundle with CacheParamete{
//  val tag_way = Output(UInt(Tag_size.W))
//  val valid = Output(Bool())
  val dirt = Output( Bool())
  val ctrl_data = new Ctrl_Bundle

//  val data = Output(UInt(Cache_line_size.W))

}

class Scanf_data extends Module with CacheParamete{
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new cache_data_bundle))
    val out = Decoupled(new Bundle() {
      val hit = Output(Bool())
      val data = Output(UInt(Cache_line_size.W))
      val meta = new Hit_data
    })
  })
  val hit_way = Vec(Cache_way,UInt(1.W))
  val hit_wire = WireDefault(0.U)
  val data_wire = WireDefault(0.U)
  val dirt_wire = WireDefault(0.U)
  def scanf (tag : UInt, way_tag: UInt ,way_valid:Bool) = {
    val result = WireDefault(0.U)
    when(way_valid && (tag === way_tag)){
      result := 1.U
    }
    result
  }
  for (i <-0 until(Cache_way)){
    hit_way(i) := scanf(io.in.bits.ctrl_data.tag,io.in.bits.meat.tag(i),io.in.bits.meat.valid(i) & io.in.valid)
  }

  for(i<-0 until Cache_way){
    when(hit_way(i) === 1.U){
      hit_wire := 1.U
      data_wire := io.in.bits.data.data(i)
      dirt_wire := io.in.bits.meat.dirt(i)
    }
  }

  io.out.bits.hit := hit_wire
  io.out.bits.data := data_wire
  io.out.bits.meta.dirt := dirt_wire
  io.out.bits.meta.ctrl_data <> io.in.bits.ctrl_data

  io.out.valid := 1.U
  io.in.ready := 1.U

}


class Cache_Data extends Module with CacheParamete{
  val io = IO(new Bundle(){
    val in = new Bundle() {
      val valid = Input(Bool())
      val addr = Input(UInt(xlen.W))

    }
    val write_bus = new Bundle() {
      val valid = Input(Bool())
      val waymask = Input(UInt(Cache_way.W))
      val wdata = Input(UInt(Cache_line_size.W))

    }
    val out = Decoupled(new cache_data_bundle)
  })
  val tag = io.in.addr(xlen - 1, xlen - Tag_size)
  val index = io.in.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size))
  val offset = io.in.addr(log2Ceil(Cache_line_size)-1,0)

  //data array
  val data = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(Cache_line_size.W)))
  //meat data array
  val TAG = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(Tag_size.W)))
  val data_valid = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(1.W)))
  val dirt = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(1.W)))
//  val lru = Vec(Cache_way,SyncReadMem(Cache_line_num,UInt(1.W)))


  val data_w = WireDefault(0.U)
  val valid_w = WireDefault(0.U)
  val dirt_w  = WireDefault(0.U)

  val tag_w = WireDefault(0.U)
  when(io.in.valid){

    valid_w := data_valid.read(index)
    data_w := data.read(index)
    dirt_w := dirt.read(index)

    tag_w := TAG.read(index)
  }
  io.out.bits.ctrl_data.tag := tag
  io.out.bits.ctrl_data.index := index
  io.out.bits.ctrl_data.offset := offset

  io.out.bits.meat.valid := valid_w
  io.out.bits.data.data := data_w
  io.out.bits.meat.dirt := dirt_w
  io.out.bits.meat.tag := tag_w

  io.out.valid := Mux(io.in.valid,1.U,0.U)


//  def write_back(addr:UInt,wdata:UInt,waymask:Int)={
//    val tag = addr(xlen - 1, xlen - Tag_size)
//    val index = addr(xlen - Tag_size - 1, log2Ceil(Cache_line_size))
//    val offset = addr(log2Ceil(Cache_line_size)-1,0)
//
//    TAG.write(index,tag,waymask)
//    data.write(index,wdata,waymask)
//    dirt.write(index,1.U)
//  }
}

class Cache extends Module with Paramete with CacheParamete {
    val io = IO(new Bundle() {
      val in = Flipped(Decoupled(new MEMCtrlIO))
      val cache_valid = Output(Bool())
      val out = Decoupled(new MEMCtrlIO)
    })
  val Cache_data = Module(new Cache_Data)
  val Scanf = Module(new Scanf_data)

  val idle :: scanf :: miss :: wait_data :: Nil = Enum(4)
  val state = RegInit(idle)
  val hit = Scanf.io.out.bits.hit

  val lru_w  = WireDefault(0.U)
  val lru = SyncReadMem(Cache_line_num,UInt(1.W)) //2 way
  lru_w := lru.read(Cache_data.io.out.bits.ctrl_data.index)

//  switch(state){
//    is(idle) {
//      when(io.in.valid) {
//
//      }.otherwise {
//
//      }
//    }
//    is(scanf) {
//
//    }
//    is(miss) {
//
//    }
//  }
  io.in.ready := 1.U
  Cache_data.io.in.valid := Mux(io.in.valid && state === idle,1.U,0.U)
  Cache_data.io.in.addr := io.in.bits.addr

  Cache_data.io.out <> Scanf.io.in
  io.cache_valid := Mux(state === scanf && hit,1.B,0.B)

  switch(io.in.bits.addr(log2Ceil(Cache_line_size / xlen) + log2Ceil(xlen / 8) - 1, log2Ceil(xlen / 8))) {
    is("b000".U) {
      io.in.bits.rdata := Scanf.io.out.bits.data(xlen - 1, 0)
    }
    is("b001".U) {
      io.in.bits.rdata := Scanf.io.out.bits.data(2 * xlen - 1, xlen)
    }
    is("b010".U) {
      io.in.bits.rdata := Scanf.io.out.bits.data(3 * xlen - 1, 2 * xlen)
    }
    is("b011".U) {
      io.in.bits.rdata := Scanf.io.out.bits.data(4 * xlen - 1, 3 * xlen)
    }
    is("b100".U) {
      io.in.bits.rdata := Scanf.io.out.bits.data(5 * xlen - 1, 4 * xlen)
    }
    is("b101".U) {
      io.in.bits.rdata := Scanf.io.out.bits.data(6 * xlen - 1, 5 * xlen)
    }
    is("b110".U) {
      io.in.bits.rdata := Scanf.io.out.bits.data(7 * xlen - 1, 6 * xlen)
    }
    is("b111".U) {
      io.in.bits.rdata := Scanf.io.out.bits.data(8 * xlen - 1, 7 * xlen)
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
        when(hit === 1.U){
          state := idle
        }.otherwise{
          state := miss
        }
    }
    is(miss){

    }
  }



}

import chisel3.stage._
object app extends App{
  (new ChiselStage).emitVerilog(new Cache,Array("--target-dir", "build"))
}