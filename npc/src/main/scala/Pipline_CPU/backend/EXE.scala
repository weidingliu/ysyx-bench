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
  def apply() = UInt(7.W)
}
object RD{
  def write="b1".U
  //def read = "b10".U
  def NOP = "b0".U
  def apply() =UInt(1.W)
}

class EXE extends Module with Paramete{
  val io = IO(new Bundle() {
   val in = Flipped(Decoupled(new DecoderIO))
   val branchIO = new BranchIO
    val out = Decoupled(new MEMIO)
    val is_break = Output(Bool())
    val is_flush = Output(Bool())

  })
//  val rf = new RF
//  val reg1 = rf.read(io.in.bits.ctrl_signal.rfSrc1)
//  val reg2 = rf.read(io.in.bits.ctrl_signal.rfSrc1)
  val src1 = WireDefault(0.U(xlen.W))
  val src2 = WireDefault(0.U(xlen.W))
  val Imm = WireDefault(0.U(xlen.W))
  val PC = WireDefault(0.U(xlen.W))

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

  switch(io.in.bits.ctrl_signal.aluoptype) {
    is(ALUOPType.add) {
      alu_result := src1 + src2
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
      alu_result := SIgEXtend((src1 * src2) (31, 0), xlen)
    }
    is(ALUOPType.divw) {
      alu_result := SIgEXtend((src1(31, 0).asSInt / src2(31, 0).asSInt) (31, 0), xlen)
    }
    is(ALUOPType.remw) {
      alu_result := SIgEXtend((src1(31, 0).asSInt % src2(31, 0).asSInt) (31, 0), xlen)
    }
    is(ALUOPType.remuw) {
      alu_result := SIgEXtend((src1(31, 0) % src2(31, 0)) (31, 0), xlen)
    }
    is(ALUOPType.subw) {
      alu_result := SIgEXtend((src1 - src2) (31, 0), xlen)
    }
    is(ALUOPType.mul) {
      alu_result := (src1 * src2) (63, 0)
    }
    is(ALUOPType.remu) {
      alu_result := (src1 % src2)
    }
    is(ALUOPType.rem) {
      alu_result := (src1.asSInt % src2.asSInt) (63, 0)
    }
    is(ALUOPType.divuw) {
      alu_result := SIgEXtend((src1(31, 0) / src2(31, 0)) (31, 0), xlen)
    }
    is(ALUOPType.divu) {
      alu_result := src1 / src2
    }
    is(ALUOPType.div) {
      alu_result := (src1.asSInt / src2.asSInt) (63, 0)
    }
//    is(ALUOPType.csrrs) {
//      alu_result := csr.read(io.Imm(11, 0))
//      csr.write(io.Imm(11, 0), csr.read(io.Imm(11, 0)) | src1)
//    }
//    is(ALUOPType.csrrw) {
//      alu_result := csr.read(io.Imm(11, 0))
//      csr.write(io.Imm(11, 0), src1)
//    }
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


//    is(ALUOPType.ecall) {
//      dnpc := csr_data
//    }
//    is(ALUOPType.mret) {
//      dnpc := csr_data
//    }
  }

//  io1.time_int := time_int
//  when(time_int === 1.U) {
//    csr.write(CSR_index.mip, csr.read(CSR_index.mip) | 0x0000000000000080.U)
//    csr.write(CSR_index.mcause, 7.U(xlen.W))
//    csr.write(CSR_index.mepc, io1.PC.asUInt)
//    csr.write(CSR_index.mstatus, csr.read(CSR_index.mstatus) & "hfffffffffffffff7".U(xlen.W))
//  }

  io.is_flush := Mux((branch_flag === 1.U || io.branchIO.is_jump === 1.U) && io.in.valid,1.U,0.U)
  io.is_break := Mux((io.in.bits.ctrl_signal.aluoptype === ALUOPType.ebreak), 1.U, 0.U)

  io.out.bits.ctrl_signal <> io.in.bits.ctrl_signal
  io.out.bits.ctrl_flow <> io.in.bits.ctrl_flow
  io.out.bits.ctrl_data <> io.in.bits.ctrl_data

  io.out.bits.ctrl_signal.inst_valid := Mux(io.in.valid,io.in.bits.ctrl_signal.inst_valid,0.U)

//  io.out.bits <> io.in.bits
  io.out.bits.ctrl_data.src1 := src1
  io.out.bits.ctrl_data.src2 := src2
  io.out.bits.ctrl_rf.rfData := result_tem
  io.out.bits.ctrl_rf.rfDest := io.in.bits.ctrl_signal.rfDest
  io.out.bits.ctrl_rf.rfWen := Mux(io.in.valid,io.in.bits.ctrl_signal.rfWen,0.U)
  io.out.bits.ctrl_flow.Dnpc := dnpc
  io.branchIO.dnpc := dnpc//Mux(time_int === 1.U, csr.read(CSR_index.mtvec), dnpc)
  io.branchIO.is_branch := branch_flag & io.in.valid//Mux(time_int === 1.U, 1.U, branch_flag)
  io.branchIO.is_jump := Mux(io.in.bits.ctrl_signal.fuType === FUType.jump && io.in.valid, 1.U, 0.U)

  io.out.valid := Mux(io.out.ready && io.in.valid ,1.U,0.U)
  io.in.ready := io.out.ready
}
