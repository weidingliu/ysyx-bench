package Pipline_CPU.backend
import Pipline_CPU._
import Pipline_CPU.frontend._
import Pipline_CPU.utils._


import chisel3._
import chisel3.util._
object ALUOPType{
  def NOP = "b0000000".U
  def add = "b1000000".U
  def sll = "b1000001".U
  def ebreak = "b1000010".U
  def div ="b1000011".U
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
  def srli = "b1110101".U
  def bge = "b1110110".U
  def sw = "b1110111".U
  def mulw ="b1111000".U
  def divw ="b1111001".U
  def remw="b1111010".U
  def blt ="b1111011".U
  def subw = "b0000001".U
  def slt= "b0000010".U
  def lh= "b0000011".U
  def lhu ="b0000100".U
  def sraiw ="b0000110".U
  def slliw ="b0000101".U
  def mul ="b0000111".U
  def srliw = "b0001000".U
  def sraw = "b0001001".U
  def srlw = "b0001010".U
  def bltu = "b0001011".U
  def bgeu ="b0001100".U
  def remuw ="b0001101".U
  def lb ="b0001110".U
  def remu ="b0001111".U
  def divuw ="b0010000".U
  def lwu = "b0010001".U
  def rem = "b0010010".U
  def divu = "b0010011".U
  def sra = "b0010100".U
  def csrrs ="b0010101".U
  def csrrw ="b0010110".U
  def ecall ="b0010111".U
  def mret ="b0011000".U
  def lui = "b0011010".U
  def apply() = UInt(7.W)
}
object RD{
  def write="b1".U
  //def read = "b10".U
  def NOP = "b0".U
  def apply() =UInt(1.W)
}
class CSR_DIFF extends BlackBox{
  val io=IO(new Bundle() {
    val mepc = Input(UInt(64.W))
    val mcause = Input(UInt(64.W))
    val mstatus = Input(UInt(64.W))
    val mtvec = Input(UInt(64.W))
  })
}

class EXE extends Module with Paramete{
  val io = IO(new Bundle() {
   val in = Flipped(Decoupled(new DecoderIO))

//    val src1 = Input(UInt(xlen.W))
//    val src2 = Input(UInt(xlen.W))
    val is_mem = Output(Bool())

   val branchIO = new BranchIO
    val out = Decoupled(new MEMIO)
    val is_break = Output(Bool())
    val is_flush = Output(Bool())
    val icache_busy = Input(Bool())
    val csr_rd_io = Flipped(new CSR_RDIO)
  })
//  val rf = new RF
//  val reg1 = rf.read(io.in.bits.ctrl_signal.rfSrc1)
//  val reg2 = rf.read(io.in.bits.ctrl_signal.rfSrc1)
  val src1 = WireDefault(0.U(xlen.W))
  val src2 = WireDefault(0.U(xlen.W))
  val Imm = WireDefault(0.U(xlen.W))
  val PC = WireDefault(0.U(xlen.W))

  val is_mul = (ALUOPType.mulw === io.in.bits.ctrl_signal.aluoptype || ALUOPType.mul === io.in.bits.ctrl_signal.aluoptype) && io.in.bits.ctrl_signal.inst_valid && io.in.valid
  val is_div = (io.in.bits.ctrl_signal.aluoptype === ALUOPType.div || io.in.bits.ctrl_signal.aluoptype === ALUOPType.divu
    || io.in.bits.ctrl_signal.aluoptype === ALUOPType.divw || io.in.bits.ctrl_signal.aluoptype === ALUOPType.divuw
    || io.in.bits.ctrl_signal.aluoptype === ALUOPType.rem || io.in.bits.ctrl_signal.aluoptype === ALUOPType.remu
    || io.in.bits.ctrl_signal.aluoptype === ALUOPType.remw || io.in.bits.ctrl_signal.aluoptype === ALUOPType.remuw) && io.in.bits.ctrl_signal.inst_valid && io.in.valid
  val is_divw = (io.in.bits.ctrl_signal.aluoptype === ALUOPType.divw || io.in.bits.ctrl_signal.aluoptype === ALUOPType.divuw
    || io.in.bits.ctrl_signal.aluoptype === ALUOPType.remw || io.in.bits.ctrl_signal.aluoptype === ALUOPType.remuw)
  val is_div_sign = (io.in.bits.ctrl_signal.aluoptype === ALUOPType.div || io.in.bits.ctrl_signal.aluoptype === ALUOPType.divw
    || io.in.bits.ctrl_signal.aluoptype === ALUOPType.rem || io.in.bits.ctrl_signal.aluoptype === ALUOPType.remw )
  io.is_mem := io.in.valid & (io.in.bits.ctrl_signal.fuType === FUType.mem) & (io.in.bits.ctrl_signal.aluoptype === ALUOPType.lb ||
    io.in.bits.ctrl_signal.aluoptype === ALUOPType.lbu || io.in.bits.ctrl_signal.aluoptype === ALUOPType.ld || io.in.bits.ctrl_signal.aluoptype === ALUOPType.lh ||
    io.in.bits.ctrl_signal.aluoptype === ALUOPType.lhu || io.in.bits.ctrl_signal.aluoptype === ALUOPType.lw || io.in.bits.ctrl_signal.aluoptype === ALUOPType.lwu)
  val csr = new CSR
  val CSRDIFF=Module(new CSR_DIFF)
//  val mul = Module(new Shift_MUL(xlen))
//  val mul = Module(new Booth_MUL(3,xlen))
  val mul = Module(new MUL(3,xlen))
  val div = Module(new Radix_DIV(xlen))

  Imm := io.in.bits.ctrl_data.Imm
  PC := io.in.bits.ctrl_flow.PC

  switch(io.in.bits.ctrl_signal.src1Type) {
    is(SRCType.R) {
      src1 := io.in.bits.ctrl_data.src1
    }
    is(SRCType.PC) {
      src1 := PC
    }
    is(SRCType.DONT_Care) {
      src1 := 0.U(xlen.W)
    }
  }
  switch(io.in.bits.ctrl_signal.src2Type) {
    is(SRCType.R) {
      src2 := io.in.bits.ctrl_data.src2
    }
    is(SRCType.imm) {
      src2 := Imm
    }
  }

  val alu_result = WireDefault(0.U(xlen.W))
  val dnpc = WireDefault(io.in.bits.ctrl_flow.PC+4.U(xlen.W))
  val csr_result = WireDefault(0.U(xlen.W))
  val csr_idx = WireDefault(0.U(12.W))

  val mul_hi=mul.io.out.bits.result.result_hi
  val mul_lo=mul.io.out.bits.result.result_lo

  val div_q = div.io.out.bits.result.quotient
  val div_r = div.io.out.bits.result.remainder

  switch(io.in.bits.ctrl_signal.aluoptype) {
    is(ALUOPType.add) {
      alu_result := src1 + src2
    }
    is(ALUOPType.lui){
      alu_result := src2
    }
    is(ALUOPType.addw) {
      alu_result := SIgEXtend((src1 + src2) (31, 0), xlen)
    }
    is(ALUOPType.or) {
      alu_result := src1 | src2
    }
    is(ALUOPType.sub) {
      alu_result := src1 - src2
    }
    is(ALUOPType.and) {
      alu_result := src1 & src2
    }
    is(ALUOPType.xor) {
      alu_result := src1 ^ src2
    }
    is(ALUOPType.addiw) {
      alu_result := SIgEXtend((src1 + src2) (31, 0), xlen)
    }
    is(ALUOPType.mulw) {
      alu_result := SIgEXtend(mul_lo(31, 0), xlen)
    }
    is(ALUOPType.divw) {
      alu_result := SIgEXtend(div_q(31, 0), xlen)
    }
    is(ALUOPType.remw) {
      alu_result := SIgEXtend(div_r (31, 0), xlen)
    }
    is(ALUOPType.remuw) {
      alu_result := SIgEXtend(div_r(31, 0), xlen)
    }
    is(ALUOPType.subw) {
      alu_result := SIgEXtend((src1 - src2) (31, 0), xlen)
    }
    is(ALUOPType.mul) {
      alu_result := mul_lo
    }
    is(ALUOPType.remu) {
      alu_result := div_r
    }
    is(ALUOPType.rem) {
      alu_result := div_r
    }
    is(ALUOPType.divuw) {
      alu_result := SIgEXtend(div_q(31, 0), xlen)
    }
    is(ALUOPType.divu) {
      alu_result := div_q
    }
    is(ALUOPType.div) {
      alu_result := div_q
    }
    is(ALUOPType.csrrs) {
      alu_result := io.csr_rd_io.rd_data
      csr_result := io.csr_rd_io.rd_data | src1
      csr_idx := Imm(11, 0)
//      csr.write(Imm(11, 0), csr.read(Imm(11, 0)) | src1)
    }
    is(ALUOPType.csrrw) {
      alu_result := io.csr_rd_io.rd_data
      csr_result := src1
      csr_idx := Imm(11, 0)
//      csr.write(Imm(11, 0), src1)
    }
  }
  val shift_result = WireDefault(0.U(xlen.W))
  switch(io.in.bits.ctrl_signal.aluoptype) {
    is(ALUOPType.srai) {
      shift_result := (src1.asSInt >> src2(4, 0)).asUInt
    }
    is(ALUOPType.sllw) {

      shift_result := SIgEXtend((src1 << src2(4, 0)) (31, 0), xlen)
    }
    is(ALUOPType.sll) {
      shift_result := src1 << src2(5, 0).asUInt
    }
    is(ALUOPType.srli) {
      shift_result := src1.asUInt >> src2(5, 0).asUInt
    }
    is(ALUOPType.slliw) {
      shift_result := SIgEXtend((src1(31, 0) << src2(5, 0)) (31, 0), xlen)
    }
    is(ALUOPType.sraiw) {
      shift_result := SIgEXtend((src1(31, 0).asSInt >> src2(4, 0)) (31, 0), xlen)
    }
    is(ALUOPType.srliw) {
      shift_result := SIgEXtend((src1(31, 0) >> src2(4, 0)) (31, 0), xlen)
    }
    is(ALUOPType.sraw) {
      shift_result := SIgEXtend((src1(31, 0).asSInt >> src2(4, 0)) (31, 0), xlen)
    }
    is(ALUOPType.srlw) {
      shift_result := SIgEXtend((src1(31, 0) >> src2(4, 0)) (31, 0), xlen)
    }
    is(ALUOPType.sra) {
      shift_result := (src1.asSInt >> src2(5, 0)).asUInt
    }
  }

  mul.io.in.bits.ctrl_data.src1 := Mux(is_mul,src1,Cat(Fill(32,0.U),src1(31,0)))
  mul.io.in.bits.ctrl_data.src2 := Mux(is_mul,src2,Cat(Fill(32,0.U),src2(31,0)))
  mul.io.in.bits.ctrl_flow.flush := 0.U
  mul.io.in.bits.ctrl_flow.mul_sign := "b11".U(2.W)
  mul.io.in.valid := Mux(is_mul && !mul.io.out.valid,true.B,false.B)
  mul.io.out.ready := true.B
//  mul.io.in.bits.ctrl_flow.mulw := Mux(io.in.bits.ctrl_signal.aluoptype === ALUOPType.mul && is_mul,false.B,true.B)
  mul.io.in.bits.ctrl_flow.mulw := false.B

  div.io.in.bits.ctrl_flow.flush := 0.B
  div.io.in.bits.ctrl_data.src1 := Mux(is_divw,Mux(is_div_sign,SIgEXtend(src1(31,0),xlen),ZeroEXtend(src1(31,0),xlen)),src1)
  div.io.in.bits.ctrl_data.src2 := Mux(is_divw,Mux(is_div_sign,SIgEXtend(src2(31,0),xlen),ZeroEXtend(src2(31,0),xlen)),src2)
  div.io.in.valid := Mux(is_div && !div.io.out.valid,true.B,false.B)
  div.io.out.ready := true.B
  div.io.in.bits.ctrl_flow.divw := is_divw
  div.io.in.bits.ctrl_flow.div_signed := is_div_sign

  val compar_result = WireDefault(0.U(xlen.W))
  switch(io.in.bits.ctrl_signal.aluoptype) {
    is(ALUOPType.sltiu) {
      compar_result := Mux((src1 < src2), 1.U(xlen.W), 0.U(xlen.W))
    }
    is(ALUOPType.slt) {
      compar_result := Mux((src1.asSInt < src2.asSInt), 1.U(xlen.W), 0.U(xlen.W))
    }
  }

  val jump_result = WireDefault(0.U(xlen.W))
  jump_result := Mux(io.in.bits.ctrl_signal.fuType === FUType.jump, PC + 4.U(xlen.W), 0.U(xlen.W))

  val result_tem = WireDefault(0.U(xlen.W))
  switch(io.in.bits.ctrl_signal.fuType) {
    is(FUType.alu) {
      result_tem := alu_result
    }
    is(FUType.jump) {
      result_tem := jump_result
    }
    is(FUType.branch) {
      result_tem := 0.U(xlen.W)
    }
    is(FUType.shift) {
      result_tem := shift_result
    }
    is(FUType.compar) {
      result_tem := compar_result
    }
  }

  //io1.is_jump := Mux(io.futype===FUType.jump || time_int===1.U,1.U,0.U)

  val branch_result = WireDefault(0.U(xlen.W))
  val branch_flag = WireDefault(0.U(1.W))
  switch(io.in.bits.ctrl_signal.aluoptype) {
    is(ALUOPType.beq) {
      branch_result := PC + Imm
      branch_flag := Mux(src1 === src2, 1.U, 0.U)
    }
    is(ALUOPType.bne) {
      branch_result := PC + Imm
      branch_flag := Mux(src1 =/= src2, 1.U, 0.U)
    }
    is(ALUOPType.bge) {
      branch_result := PC + Imm
      branch_flag := Mux(src1.asSInt >= src2.asSInt, 1.U, 0.U)
    }
    is(ALUOPType.blt) {
      branch_result := PC + Imm
      branch_flag := Mux(src1.asSInt < src2.asSInt, 1.U, 0.U)
    }
    is(ALUOPType.bltu) {
      branch_result := PC + Imm
      branch_flag := Mux(src1 < src2, 1.U, 0.U)
    }
    is(ALUOPType.bgeu) {
      branch_result := PC + Imm
      branch_flag := Mux(src1 >= src2, 1.U, 0.U)
    }

    is(ALUOPType.ecall) {
      branch_flag := 1.U
    }
    is(ALUOPType.mret) {
      branch_flag := 1.U
    }
  }

  val csr_data = WireDefault(0.U(xlen.W))
  switch(io.in.bits.ctrl_signal.aluoptype) {
    is(ALUOPType.ecall) {
      csr_data := csr.read(CSR_index.mtvec)
      csr_idx := CSR_index.mstatus
      csr_result := csr.read(CSR_index.mstatus) & "hfffffffffffffff7".U(xlen.W)
//      csr.write(CSR_index.mstatus, csr.read(CSR_index.mstatus) & "hfffffffffffffff7".U(xlen.W))
    }
    is(ALUOPType.mret) {
      csr_data := csr.read(CSR_index.mepc)
      csr_idx := CSR_index.mstatus
      csr_result := csr.read(CSR_index.mstatus) | "h0000000000000008".U(xlen.W)
//      csr.write(CSR_index.mstatus, csr.read(CSR_index.mstatus) | "h0000000000000008".U(xlen.W))
    }
  }

// dnpc
  switch(io.in.bits.ctrl_signal.aluoptype) {
    is(ALUOPType.jal) {
      dnpc := src1 + src2
    }
    is(ALUOPType.jalr) {
      dnpc := Cat((src1 + src2) (xlen - 1, 1), 0.U)
    }
    is(ALUOPType.beq) {
      dnpc := Mux(branch_flag === 1.U, branch_result, PC + 4.U(xlen.W))

    }
    is(ALUOPType.bne) {
      dnpc := Mux(branch_flag === 1.U, branch_result, PC + 4.U(xlen.W))
    }
    is(ALUOPType.bge) {
      dnpc := Mux(branch_flag === 1.U, branch_result, PC + 4.U(xlen.W))
    }
    is(ALUOPType.bgeu) {
      dnpc := Mux(branch_flag === 1.U, branch_result, PC + 4.U(xlen.W))
    }
    is(ALUOPType.blt) {
      dnpc := Mux(branch_flag === 1.U, branch_result, PC + 4.U(xlen.W))
    }
    is(ALUOPType.bltu) {
      dnpc := Mux(branch_flag === 1.U, branch_result, PC + 4.U(xlen.W))
    }

    is(ALUOPType.ecall) {
      dnpc := csr_data
    }
    is(ALUOPType.mret) {
      dnpc := csr_data
    }
  }

  switch(io.in.bits.ctrl_signal.aluoptype) {
    is(ALUOPType.ecall) {
      csr.write(CSR_index.mepc, PC)
      csr.write(CSR_index.mcause, 11.U)
    }
  }

//  io1.time_int := time_int
//  when(time_int === 1.U) {
//    csr.write(CSR_index.mip, csr.read(CSR_index.mip) | 0x0000000000000080.U)
//    csr.write(CSR_index.mcause, 7.U(xlen.W))
//    csr.write(CSR_index.mepc, io1.PC.asUInt)
//    csr.write(CSR_index.mstatus, csr.read(CSR_index.mstatus) & "hfffffffffffffff7".U(xlen.W))
//  }
// CSR difftest
  CSRDIFF.io.mtvec := RegNext(RegNext(csr.mtvec))
  CSRDIFF.io.mcause := RegNext(RegNext(csr.mcause))
  CSRDIFF.io.mepc := RegNext(RegNext(csr.mepc))
  CSRDIFF.io.mstatus := RegNext(RegNext(csr.mstatus))

  io.csr_rd_io.csr_addr := csr_idx
//  io.is_mem := Mux(io.in.bits.ctrl_signal.fuType === FUType.mem,1.B,0.B)

  io.out.bits.ctrl_signal <> io.in.bits.ctrl_signal
  io.out.bits.ctrl_flow <> io.in.bits.ctrl_flow
  io.out.bits.ctrl_data <> io.in.bits.ctrl_data

  io.out.bits.ctrl_signal.inst_valid := io.in.bits.ctrl_signal.inst_valid//Mux(io.in.valid,io.in.bits.ctrl_signal.inst_valid,0.U)

//  io.out.bits <> io.in.bits
  io.out.bits.ctrl_data.src1 := src1
  io.out.bits.ctrl_data.src2 := src2
  io.out.bits.ctrl_rf.rfData := result_tem
  io.out.bits.ctrl_rf.rfDest := io.in.bits.ctrl_signal.rfDest
  io.out.bits.ctrl_rf.rfWen := Mux(io.in.valid,io.in.bits.ctrl_signal.rfWen,0.U)
  io.out.bits.ctrl_flow.Dnpc := dnpc
  io.branchIO.dnpc := dnpc//Mux(time_int === 1.U, csr.read(CSR_index.mtvec), dnpc)

  val is_branch = branch_flag & io.out.bits.ctrl_signal.inst_valid & io.in.valid
  val is_jump = io.in.bits.ctrl_signal.fuType === FUType.jump && io.out.bits.ctrl_signal.inst_valid && io.in.valid
  io.branchIO.is_branch := is_branch & io.out.ready & !io.icache_busy//Mux(time_int === 1.U, 1.U, branch_flag)
  io.branchIO.is_jump := Mux(is_jump & io.out.ready & !io.icache_busy, 1.U, 0.U)

  io.is_flush := Mux((is_branch === 1.U || is_jump === 1.U) && io.in.valid & io.out.ready & !io.icache_busy , 1.U, 0.U)
  io.is_break := Mux((io.in.bits.ctrl_signal.aluoptype === ALUOPType.ebreak && io.out.bits.ctrl_signal.inst_valid), 1.U, 0.U)

  io.out.bits.ctrl_csr.csr_en := Mux(io.in.bits.ctrl_signal.aluoptype === ALUOPType.mret || io.in.bits.ctrl_signal.aluoptype === ALUOPType.mret
    || io.in.bits.ctrl_signal.aluoptype === ALUOPType.csrrs || io.in.bits.ctrl_signal.aluoptype === ALUOPType.csrrw,true.B,false.B)
  io.out.bits.ctrl_csr.csr_idx := csr_idx
  io.out.bits.ctrl_csr.csr_data := csr_result

  io.out.valid := Mux(!(!mul.io.out.valid && is_mul ) && !(!div.io.out.valid && is_div) && io.in.valid && !((is_branch === 1.U || is_jump === 1.U) && io.icache_busy),1.U,0.U)
  io.in.ready := Mux(((!mul.io.out.valid && is_mul) || (!div.io.out.valid && is_div)) && io.in.valid || ((is_branch === 1.U || is_jump === 1.U) && io.icache_busy),0.U,io.out.ready)
}
