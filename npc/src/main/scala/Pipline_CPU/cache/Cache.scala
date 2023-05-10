package Pipline_CPU.cache
import Pipline_CPU.{MEMCtrlIO, Paramete}
import chisel3._
import chisel3.util._
import Pipline_CPU._

trait CacheParamete extends Paramete {
//  val xlen = 64
  val Cache_line_size = xlen*8
  val Cache_line_wordnum = Cache_line_size/xlen
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

class ICache_req extends Bundle with Paramete{
  val addr_req = Flipped(Decoupled(new ADDRBus))
  val rdata_rep = Decoupled(new ReadDataBus)
}

class Cache_MemReq_Bundle (Type : String)extends Bundle with Paramete{
  val addr_req = Flipped(Decoupled(new ADDRBus))
  val rdata_rep = Flipped(Decoupled(new ReadDataBus))
  val wdata_req = if(Type == "Dcache") Some(Decoupled(new WriteDataBus)) else None
}

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
//  val metaway = VecInit(new MetaBundle)
  val hit_way = Wire(Vec(Cache_way,UInt(1.W)))
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

//  val hit_ = VecInit(io.in.bits.meat.tag.map(m => ))

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
      val addr = Input(UInt(xlen.W))
      val valid = Input(Bool())
      val waymask = Input(UInt(Cache_way.W))
      val wdata = Input(UInt(Cache_line_size.W))

    }
    val out = Decoupled(new cache_data_bundle)
  })
  val tag = io.in.addr(xlen - 1, xlen - Tag_size)
  val index = io.in.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size/8))
  val offset = io.in.addr(log2Ceil(Cache_line_size/8)-1,0)

  //data array
  val data = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(Cache_line_size.W)))
  //meat data array
  val TAG = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(Tag_size.W)))
  val data_valid = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(1.W)))
  val dirt = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(1.W)))
//  val lru = Vec(Cache_way,SyncReadMem(Cache_line_num,UInt(1.W)))


//  val data_w = Vec(Cache_way,UInt(Cache_line_size.W))
//  val valid_w = Vec(Cache_way,Bool())
//  val dirt_w  = Vec(Cache_way,Bool())
//
//  val tag_w = Vec(Cache_way,UInt(Tag_size.W))

  val valid_w = data_valid.read(index)
  val data_w = data.read(index)
  val dirt_w = dirt.read(index)
  val tag_w = TAG.read(index)

  io.out.bits.ctrl_data.tag := tag
  io.out.bits.ctrl_data.index := index
  io.out.bits.ctrl_data.offset := offset

  io.out.bits.meat.valid := valid_w
  io.out.bits.data.data := data_w
  io.out.bits.meat.dirt := dirt_w
  io.out.bits.meat.tag := tag_w

  io.out.valid := Mux(io.in.valid,1.U,0.U)
  val wdata = VecInit(Seq.fill(Cache_way)(io.write_bus.wdata))
  val wtag = VecInit(Seq.fill(Cache_way)(io.write_bus.addr(xlen - 1, xlen - Tag_size)))
  val valid = VecInit(Seq.fill(Cache_way)(1.U))
//  val waymask = .getOrElse("b1".U)
  when(io.write_bus.valid){
    data.write(io.write_bus.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size/8)),wdata,io.write_bus.waymask.asBools)
    TAG.write(io.write_bus.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size/8)),wtag,io.write_bus.waymask.asBools)
    data_valid.write(io.write_bus.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size/8)),valid,io.write_bus.waymask.asBools)
  }

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

class Cache extends Module with CacheParamete {
    val io = IO(new Bundle() {
      val in = Flipped(Decoupled(new MEMCtrlIO))
      val rdata = Output(UInt(xlen.W))
      val cache_valid = Output(Bool())
      val out = Decoupled(new MEMCtrlIO)
      val mem_rdata = Input(UInt(xlen.W))
    })
  val Cache_data = Module(new Cache_Data)
  val Scanf = Module(new Scanf_data)

  val idle :: scanf :: miss :: wait_data :: Nil = Enum(4)
  val state = RegInit(idle)
  val hit = Scanf.io.out.bits.hit
  val data_line_reg = RegInit(0.U(Cache_line_size.W))
  val mem_addr_reg = RegInit(0.U(xlen.W))

  val lru_w  = WireDefault(0.U)
  val hit_data = WireDefault(0.U(xlen.W))
  val mem_data = WireDefault(0.U(xlen.W))
  val lru = SyncReadMem(Cache_line_num,UInt(1.W)) //2 way
  val (count,s) = Counter(state === miss,Cache_line_wordnum)


  switch(state){
    is(idle) {

    }
    is(scanf) {
        when(hit === 0.U){
          mem_addr_reg := io.in.bits.addr
        }
    }
    is(miss) {
      when(count === (Cache_line_wordnum-1).U) {
        lru_w := lru.read(Cache_data.io.out.bits.ctrl_data.index)
      }
      when(s =/= true.B && io.out.ready){
        mem_addr_reg := mem_addr_reg + 8.U

        data_line_reg := Cat(data_line_reg(Cache_line_size-1,xlen),io.mem_rdata)
      }
      when(s === true.B){

        lru.write(Cache_data.io.out.bits.ctrl_data.index,!lru_w)

      }
    }
  }

  switch(io.in.bits.addr(log2Ceil(Cache_line_size / xlen) + log2Ceil(xlen / 8) - 1, log2Ceil(xlen / 8))) {
    is("b000".U) {
      hit_data := Scanf.io.out.bits.data(xlen - 1, 0)
      mem_data := data_line_reg(xlen - 1, 0)
    }
    is("b001".U) {
      hit_data := Scanf.io.out.bits.data(2 * xlen - 1, xlen)
      mem_data := data_line_reg(2 * xlen - 1, xlen)
    }
    is("b010".U) {
      hit_data := Scanf.io.out.bits.data(3 * xlen - 1, 2 * xlen)
      mem_data := data_line_reg(3 * xlen - 1, 2 * xlen)
    }
    is("b011".U) {
      hit_data := Scanf.io.out.bits.data(4 * xlen - 1, 3 * xlen)
      mem_data := data_line_reg(4 * xlen - 1, 3 * xlen)
    }
    is("b100".U) {
      hit_data := Scanf.io.out.bits.data(5 * xlen - 1, 4 * xlen)
      mem_data := data_line_reg(5 * xlen - 1, 4 * xlen)
    }
    is("b101".U) {
      hit_data := Scanf.io.out.bits.data(6 * xlen - 1, 5 * xlen)
      mem_data := data_line_reg(6 * xlen - 1, 5 * xlen)
    }
    is("b110".U) {
      hit_data := Scanf.io.out.bits.data(7 * xlen - 1, 6 * xlen)
      mem_data := data_line_reg(7 * xlen - 1, 6 * xlen)
    }
    is("b111".U) {
      hit_data := Scanf.io.out.bits.data(8 * xlen - 1, 7 * xlen)
      mem_data := data_line_reg(8 * xlen - 1, 7 * xlen)
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
        when(s === true.B && io.out.ready){
          state := idle
        }
    }
  }
  Scanf.io.out.ready := 1.U

  io.rdata := Mux((state === scanf && hit),hit_data,mem_data)
  io.in.ready := 1.U
  //read data from cache
  Cache_data.io.in.valid := Mux(io.in.valid && state === idle, 1.U, 0.U)
  Cache_data.io.in.addr := io.in.bits.addr
  Cache_data.io.out <> Scanf.io.in
  //read data from mem
  io.out.valid := Mux(state === miss,true.B,false.B)
  io.out.bits.ce := Mux(state === miss,1.U,0.U)
  io.out.bits.addr := mem_addr_reg
  io.out.bits.we := 0.U
  //write back cache data
  Cache_data.io.write_bus.valid := Mux(s,true.B,false.B)
  io.cache_valid := Mux((state === scanf && hit)||(state === miss && s === true.B), 1.B, 0.B)
  Cache_data.io.write_bus.addr := Mux(state === miss && s === true.B,io.in.bits.addr,0.U)
  Cache_data.io.write_bus.wdata := Mux(state === miss && s === true.B,data_line_reg,0.U)

  val waymask = Mux(lru_w === 1.U,0.U(2.W),2.U(2.W))
  Cache_data.io.write_bus.waymask := waymask

  io.out.bits.wdata := 0.U
  io.out.bits.wmask := 0.U
  io.out.bits.rdata := 0.U//bug
//  io.in.bits.rdata := 0.U


}

import chisel3.stage._
object app extends App{
  (new ChiselStage).emitVerilog(new Cache,Array("--target-dir", "build"))
}