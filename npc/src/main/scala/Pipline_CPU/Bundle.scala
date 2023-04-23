package Pipline_CPU
import chisel3._
import chisel3.util._
import Pipline_CPU.frontend.SRCType
import Pipline_CPU.frontend.FUType
import Pipline_CPU.backend.ALUOPType

class CtrlSignalIO extends Bundle with Paramete{
  val src1Type = Output(SRCType())
  val src2Type = Output(SRCType())
  val fuType = Output(FUType())
  val inst_valid = Output(Bool())
  val rfSrc1 = Output(UInt(5.W))
  val rfSrc2 = Output(UInt(5.W))
  val rfWen = Output(Bool())
  val aluoptype = Output(ALUOPType())
  val rfDest = Output(UInt(5.W))
}

class DataSrcIO extends Bundle with Paramete{
  val src1 = Output(UInt(xlen.W))
  val src2 = Output(UInt(xlen.W))
  val Imm = Output(UInt(xlen.W))

}

class CtrlFlowIO extends Bundle with Paramete{
  val PC = Output(UInt(xlen.W))
  val inst = Output(UInt(instlen.W))
  val Dnpc = Output(UInt(xlen.W))
  val skip = Output(Bool())
}

class MEMCtrlIO extends Bundle with Paramete{
  val addr = Output(UInt(xlen.W))
  val rdata = Input(UInt(xlen.W))
  val wdata = Output(UInt(xlen.W))
  val wmask = Output(UInt(masklen.W))
  val ce = Output(Bool())
  val we =Output(Bool())
}

class CSRCtrlIO extends Bundle with Paramete{

}

class RFCtrlIO extends Bundle with Paramete{
  val rfDest = Output(UInt(5.W))
  val rfWen = Output(Bool())
  val rfData = Output(UInt(xlen.W))
}

class FetchIO extends Bundle with Paramete{
  val PC = Output(UInt(xlen.W))
  val Inst = Output(UInt(instlen.W))
}

class BranchIO extends Bundle with Paramete{
  val is_branch = Output(Bool())
  val is_jump = Output(Bool())
  val dnpc = Output(UInt(xlen.W))
}

class DecoderIO extends Bundle with Paramete{
  //val ctrl_rf = new RFCtrlIO
  val ctrl_signal = new CtrlSignalIO
  val ctrl_data = new DataSrcIO
  val ctrl_flow = new CtrlFlowIO
}

class MEMIO extends Bundle with Paramete{
  val ctrl_signal = new CtrlSignalIO
  val ctrl_flow = new CtrlFlowIO
  val ctrl_rf = new RFCtrlIO
  val ctrl_data = new DataSrcIO
}

class WBIO extends Bundle with Paramete{
  val ctrl_signal = new CtrlSignalIO
  val ctrl_flow = new CtrlFlowIO
  val ctrl_rf = new RFCtrlIO
}
class Mul_data_flow extends Bundle with  Paramete{
  val src1 = Input(UInt(xlen.W))
  val src2 = Input(UInt(xlen.W))
}
class Mul_ctrl_flow extends Bundle with Paramete{
  val flush = Input(Bool())
  val mulw = Input(Bool())
  val mul_sign = Input(UInt(2.W))
}
class Mul_data extends Bundle with Paramete{
  val result_hi = Output(UInt(xlen.W))
  val result_lo = Output(UInt(xlen.W))
}

class MUL_IN extends Bundle with Paramete{
  val ctrl_flow = new Mul_ctrl_flow
  val ctrl_data = new Mul_data_flow

}
class MUL_OUT extends Bundle with Paramete{
  val result = new Mul_data
}

//class ENDIO extends Bundle with Paramete{
//  val ctrl_flow = new CtrlFlowIO
//  val ctrl_rf = new RFCtrlIO
//
//}

