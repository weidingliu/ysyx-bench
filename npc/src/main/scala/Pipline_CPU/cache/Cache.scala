package Pipline_CPU.cache
import Pipline_CPU.{MEMCtrlIO, Paramete}
import chisel3._
import chisel3.util._
import Pipline_CPU._
import Pipline_CPU.utils.{MaskData, MaskGen}

trait CacheParamete extends Paramete {
//  val xlen = 64
  val Cache_line_size = xlen*8
  val Cache_line_wordnum = Cache_line_size/xlen
  val Cache_way = 2
  val Cache_line_num = 4096/Cache_way/Cache_line_size *8
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
  def apply(way:UInt): UInt ={
    data(way)
  }
}

class MetaBundle extends Bundle with CacheParamete{
  val tag = Output(Vec(Cache_way,UInt(Tag_size.W)))
  val valid = Output(Vec(Cache_way,Bool()))
//  val dirt = Output(Vec(Cache_way,Bool()))
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
//  val dirt = Output( Bool())
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
      val hit_way = Output(Vec(Cache_way,UInt(1.W)))
    })
  })
//  val metaway = VecInit(new MetaBundle)
  val hit_way = Wire(Vec(Cache_way,UInt(1.W)))
  val hit_wire = WireDefault(0.U)
  val data_wire = WireDefault(0.U)
//  val dirt_wire = WireDefault(0.U)
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
//      dirt_wire := io.in.bits.meat.dirt(i)
    }
  }

  io.out.bits.hit := hit_wire
  io.out.bits.data := data_wire
//  io.out.bits.meta.dirt := dirt_wire
  io.out.bits.meta.ctrl_data <> io.in.bits.ctrl_data

  io.out.valid := 1.U
  io.in.ready := 1.U

  io.out.bits.hit_way := hit_way

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


  val valid_w = data_valid.read(index)
  val data_w = data.read(index)
  val tag_w = TAG.read(index)

  io.out.bits.ctrl_data.tag := tag
  io.out.bits.ctrl_data.index := index
  io.out.bits.ctrl_data.offset := offset

  io.out.bits.meat.valid := valid_w
  io.out.bits.data.data := data_w
//  io.out.bits.meat.dirt := dirt_w
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

class Cache (Type : String) extends Module with CacheParamete {
    val io = IO(new Bundle() {
//      val in = Flipped(Decoupled(new MEMCtrlIO))
      val in = new Cache_MemReq_Bundle(Type)
      val flush = Input(Bool())
      val out = Decoupled(new MEMCtrlIO)
      val mem_rdata = Input(UInt(xlen.W))
    })
  val Cache_data = Module(new Cache_Data)
  val Scanf = Module(new Scanf_data)

  val idle :: scanf :: miss :: write_data :: Nil = Enum(4)
  val state = RegInit(idle)
  val hit = Scanf.io.out.bits.hit
  val data_line_reg = RegInit(0.U(Cache_line_size.W))
  val mem_addr_reg = RegInit(0.U(xlen.W))

  val lru_r  = RegInit(0.U)
  val lru_w = WireDefault(0.U)

  val hit_data = WireDefault(0.U(xlen.W))
  val mem_data = WireDefault(0.U(xlen.W))
  val lru = SyncReadMem(Cache_line_num,UInt(1.W)) //2 way


  val count = RegInit(0.U((log2Ceil(Cache_line_wordnum)+1).W))
  val s = count === Cache_line_wordnum.U


  val dirt_r = if(Type == "Dcache") Some(Reg(Vec(Cache_way, UInt(1.W)))) else None
  val dirt = if(Type == "Dcache") Some(SyncReadMem(Cache_line_num, Vec(Cache_way, UInt(1.W)))) else None
  val count_write = if(Type == "Dcache") Some(RegInit(0.U((log2Ceil(Cache_line_wordnum) + 1).W))) else None
  val s_w = if(Type == "Dcache") Some(count === Cache_line_wordnum.U) else None
  val dirt_w = if(Type == "Dcache") Some(dirt.get.read(Cache_data.io.out.bits.ctrl_data.index)) else None
  val mem_write_addr_reg = if(Type == "Dcache") Some(RegInit(0.U(xlen.W))) else None
  val mem_write_data_reg = if(Type == "Dcache") Some(RegInit(0.U(Cache_line_size.W))) else None
  val hit__write_data = if(Type == "Dcache") Some(RegInit(0.U(Cache_line_size.W))) else None
  val hit_way_r = if(Type == "Dcache") Some(Reg(Vec(Cache_way,UInt(1.W)))) else None

//  val (count,s) = Counter(state === miss,Cache_line_wordnum)
  val hit_way = Wire(Vec(Cache_way,UInt(1.W)))

  lru_w := lru.read(Cache_data.io.out.bits.ctrl_data.index)

  switch(state){
    is(idle) {
      count := 0.U
    }
    is(scanf) {
        when(hit === 0.U){
          mem_addr_reg := Cat(io.in.addr_req.bits.addr(xlen-1,log2Ceil(Cache_line_size/8)),Fill(log2Ceil(Cache_line_size/8),0.U))
        }.otherwise{
          when(hit_way(0) === 1.U){
            lru.write(Cache_data.io.out.bits.ctrl_data.index,1.U)
          }
          when(hit_way(1) === 1.U){
            lru.write(Cache_data.io.out.bits.ctrl_data.index,0.U)
          }
          lru_r := lru_w
          if(Type == "Dcache"){
            dirt_r.get := dirt_w.get
            count_write.get := 0.U
            mem_write_addr_reg.get := Cat(io.in.addr_req.bits.addr(xlen-1,log2Ceil(Cache_line_size/8)),Fill(log2Ceil(Cache_line_size/8),0.U))
            mem_write_data_reg.get := Cache_data.io.out.bits.data(lru_w)
            when(hit_way(0) === 1.U) {
              hit__write_data.get := Cache_data.io.out.bits.data(0.U)
            }
            when(hit_way(1) === 1.U) {
              hit__write_data.get := Cache_data.io.out.bits.data(1.U)
            }
            hit_way_r.get := hit_way

          }

        }
    }
    is(miss) {
      when(!io.in.rdata_rep.ready && s === true.B){
        count := count
      }.otherwise{
        count := count +1.U
      }

//      when(count === (Cache_line_wordnum-1).U) {
//        lru_w := lru.read(Cache_data.io.out.bits.ctrl_data.index)
//      }
      when(s =/= true.B && io.out.ready){
        mem_addr_reg := mem_addr_reg + 8.U

        data_line_reg := Cat(io.mem_rdata,data_line_reg(Cache_line_size-1,xlen))
      }
      when(io.in.rdata_rep.ready && s === true.B ){
        when(lru_r === 1.U) {
          lru.write(Cache_data.io.out.bits.ctrl_data.index, 0.U)
        }.otherwise {
          lru.write(Cache_data.io.out.bits.ctrl_data.index, 1.U)
        }
        count:=0.U
      }
    }

    is(write_data) {
      /////////// need write reapone
      if(Type == "Dcache"){
        count_write.get := count_write.get + 1.U
        mem_write_addr_reg.get := mem_write_addr_reg.get + 8.U
        mem_write_data_reg.get := Cat(Fill(xlen,0.U),mem_write_data_reg.get(Cache_line_size-1,xlen))
        when(s_w.get === true.B){
          count_write.get := 0.U
        }
      }

    }

  }

  switch(io.in.addr_req.bits.addr(log2Ceil(Cache_line_size / xlen) + log2Ceil(xlen / 8) - 1, log2Ceil(xlen / 8))) {
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
      when(io.in.addr_req.valid){
        state := scanf
      }.otherwise{
        state := idle
      }
    }
    is(scanf){
        when(hit === 1.U){
          state := idle
        }.otherwise{
          if(Type == "Dcache"){
            when(dirt_w.get(lru_w) === 1.U){
              state := write_data
            }.otherwise{
              state := miss
            }
          }
          else{
            state := miss
          }

        }
    }
    is(miss){
        when(s === true.B && io.in.rdata_rep.ready){
          state := idle
        }
    }

    is(write_data) {
      if(Type == "Dcache") {
        when(s_w.get === true.B) {
          state := miss
        }
      }
    }
  }
  when (io.flush){
    state := idle
  }
  Scanf.io.out.ready := 1.U

  io.in.rdata_rep.bits.rdata := Mux((state === scanf && hit),hit_data,mem_data)
//  io.in.ready := 1.U
  io.in.addr_req.ready := true.B

  //read data from cache
  Cache_data.io.in.valid := Mux(io.in.addr_req.valid && state === idle, 1.U, 0.U)
  Cache_data.io.in.addr := io.in.addr_req.bits.addr
  Scanf.io.in.valid := RegNext(Cache_data.io.out.valid)
  Scanf.io.in.bits.meat := (Cache_data.io.out.bits.meat)
  Scanf.io.in.bits.data := (Cache_data.io.out.bits.data)
  Scanf.io.in.bits.ctrl_data := (Cache_data.io.out.bits.ctrl_data)
  Cache_data.io.out.ready := Scanf.io.in.ready
  hit_way := Scanf.io.out.bits.hit_way

  //read data from mem
  if(Type == "Dcache"){
    io.out.valid := Mux(state === miss || state === write_data, true.B, false.B)
    io.out.bits.ce := Mux(state === miss || state === write_data, 1.U, 0.U)
    io.out.bits.addr := Mux(state === write_data,mem_write_addr_reg.get,mem_addr_reg)
    io.out.bits.we := Mux(state === write_data,1.U,0.U)
    io.out.bits.wdata := mem_write_data_reg.get(xlen-1,0)
    io.out.bits.wmask := "hff".U(masklen.W)
  }
  else{
    io.out.valid := Mux(state === miss, true.B, false.B)
    io.out.bits.ce := Mux(state === miss, 1.U, 0.U)
    io.out.bits.addr := mem_addr_reg
    io.out.bits.we := 0.U
    io.out.bits.wdata := 0.U
    io.out.bits.wmask := 0.U
  }

  //write back cache data
  io.in.rdata_rep.valid := Mux(((state === scanf && hit)||(state === miss && s === true.B)) && (!io.flush) && (!io.in.addr_req.bits.we), 1.B, 0.B)
  if(Type == "Dcache"){
    val wmaskextend = MaskGen(Cache_data.io.out.bits.ctrl_data.offset(log2Ceil(Cache_line_size/8)-1,log2Ceil(xlen/8)),io.in.wdata_req.get.bits.wmask & io.in.addr_req.bits.we)
    val wdata_extend = Fill(Cache_line_size/xlen,io.in.wdata_req.get.bits.wdata)
    val wdata = Mux(state === miss && s === true.B,MaskData(data_line_reg,wmaskextend,wdata_extend),MaskData(hit__write_data.get,wmaskextend,wdata_extend))

    Cache_data.io.write_bus.valid := Mux((s || (state === scanf && io.in.addr_req.bits.we && hit)) && (!io.flush), true.B, false.B)
    Cache_data.io.write_bus.addr := Mux((state === miss && s === true.B) || (state === scanf && io.in.addr_req.bits.we && hit), io.in.addr_req.bits.addr, 0.U)
    Cache_data.io.write_bus.wdata := wdata

    io.in.wdata_req.get.ready := true.B
    io.in.wdata_rep.get := Mux((state === scanf && io.in.addr_req.bits.we && hit) || (state === miss && s === true.B),true.B,false.B)
//    val hitway_mask = WireDefault(Vec(Cache_way,0.U))
//    for (i<-0 until Cache_way){
//      when(hit_way_r.get(i) === 1.U){
//        hitway_mask(i) := 1.U
//      }
//    }
    val waymask = Mux(state === scanf && hit && io.in.addr_req.bits.we,hit_way_r.get.asUInt,Mux(lru_r === 1.U, "b10".U(2.W), "b01".U(2.W)))
    Cache_data.io.write_bus.waymask := waymask
  }
  else {
    Cache_data.io.write_bus.valid := Mux(s, true.B, false.B)
    Cache_data.io.write_bus.addr := Mux(state === miss && s === true.B, io.in.addr_req.bits.addr, 0.U)
    Cache_data.io.write_bus.wdata := Mux(state === miss && s === true.B, data_line_reg, 0.U)
    val waymask = Mux(lru_r === 1.U, "b10".U(2.W), "b01".U(2.W))
    Cache_data.io.write_bus.waymask := waymask
  }

  io.out.bits.rdata := 0.U//bug
//  io.in.bits.rdata := 0.U


}
//class test_mem extends Module{
//  val io = IO(new Bundle() {
//    val addr = Input(UInt(4.W))
//    val rdata = Output(UInt(8.W))
//    val wdata = Input(UInt(8.W))
//    val en = Input(Bool())
//  })
//  val mem =SyncReadMem(16,UInt(8.W))
//  io.rdata := mem.read(io.addr)
//  when(io.en){
//    mem.write(io.addr,io.wdata)
//  }
//}
//
//
import chisel3.stage._
object app extends App{
  (new ChiselStage).emitVerilog(new Cache("Dcache"),Array("--target-dir", "build"))
}