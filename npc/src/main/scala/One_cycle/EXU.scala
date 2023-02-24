package One_cycle
import chisel3.{util, _}
import chisel3.util.{BitPat, _}

object ALUOPType{
  def NOP = "b0000000".U
  def add = "b1000000".U
  def sll = "b1000001".U
  def ebreak = "b1000010".U
  def auipc ="b1000011".U
  def jal = "b0011001".U
  def jalr ="b1001000".U
  def or = "b1000100".U
  def ld =  "b1000101".U
  def sd ="b1000110".U
  def lw = "b1000111".U
  def addw = "b1101000".U
  def sub = "b1101001".U
  def sltiu ="b1101010".U
  def beq ="b1101011".U
  def bne ="b1101100".U
  def addiw ="b1101101".U
  def srai ="b1101110".U
  def lbu ="b1101111".U
  def sh ="b1110000".U
  def and ="b1110001".U
  def xor ="b1110010".U
  def sllw ="b1110011".U
  def sb ="b1110100".U
  def apply() = UInt(7.W)
}
object RD{
  def write="b1".U
  //def read = "b10".U
  def NOP = "b0".U
  def apply() =UInt(1.W)
}


class EXU extends Module with paramete {
  val io = IO(new Bundle() {
//    val ctrlIO = new IDUIO
    val src1type = Input(SRCType())
    val src2type = Input(SRCType())
    val src1 = Input(UInt(5.W))
    val src2 = Input(UInt(5.W))

    val rd = Input(UInt(5.W))
    val futype = Input(FUType())
    val aluoptype = Input(ALUOPType())
    val Imm = Input(UInt(xlen.W))


  })
  val io1 = IO(new Bundle() {
    val REG1 = Input(UInt(xlen.W))
    val REG2 = Input(UInt(xlen.W))
    val PC = Input(UInt(xlen.W))
    val result = Output(UInt(xlen.W))
    val is_break = Output(Bool())

    val is_jump=Output(Bool())
    val is_branch=Output(Bool())
    val dnpc=Output(UInt(xlen.W))

    val addr=Output(UInt(xlen.W))
    val rdata=Input(UInt(xlen.W))
    val wdata=Output(UInt(xlen.W))
    val wmask=Output(UInt(masklen.W))

  })
  val src1=WireDefault(0.U(xlen.W))
  val src2=WireDefault(0.U(xlen.W))
  switch(io.src1type){
    is(SRCType.R){
      src1 := io1.REG1
    }
    is(SRCType.PC){
      src1 := io1.PC
    }
    is(SRCType.DONT_Care){
      src1 :=0.U(xlen.W)
    }
  }
  switch(io.src2type){
    is(SRCType.R){
      src2:=io1.REG2
    }
    is(SRCType.imm){
      src2 := io.Imm
    }
  }
  val wmask_temp=WireDefault(0.U(masklen.W))
  val wdata_temp=WireDefault(0.U(xlen.W))
  val addr_temp=WireDefault(0.U(xlen.W))

  val sb_wmask=Seq(
    (addr_temp(2, 0) === "b000".U) -> "b00000001".U,
    (addr_temp(2, 0) === "b001".U) -> "b00000010".U,
    (addr_temp(2, 0) === "b010".U) -> "b00000100".U,
    (addr_temp(2, 0) === "b011".U) -> "b00001000".U,
    (addr_temp(2, 0) === "b100".U) -> "b00010000".U,
    (addr_temp(2, 0) === "b101".U) -> "b00100000".U,
    (addr_temp(2, 0) === "b110".U) -> "b01000000".U,
    (addr_temp(2, 0) === "b111".U) -> "b10000000".U
  )
  val sb_wdata=Seq(
    (addr_temp(2, 0) === "b000".U) -> Cat(Fill(56, 0.U),src2(7, 0)),
    (addr_temp(2, 0) === "b001".U) -> Cat(Fill(48, 0.U),src2(7, 0),Fill(8,0.U)),
    (addr_temp(2, 0) === "b010".U) -> Cat(Fill(40, 0.U),src2(7, 0),Fill(16,0.U)),
    (addr_temp(2, 0) === "b011".U) -> Cat(Fill(32, 0.U),src2(7, 0),Fill(24,0.U)),
    (addr_temp(2, 0) === "b100".U) -> Cat(Fill(24, 0.U),src2(7, 0),Fill(32,0.U)),
    (addr_temp(2, 0) === "b101".U) -> Cat(Fill(16, 0.U),src2(7, 0),Fill(40,0.U)),
    (addr_temp(2, 0) === "b110".U) -> Cat(Fill(8, 0.U),src2(7, 0),Fill(48,0.U)),
    (addr_temp(2, 0) === "b111".U) -> Cat(src2(7, 0),Fill(56,0.U))
  )

  switch(io.aluoptype){
    is(ALUOPType.ld){
      addr_temp := src1 + src2
    }
    is(ALUOPType.sd){
      addr_temp := src1+io.Imm
    }
    is(ALUOPType.sh) {
      addr_temp := src1 + io.Imm
    }
    is(ALUOPType.lw) {
      addr_temp := src1+io.Imm
    }
    is(ALUOPType.lbu) {
      addr_temp := src1 + io.Imm
    }
    is(ALUOPType.sb) {
      addr_temp := src1 + io.Imm
    }
  }
  switch(io.aluoptype) {
    is(ALUOPType.ld) {
      wmask_temp := 0.U(masklen.W)
      wdata_temp := 0.U(xlen.W)
    }
    is(ALUOPType.lw) {
      wmask_temp := 0.U(masklen.W)
      wdata_temp := 0.U(xlen.W)
    }
    is(ALUOPType.lbu) {
      wmask_temp := 0.U(masklen.W)
      wdata_temp := 0.U(xlen.W)
    }
    is(ALUOPType.sd) {
      wmask_temp := "b11111111".U
      wdata_temp := src2
    }
    is(ALUOPType.sh) {
      switch(addr_temp(2,1)){
        is("b00".U){
          wmask_temp := "b00000011".U
          wdata_temp := Cat(Fill(48,0.U),src2(15, 0))
        }
        is("b01".U){
          wmask_temp := "b00001100".U
          wdata_temp := Cat(Fill(32,0.U),src2(15, 0),Fill(16,0.U))
        }
        is("b10".U) {
          wmask_temp := "b00110000".U
          wdata_temp := Cat(Fill(16, 0.U), src2(15, 0), Fill(32, 0.U))
        }
        is("b11".U) {
          wmask_temp := "b11000000".U
          wdata_temp := Cat( src2(15, 0), Fill(48, 0.U))

        }
      }
    }
    is(ALUOPType.sb) {
      wmask_temp := MuxCase(0.U(8.W), sb_wmask)
      wdata_temp := MuxCase(0.U(xlen.W), sb_wdata)
    }
  }
  val lb_mem_select = Seq(
    (addr_temp(2, 0) === "b000".U) -> io1.rdata(7, 0),
    (addr_temp(2, 0) === "b001".U) -> io1.rdata(15, 8),
    (addr_temp(2, 0) === "b010".U) -> io1.rdata(23, 16),
    (addr_temp(2, 0) === "b011".U) -> io1.rdata(31, 24),
    (addr_temp(2, 0) === "b100".U) -> io1.rdata(39, 32),
    (addr_temp(2, 0) === "b101".U) -> io1.rdata(47, 40),
    (addr_temp(2, 0) === "b110".U) -> io1.rdata(55, 48),
    (addr_temp(2, 0) === "b111".U) -> io1.rdata(63, 56)
  )
  val mem_result = WireDefault(0.U(xlen.W))
  switch(io.aluoptype) {
    is(ALUOPType.ld) {
      mem_result := io1.rdata
    }
    is(ALUOPType.lw) {
      mem_result := Mux(addr_temp(2, 2) === 1.U, SIgEXtend(io1.rdata(63, 32), xlen), SIgEXtend(io1.rdata(31, 0), xlen))
    }
    is(ALUOPType.lbu) {
      mem_result := ZeroEXtend(MuxCase(0.U(xlen.W), lb_mem_select), xlen)
    }
  }



  //  val src1 :: Nil= ListLookup(io.src1type,List(0.U(xlen.W)),Array(
//    BitPat(SRCType.R) -> List(io1.REG1),
//    BitPat(SRCType.PC) -> List(io1.PC),
//
//  ))
//  val src2 :: Nil= ListLookup(io.src2type, List(0.U(xlen.W)), Array(
//    BitPat(SRCType.R) -> List(io1.REG2),
//    BitPat(SRCType.imm) -> List(io.Imm),
//
//  ))
  val alu_result = WireDefault(0.U(xlen.W))
  val dnpc=WireDefault(0.U(xlen.W))
  io1.is_break := Mux(io.aluoptype===ALUOPType.ebreak,1.U,0.U)
  switch(io.aluoptype){
    is(ALUOPType.add){
     alu_result := src1 + src2
    }
    is(ALUOPType.addw) {
      alu_result := SIgEXtend((src1 + src2)(31,0),xlen)
    }
    is(ALUOPType.or){
      alu_result := src1 | src2
    }
    is(ALUOPType.sub){
      alu_result := src1 - src2
    }
    is(ALUOPType.and){
      alu_result := src1 & src2
    }
    is(ALUOPType.xor) {
      alu_result := src1 ^ src2
    }
    is(ALUOPType.addiw){
      alu_result := SIgEXtend((src1 + src2)(31,0),xlen)
    }
  }
  val shift_result=WireDefault(0.U(xlen.W))
  switch(io.aluoptype){
    is(ALUOPType.srai){
      shift_result := src1 >> io.Imm(4,0)
    }
    is(ALUOPType.sllw){

      shift_result :=SIgEXtend((src1 << src2(4,0))(31,0),xlen)
    }
    is(ALUOPType.sll) {
      shift_result := src1 << src2(4, 0).asUInt
    }
  }


  val compar_result=WireDefault(0.U(xlen.W))
  switch(io.aluoptype){
    is(ALUOPType.sltiu){
      compar_result := Mux((src1<src2),1.U(xlen.W),0.U(xlen.W))
    }
  }

  val jump_result=WireDefault(0.U(xlen.W))
  jump_result := Mux(io.futype===FUType.jump,io1.PC+4.U(xlen.W),0.U(xlen.W))

  val result_tem=WireDefault(0.U(xlen.W))
  switch(io.futype){
    is(FUType.alu){
      result_tem := alu_result
    }
    is(FUType.jump){
      result_tem := jump_result
    }
    is(FUType.branch){
      result_tem := 0.U(xlen.W)
    }
    is(FUType.shift){
      result_tem:= shift_result
    }
    is(FUType.mem){
      result_tem := mem_result
    }
    is(FUType.compar){
      result_tem:= compar_result
    }
  }
  io1.result:= result_tem

  io1.is_jump := Mux(io.futype===FUType.jump,1.U,0.U)
//  io1.is_jump := Mux(io.futype===FUType.branch,1.U,0.U)
  val branch_result=WireDefault(0.U(xlen.W))
  val branch_flag=WireDefault(0.U(1.W))
    switch(io.aluoptype){
      is(ALUOPType.beq) {
        branch_result := io1.PC +io.Imm
        branch_flag := Mux(src1 === src2 ,1.U,0.U)
      }
      is(ALUOPType.bne) {
        branch_result := io1.PC + io.Imm
        branch_flag := Mux(src1 =/= src2, 1.U, 0.U)
      }
    }


  switch(io.aluoptype){
    is(ALUOPType.jal) {
      dnpc := src1 + src2
    }
    is(ALUOPType.jalr){
      dnpc := Cat((src1+src2)(xlen-1,1),0.U)
    }
    is(ALUOPType.beq){
      dnpc := Mux(branch_flag===1.U,branch_result,io1.PC+4.U(xlen.W))

    }
    is(ALUOPType.bne){
      dnpc := Mux(branch_flag===1.U,branch_result,io1.PC+4.U(xlen.W))
    }

  }


  io1.dnpc := dnpc
  io1.is_branch := branch_flag

  io1.wmask := wmask_temp
  io1.wdata := wdata_temp
  io1.addr := addr_temp

}
