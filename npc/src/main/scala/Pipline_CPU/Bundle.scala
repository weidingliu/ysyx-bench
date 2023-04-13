package Pipline_CPU
import chisel3._
import chisel3.util._

class CtrlSignalIO extends Bundle with Paramete{
  val src1Type = Output(SRCType())
  val src2Type = Output(SRCType())
  val fuType = Output(FUType())
  val inst_valid = Output(Bool())
  val rfSrc1 = Output(5.W)
  val rfSrc2 = Output(5.W)
  val rfWen = Output(Bool())
  val aluoptype = Output(ALUOPType())
  val rfDest = Output (5.W)


}

class DataSrcIO extends Bundle with Paramete{
  val src1 = Output(UInt(xlen.W))
  val src2 = Output(UInt(xlen.W))
  val Imm = Output(UInt(xlen.W))

}

class CtrlFlowIO extends Bundle with Paramete{
  val PC = Output(UInt(xlen.W))
  val inst = Output(UInt(instlen.W))
}

class MEMCtrlIO extends Bundle with Paramete{
  val addr = Output(UInt(xlen.W))
  val rdata = Input(UInt(xlen.W))
  val wdata = Output(UInt(xlen.W))
  val wmask = Output(UInt(masklen.W))
}

class CSRCtrlIO extends Bundle with Paramete{

}

class RFCtrlIO extends Bundle with Paramete{
  val rfDest = Output(5.W)
}

class FetchIO extends Bundle with Paramete{
  val PC = Output(UInt(xlen.W))
}

class BranchIO extends Bundle with Paramete{
  val is_branch = Output(Bool())
  val is_jump = Output(Bool())
  val dnpc = Output(Bool())
}

class DecoderIO extends Bundle with Paramete{
  val ctrl_rf = new RFCtrlIO
  val ctrl_signal = new CtrlSignalIO
  val ctrl_data = new DataSrcIO
}

