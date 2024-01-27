package Pipline_CPU.cache
import Pipline_CPU.{MEMCtrlIO, Paramete}
import chisel3._
import chisel3.util._
import Pipline_CPU._
import Pipline_CPU.utils.{MaskData, MaskGen}

trait CacheParamete extends Paramete {
//  val xlen = 64
  val Cache_line_size = xlen*4
  val Cache_line_wordnum = Cache_line_size/xlen
  val Cache_way = 2
  val Cache_line_num = 4096/Cache_way/Cache_line_size *8
  val Tag_size = xlen - log2Ceil(Cache_line_size/8) - log2Ceil(Cache_line_num)

}

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
      val tag = Output(Vec(Cache_way,UInt(Tag_size.W)))
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
  io.out.bits.tag := io.in.bits.meat.tag

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
      val fenceValid = Input(Bool())
    }
    val sram0 = new SRAMBundle
    val sram1 = new SRAMBundle
    val sram2 = new SRAMBundle
    val sram3 = new SRAMBundle

    val out = Decoupled(new cache_data_bundle)
  })
  val tag = io.in.addr(xlen - 1, xlen - Tag_size)
  val index = io.in.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size/8))
  val offset = io.in.addr(log2Ceil(Cache_line_size/8)-1,0)

  //data array
//  val data = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(Cache_line_size.W)))
  //meat data array
  val TAG = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(Tag_size.W)))
  val data_valid = SyncReadMem(Cache_line_num,Vec(Cache_way,UInt(1.W)))

  val valid_w = data_valid.read(index)
//  val data_w = data.read(index)
  val tag_w = TAG.read(index)

  io.out.bits.ctrl_data.tag := tag
  io.out.bits.ctrl_data.index := index
  io.out.bits.ctrl_data.offset := offset
//  io.out.bits.ctrl_data.offset := DontCare

  io.out.bits.meat.valid := valid_w
//  io.out.bits.data.data := data_w
  io.out.bits.data.data(0) := Cat(io.sram1.rdata,io.sram0.rdata)
  io.out.bits.data.data(1) := Cat(io.sram3.rdata,io.sram2.rdata)

  io.out.bits.meat.tag := tag_w

  io.out.valid := Mux(io.in.valid,1.U,0.U)
//  val wdata = VecInit(Seq.fill(Cache_way)(io.write_bus.wdata))
  val wtag = VecInit(Seq.fill(Cache_way)(io.write_bus.addr(xlen - 1, xlen - Tag_size)))
  val valid = VecInit(Seq.fill(Cache_way)(1.U))
  val invalid = VecInit(Seq.fill(Cache_way)(0.U))
  val writeCachevalid = Mux(io.write_bus.valid && io.write_bus.fenceValid, invalid,valid)
//  val waymask = .getOrElse("b1".U)
  when(io.write_bus.valid){
//    data.write(io.write_bus.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size/8)),wdata,io.write_bus.waymask.asBools)
    TAG.write(io.write_bus.addr(xlen - Tag_size - 1, log2Ceil(Cache_line_size / 8)), wtag, io.write_bus.waymask.asBools)
    data_valid.write(io.write_bus.addr(xlen - Tag_size - 1, log2Ceil(Cache_line_size / 8)), writeCachevalid, io.write_bus.waymask.asBools)
  }
  io.sram0.addr := index
  io.sram1.addr := index
  io.sram2.addr := index
  io.sram3.addr := index

  io.sram0.wen := Mux(io.write_bus.valid & io.write_bus.waymask(0),0.B,1.B)
  io.sram1.wen := Mux(io.write_bus.valid & io.write_bus.waymask(0),0.B,1.B)
  io.sram2.wen := Mux(io.write_bus.valid & io.write_bus.waymask(1),0.B,1.B)
  io.sram3.wen := Mux(io.write_bus.valid & io.write_bus.waymask(1),0.B,1.B)

  io.sram0.wdata := io.write_bus.wdata(127,0)
  io.sram1.wdata := io.write_bus.wdata(255,128)
  io.sram2.wdata := io.write_bus.wdata(127,0)
  io.sram3.wdata := io.write_bus.wdata(255,128)

//  io.sram0.addr := io.write_bus.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size/8))
//  io.sram1.addr := io.write_bus.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size/8))
//  io.sram2.addr := io.write_bus.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size/8))
//  io.sram3.addr := io.write_bus.addr(xlen-Tag_size-1,log2Ceil(Cache_line_size/8))

  io.sram0.cen := 0.U
  io.sram1.cen := 0.U
  io.sram2.cen := 0.U
  io.sram3.cen := 0.U

  io.sram0.wmask := Mux(io.write_bus.valid & io.write_bus.waymask(0),Fill(128,false.B),Fill(128,true.B))
  io.sram1.wmask := Mux(io.write_bus.valid & io.write_bus.waymask(0),Fill(128,false.B),Fill(128,true.B))
  io.sram2.wmask := Mux(io.write_bus.valid & io.write_bus.waymask(1),Fill(128,false.B),Fill(128,true.B))
  io.sram3.wmask := Mux(io.write_bus.valid & io.write_bus.waymask(1),Fill(128,false.B),Fill(128,true.B))
}


class Cache_Axi (Type : String) extends Module with CacheParamete{
  val io = IO(new Bundle() {
    val in = new Cache_MemReq_Bundle(Type)
    val flush = Input(Bool())
    val cache_busy = Output(Bool())

    val fenceIO = Flipped(new fenceCacheIO)

    val sram0 = new SRAMBundle
    val sram1 = new SRAMBundle
    val sram2 = new SRAMBundle
    val sram3 = new SRAMBundle

    val out = new Axi_full_Bundle_out
  })
  val Cache_data = Module(new Cache_Data)
  val Scanf = Module(new Scanf_data)

  val idle :: scanf :: miss :: write_data :: wait_axi_end :: fenceIdle :: fenceLine :: fenceWayEnd :: Nil = Enum(8)
  val read_idle :: read_transfer_addr :: wait_data_transfer :: refill :: Nil = Enum(4)
  val write_idle :: write_transfer_addr :: write_transfer_data :: write_wait_respone :: Nil = Enum(4)

  val state = RegInit(idle)
  val read_state = RegInit(read_idle)
  val write_state = RegInit(write_idle)

  val hit = Scanf.io.out.bits.hit
  val data_line_reg = RegInit(0.U(Cache_line_size.W))
  val mem_addr_reg = RegInit(0.U(xlen.W))

  val lru_r = RegInit(0.U)
  val lru_w = WireDefault(0.U)

  val hit_data = WireDefault(0.U(xlen.W))
  val mem_data = WireDefault(0.U(xlen.W))
  val lru = SyncReadMem(Cache_line_num, UInt(1.W)) //2 way

//  val count = RegInit(0.U((log2Ceil(Cache_line_wordnum) + 1).W))
//  val s = count === Cache_line_wordnum.U

  val dirt_r = if (Type == "Dcache") Some(Reg(Vec(Cache_way, UInt(1.W)))) else None
  val dirt = if (Type == "Dcache") Some(SyncReadMem(Cache_line_num, Vec(Cache_way, UInt(1.W)))) else None
  val count_write = if (Type == "Dcache") Some(RegInit(0.U((log2Ceil(Cache_line_wordnum) + 1).W))) else None
  val s_w = if (Type == "Dcache") Some(count_write.get === (Cache_line_wordnum-1).U) else None
  val dirt_w = if (Type == "Dcache") Some(dirt.get.read(Cache_data.io.out.bits.ctrl_data.index)) else None
  val mem_write_addr_reg = if (Type == "Dcache") Some(RegInit(0.U(xlen.W))) else None
  val mem_write_data_reg = if (Type == "Dcache") Some(RegInit(0.U(Cache_line_size.W))) else None
  //  val hit__write_data = if(Type == "Dcache") Some(WireDefault(0.U(Cache_line_size.W))) else None
  val hit_way_r = if (Type == "Dcache") Some(Reg(Vec(Cache_way, UInt(1.W)))) else None
  val tag_way = Scanf.io.out.bits.tag

  //  val (count,s) = Counter(state === miss,Cache_line_wordnum)
  val hit_way = Wire(Vec(Cache_way, UInt(1.W)))

  // fence.i
  val fenceReqReg = RegInit(false.B)
  val fenceResp = RegInit(false.B)
  val baseAddr = RegInit(0.U(xlen.W)) // fence base addr (index,b00000)
  val fenceNum = RegEnable(((Cache_line_num.U(xlen.W)) << 1).asUInt,(state === idle && fenceReqReg)) // fence num
  val waycount = RegInit(0.U(log2Ceil(Cache_way).W))
  val waymask = UIntToOH(waycount)

  when(io.fenceIO.fenceReq){
    fenceReqReg := true.B
  }
  when(io.fenceIO.fenceResp){
    fenceReqReg := false.B
  }
  when(fenceReqReg && state === idle){
    fenceResp := true.B
  }
  when(io.fenceIO.fenceResp) {
    fenceResp := false.B
  }


  when(state === fenceLine){
    if(Type == "Dcache"){
      when((dirt_w.get.asUInt & waymask).orR) { // if dirt

      }.otherwise {

      }
    }
    else {

    }

  }

  io.fenceIO.fenceResp := (state === fenceWayEnd) && (fenceNum === 0.U)


  lru_w := lru.read(Cache_data.io.out.bits.ctrl_data.index)

  switch(state) {
    is(idle) {
      when(fenceReqReg){
        state := fenceIdle
      }
      .elsewhen(io.in.addr_req.valid) {
        state := scanf
      }.otherwise {
        state := idle
      }
    }
    is(scanf) {
      when(hit === 1.U) {
        state := idle
      }.otherwise {
        if (Type == "Dcache") {
          when(dirt_w.get(lru_w) === 1.U) {
            state := write_data
          }.otherwise {
            state := miss
          }
        }
        else {
          state := miss
        }

      }
    }
    is(miss) {
      when(io.in.rdata_rep.ready && read_state === refill || io.flush) {
        state := idle
      }
    }

    is(write_data) {
      if (Type == "Dcache") {
        when(fenceReqReg && io.out.wb.valid && io.out.wb.bits.breap === "b00".U){
          state := fenceWayEnd
        }
        .elsewhen(io.out.wb.valid && io.out.wb.bits.breap === "b00".U) {
          state := miss
        }
      }
    }
    is(wait_axi_end){
      when((io.in.rdata_rep.ready && read_state === refill) || (io.out.wb.valid && io.out.wb.bits.breap === "b00".U)) {
        state := idle
      }
    }
    is(fenceIdle){
      state := fenceLine
    }
    is(fenceLine){
      if (Type == "Dcache") {
        when((dirt_w.get.asUInt & waymask).orR) { // if dirt
          state := write_data
        }.otherwise {
          state := fenceWayEnd
        }
      }
      else {
          state := fenceWayEnd
      }
    }
    is(fenceWayEnd){
      when(fenceNum === 0.U){
        state := idle
      }.otherwise{
        state := fenceIdle
      }
    }
  }
  when(io.flush ) {
    when((state === miss || state === write_data)){
      state := wait_axi_end
    }otherwise{
      state := idle
    }
  }

  switch(read_state){
    is(read_idle){
      when(state === miss){
        read_state := read_transfer_addr
      }
    }
    is(read_transfer_addr){
      when(io.out.raddr_req.ready && io.out.raddr_req.valid){
        read_state := wait_data_transfer
      }
    }
    is(wait_data_transfer){
      when(io.out.rdata_rep.valid && io.out.rdata_rep.bits.last && io.out.rdata_rep.ready){
        read_state := refill
      }
    }
    is(refill){
      when(io.in.rdata_rep.ready) {
        read_state := read_idle
      }
    }
  }
  switch(write_state){
    is(write_idle){
      when(state === write_data){
        write_state := write_transfer_addr
      }
    }
    is(write_transfer_addr){
      when(io.out.waddr_req.ready && io.out.waddr_req.valid){
        write_state := write_transfer_data
      }
    }
    is(write_transfer_data){
      when(io.out.wdata_req.ready && io.out.wdata_req.bits.last && io.out.wdata_req.valid){
        write_state := write_wait_respone
      }
    }
    is(write_wait_respone){
      when(io.out.wb.valid && io.out.wb.bits.breap === "b00".U && io.out.wb.ready){
        write_state := write_idle
      }
    }
  }


  switch(state) {
    is(idle) {
//      count := 0.U
      when(fenceReqReg){
        waycount := 0.U(log2Ceil(Cache_way).W)
        baseAddr := 0.U(xlen.W)
      }
    }
    is(scanf) {
      when(hit === 0.U) {
        mem_addr_reg := Cat(io.in.addr_req.bits.addr(xlen - 1, log2Ceil(Cache_line_size / 8)), Fill(log2Ceil(Cache_line_size / 8), 0.U))
        lru_r := lru_w
        if (Type == "Dcache") {
          dirt_r.get := dirt_w.get
          count_write.get := 0.U
          mem_write_addr_reg.get := Cat(tag_way(lru_w), Scanf.io.out.bits.meta.ctrl_data.index, Fill(log2Ceil(Cache_line_size / 8), 0.U))
          mem_write_data_reg.get := Cache_data.io.out.bits.data(lru_w)
          hit_way_r.get := hit_way
        }
      }.otherwise {
        when(hit_way(0) === 1.U) {
          lru.write(Cache_data.io.out.bits.ctrl_data.index, 1.U)
        }
        when(hit_way(1) === 1.U) {
          lru.write(Cache_data.io.out.bits.ctrl_data.index, 0.U)
        }
      }
    }
    is(miss) {
      when(read_state === wait_data_transfer && io.out.rdata_rep.valid){
        data_line_reg := Cat(io.out.rdata_rep.bits.data, data_line_reg(Cache_line_size - 1, xlen))
      }
//      printf(" %x %x  %x\n",Cache_data.io.out.bits.ctrl_data.index,lru_r,data_line_reg)

      when(io.in.rdata_rep.ready && read_state === refill) {
        when(lru_r === 1.U) {
          lru.write(Cache_data.io.out.bits.ctrl_data.index, 0.U)
        }.otherwise {
          lru.write(Cache_data.io.out.bits.ctrl_data.index, 1.U)
        }
//        count := 0.U
      }
    }

    is(write_data) {
      if (Type == "Dcache") {
        when(io.out.wdata_req.ready && write_state === write_transfer_data) {
          count_write.get := count_write.get + 1.U
//          mem_write_addr_reg.get := mem_write_addr_reg.get + 8.U
          mem_write_data_reg.get := Cat(Fill(xlen, 0.U), mem_write_data_reg.get(Cache_line_size - 1, xlen))
        }
        when(io.out.wdata_req.bits.last && io.out.wdata_req.ready) {
          count_write.get := 0.U
        }
      }
    }
    is(fenceIdle) {

    }
    is(fenceLine) {
      if (Type == "Dcache") {
//        dirt_r.get := dirt_w.get
        count_write.get := 0.U
        mem_write_addr_reg.get := Cat(tag_way(waycount), Scanf.io.out.bits.meta.ctrl_data.index, Fill(log2Ceil(Cache_line_size / 8), 0.U))
        mem_write_data_reg.get := Cache_data.io.out.bits.data(waycount)
//        hit_way_r.get := hit_way
      }
    }
    is(fenceWayEnd) {
      val nextWay = fenceNum === (Cache_line_num + 1).U
      baseAddr := Mux(nextWay, 0.U, baseAddr + (1.U << log2Ceil(Cache_line_size / 8)))
      waycount := Mux(nextWay, waycount + 1.U(log2Ceil(Cache_way).W), waycount)
      fenceNum := fenceNum - 1.U
    }
  }

//  switch(io.in.addr_req.bits.addr(log2Ceil(Cache_line_size / xlen) + log2Ceil(xlen / 8) - 1, log2Ceil(xlen / 8))) {
//    is("b000".U) {
//      hit_data := Scanf.io.out.bits.data(xlen - 1, 0)
//      mem_data := data_line_reg(xlen - 1, 0)
//    }
//    is("b001".U) {
//      hit_data := Scanf.io.out.bits.data(2 * xlen - 1, xlen)
//      mem_data := data_line_reg(2 * xlen - 1, xlen)
//    }
//    is("b010".U) {
//      hit_data := Scanf.io.out.bits.data(3 * xlen - 1, 2 * xlen)
//      mem_data := data_line_reg(3 * xlen - 1, 2 * xlen)
//    }
//    is("b011".U) {
//      hit_data := Scanf.io.out.bits.data(4 * xlen - 1, 3 * xlen)
//      mem_data := data_line_reg(4 * xlen - 1, 3 * xlen)
//    }
//    is("b100".U) {
//      hit_data := Scanf.io.out.bits.data(5 * xlen - 1, 4 * xlen)
//      mem_data := data_line_reg(5 * xlen - 1, 4 * xlen)
//    }
//    is("b101".U) {
//      hit_data := Scanf.io.out.bits.data(6 * xlen - 1, 5 * xlen)
//      mem_data := data_line_reg(6 * xlen - 1, 5 * xlen)
//    }
//    is("b110".U) {
//      hit_data := Scanf.io.out.bits.data(7 * xlen - 1, 6 * xlen)
//      mem_data := data_line_reg(7 * xlen - 1, 6 * xlen)
//    }
//    is("b111".U) {
//      hit_data := Scanf.io.out.bits.data(8 * xlen - 1, 7 * xlen)
//      mem_data := data_line_reg(8 * xlen - 1, 7 * xlen)
//    }
//  }
  switch(io.in.addr_req.bits.addr(log2Ceil(Cache_line_size / xlen) + log2Ceil(xlen / 8) - 1, log2Ceil(xlen / 8))) {
    is("b00".U) {
      hit_data := Scanf.io.out.bits.data(xlen - 1, 0)
      mem_data := data_line_reg(xlen - 1, 0)
    }
    is("b01".U) {
      hit_data := Scanf.io.out.bits.data(2 * xlen - 1, xlen)
      mem_data := data_line_reg(2 * xlen - 1, xlen)
    }
    is("b10".U) {
      hit_data := Scanf.io.out.bits.data(3 * xlen - 1, 2 * xlen)
      mem_data := data_line_reg(3 * xlen - 1, 2 * xlen)
    }
    is("b11".U) {
      hit_data := Scanf.io.out.bits.data(4 * xlen - 1, 3 * xlen)
      mem_data := data_line_reg(4 * xlen - 1, 3 * xlen)
    }
  }

  Scanf.io.out.ready := 1.U

  io.in.rdata_rep.bits.rdata := Mux((state === scanf && hit), hit_data, mem_data)
  //  io.in.ready := 1.U
  io.in.addr_req.ready := true.B

  //read data from cache
  Cache_data.io.in.valid := Mux(io.in.addr_req.valid && state === idle || state === fenceIdle, 1.U, 0.U)
  Cache_data.io.in.addr := Mux(fenceResp, baseAddr,io.in.addr_req.bits.addr)
  Scanf.io.in.valid := RegNext(Cache_data.io.out.valid)
  Scanf.io.in.bits.meat := (Cache_data.io.out.bits.meat)
  Scanf.io.in.bits.data := (Cache_data.io.out.bits.data)
  Scanf.io.in.bits.ctrl_data := (Cache_data.io.out.bits.ctrl_data)
  Cache_data.io.out.ready := Scanf.io.in.ready
  hit_way := Scanf.io.out.bits.hit_way
  //  when(io.in.rdata_rep.valid){
  //    printf(p"read : ${Hexadecimal(Scanf.io.out.bits.data)}\n")
  //  }

  //read data from mem
  if (Type == "Dcache") {
//    io.out.addr_req.valid := Mux(state === miss || state === write_data, true.B, false.B)
    io.out.raddr_req.valid := Mux(read_state === read_transfer_addr ,true.B,false.B)
    io.out.waddr_req.valid := Mux(write_state === write_transfer_addr,true.B,false.B)

    io.out.raddr_req.bits.addr := Mux(read_state === read_transfer_addr, mem_addr_reg,0.U(xlen.W))
    io.out.waddr_req.bits.addr := Mux(write_state === write_transfer_addr, mem_write_addr_reg.get, 0.U(xlen.W))

//    io.out.addr_req.bits.ce := Mux(state === miss || (state === write_data && !s_w.get), 1.U, 0.U)
//    io.out.addr_req.bits.addr := Mux(state === write_data, mem_write_addr_reg.get, mem_addr_reg)
//    io.out.addr_req.bits.we := Mux(state === write_data && !s_w.get, 1.U, 0.U)
    io.out.wdata_req.valid := Mux(write_state === write_transfer_data , true.B,false.B)
    io.out.wdata_req.bits.data := Mux(write_state === write_transfer_data,mem_write_data_reg.get(xlen - 1, 0),0.U)
    io.out.wdata_req.bits.wstrb := Mux(write_state === write_transfer_data,"hff".U(masklen.W),0.U)
    io.out.wdata_req.bits.last := Mux(s_w.get === true.B,true.B,false.B)
    io.out.wb.ready := Mux(write_state === write_wait_respone,true.B,false.B)
  }
  else {
    io.out.raddr_req.valid := Mux(read_state === read_transfer_addr, true.B, false.B)
    io.out.waddr_req.valid := false.B

    io.out.raddr_req.bits.addr := Mux(read_state === read_transfer_addr, mem_addr_reg, 0.U(xlen.W))
    io.out.waddr_req.bits.addr := 0.U

    io.out.wdata_req.valid := false.B
    io.out.wdata_req.bits.data := 0.U
    io.out.wdata_req.bits.wstrb := "h00".U(masklen.W)
    io.out.wdata_req.bits.last := false.B
    io.out.wb.ready := false.B

//    io.out.addr_req.valid := Mux(state === miss, true.B, false.B)
//    io.out.addr_req.bits.ce := Mux(state === miss, 1.U, 0.U)
//    io.out.addr_req.bits.addr := mem_addr_reg
//    io.out.addr_req.bits.we := 0.U
//    io.out.wdata_req.get.bits.wdata := 0.U
//    io.out.wdata_req.get.bits.wmask := 0.U
  }

  //write back cache data
  io.in.rdata_rep.valid := Mux(((state === scanf && hit) || (state === miss && read_state === refill)) && (!io.flush) && (!io.in.addr_req.bits.we), 1.B, 0.B)
  if (Type == "Dcache") {
    val wmaskextend = MaskGen(Cache_data.io.out.bits.ctrl_data.offset(log2Ceil(Cache_line_size / 8) - 1, log2Ceil(xlen / 8)),
      io.in.wdata_req.get.bits.wmask & Fill(8, io.in.addr_req.bits.we))

    val wdata_extend = Fill(Cache_line_size / xlen, io.in.wdata_req.get.bits.wdata)
    val wdata = Mux( read_state === refill, MaskData(data_line_reg, wmaskextend, wdata_extend), MaskData(Scanf.io.out.bits.data, wmaskextend, wdata_extend))
//    printf("%x\n",wdata)
    Cache_data.io.write_bus.valid := Mux((read_state === refill || (state === scanf && io.in.addr_req.bits.we && hit)) && (!io.flush) ||
      state === fenceWayEnd, true.B, false.B)
    Cache_data.io.write_bus.addr := Mux((state === miss && read_state === refill) || (state === scanf && io.in.addr_req.bits.we && hit), io.in.addr_req.bits.addr, baseAddr)
    Cache_data.io.write_bus.wdata := wdata

    io.in.wdata_req.get.ready := true.B
    io.in.wdata_rep.get := Mux((state === scanf && io.in.addr_req.bits.we && hit) || (state === miss && read_state === refill && io.in.addr_req.bits.we), true.B, false.B)

    val realDirtWrite = Mux(fenceResp, VecInit(Seq.fill(Cache_way)(0.U(1.W))), VecInit(Seq.fill(Cache_way)(1.U(1.W))))
    val waymask = Mux(state === scanf && hit && io.in.addr_req.bits.we, hit_way.asUInt, Mux(fenceResp, waycount,Mux(lru_r === 1.U, "b10".U(2.W), "b01".U(2.W))))
    Cache_data.io.write_bus.waymask := waymask
    when(io.in.addr_req.bits.we & ((state === scanf && hit) | (read_state === refill)) | state === fenceWayEnd) {
      dirt.get.write(Cache_data.io.out.bits.ctrl_data.index, realDirtWrite, waymask.asBools)
    }
    Cache_data.io.write_bus.fenceValid := fenceResp

  }
  else {
    Cache_data.io.write_bus.valid := Mux(read_state === refill || state === fenceWayEnd, true.B, false.B)
    Cache_data.io.write_bus.addr := Mux(read_state === refill, io.in.addr_req.bits.addr, baseAddr)
    Cache_data.io.write_bus.wdata := Mux(read_state === refill, data_line_reg, 0.U)
    val waymask = Mux(state === scanf && hit && io.in.addr_req.bits.we, hit_way.asUInt, Mux(fenceResp, waycount,Mux(lru_r === 1.U, "b10".U(2.W), "b01".U(2.W))))
    Cache_data.io.write_bus.waymask := waymask
    Cache_data.io.write_bus.fenceValid := fenceResp
  }
  //  io.out.wdata_req.get.ready := true.B
  io.out.rdata_rep.ready := Mux(read_state === wait_data_transfer,true.B,false.B)

  if (Type == "Dcache") io.out.raddr_req.bits.id := 0.U(4.W) else io.out.raddr_req.bits.id := 1.U(4.W)
  io.out.raddr_req.bits.size := Mux(io.out.raddr_req.valid,"b011".U(3.W),0.U)
  io.out.raddr_req.bits.brust := Mux(io.out.raddr_req.valid,1.U(2.W),0.U)
  io.out.raddr_req.bits.lock := 0.U(2.W)
  io.out.raddr_req.bits.cache := 0.U(4.W)
  io.out.raddr_req.bits.prot := 0.U(3.W)
  io.out.raddr_req.bits.len := Mux(io.out.raddr_req.valid,0x3.U(8.W),0.U)

  if (Type == "Dcache") io.out.waddr_req.bits.id := 0.U(4.W) else io.out.waddr_req.bits.id := 1.U(4.W)
  io.out.waddr_req.bits.size := Mux(io.out.waddr_req.valid,"b011".U(3.W),0.U)
  io.out.waddr_req.bits.brust := Mux(io.out.waddr_req.valid,1.U(2.W),0.U)
  io.out.waddr_req.bits.lock := 0.U(2.W)
  io.out.waddr_req.bits.cache := 0.U(4.W)
  io.out.waddr_req.bits.prot := 0.U(3.W)
  io.out.waddr_req.bits.len := Mux(io.out.waddr_req.valid,0x3.U(8.W),0.U)

  if (Type == "Dcache") io.out.wdata_req.bits.id := 0.U(4.W) else io.out.wdata_req.bits.id := 1.U(4.W)


  io.cache_busy := !(state === idle)

  io.sram0 <> Cache_data.io.sram0
  io.sram1 <> Cache_data.io.sram1
  io.sram2 <> Cache_data.io.sram2
  io.sram3 <> Cache_data.io.sram3
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
//import chisel3.stage._
//object app extends App{
//  (new ChiselStage).emitVerilog(new Cache("Dcache"),Array("--target-dir", "build"))
//}