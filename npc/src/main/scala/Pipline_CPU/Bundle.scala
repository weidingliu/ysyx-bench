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
class Mul_data_flow (mul_len:Int)extends Bundle with  Paramete{
  val src1 = Input(UInt(mul_len.W))
  val src2 = Input(UInt(mul_len.W))
}
class Mul_ctrl_flow extends Bundle with Paramete{
  val flush = Input(Bool())
  val mulw = Input(Bool())
  val mul_sign = Input(UInt(2.W))
}
class Mul_data (mul_len:Int)extends Bundle with Paramete{
  val result_hi = Output(UInt(mul_len.W))
  val result_lo = Output(UInt(mul_len.W))
}

class MUL_IN (mul_len:Int)extends Bundle with Paramete{
  val ctrl_flow = new Mul_ctrl_flow
  val ctrl_data = new Mul_data_flow(mul_len)

}
class MUL_OUT (mul_len:Int)extends Bundle with Paramete{
  val result = new Mul_data(mul_len)
}

class DIV_ctrl_flow extends Bundle with Paramete{
  val divw = Output(Bool())
  val div_signed = Output(Bool())
  val flush = Output(Bool())
}
class DIV_data_flow (div_len:Int)extends Bundle with Paramete{
  val src1 = Output(UInt(div_len.W))
  val src2 = Output(UInt(div_len.W))
}
class DIV_data (div_len:Int)extends Bundle with Paramete{
  val quotient = Output(UInt(div_len.W))
  val remainder = Output(UInt(div_len.W))
}

class DIV_IN (div_len:Int)extends Bundle with Paramete{
  val ctrl_flow = new DIV_ctrl_flow
  val ctrl_data = new DIV_data_flow(div_len)
}
class DIV_OUT (div_len:Int)extends Bundle with Paramete{
  val result = new DIV_data(div_len)
}

////////////////////////////////////////cache
class ADDRBus extends Bundle with Paramete{
  val addr = Output(UInt(xlen.W))
  val ce = Output(Bool())
  val we = Output(Bool())
}
class ReadDataBus extends Bundle with Paramete{
  val rdata = Output(UInt(xlen.W))
}
class WriteDataBus extends Bundle with Paramete{
  val wdata = Output(UInt(xlen.W))
  val wmask = Output(UInt(masklen.W))
}


class ICache_req extends Bundle with Paramete{
  val addr_req = Flipped(Decoupled(new ADDRBus))
  val rdata_rep = Decoupled(new ReadDataBus)
}

class Cache_MemReq_Bundle (Type : String)extends Bundle with Paramete{
  val addr_req = Flipped(Decoupled(new ADDRBus))
  val rdata_rep = Decoupled(new ReadDataBus)
  val wdata_req = if(Type == "Dcache") Some(Flipped(Decoupled(new WriteDataBus))) else None
  val wdata_rep = if(Type == "Dcache") Some(Output(Bool())) else None
}

class CPU_Cache_Bundle (Type : String)extends Bundle with Paramete{
  val addr_req = Decoupled(new ADDRBus)
  val rdata_rep = Flipped(Decoupled(new ReadDataBus))
  val wdata_req = if (Type == "Dcache") Some(Decoupled(new WriteDataBus)) else None
  val wdata_rep = if (Type == "Dcache") Some(Input(Bool())) else None
}

class CPU_MEM_Bundle (Type : String)extends Bundle with Paramete{
  val addr_req = Decoupled(new ADDRBus)
  val rdata_rep = Flipped(Decoupled(new ReadDataBus))
  val wdata_req = if (Type == "WRIO") Some(Decoupled(new WriteDataBus)) else None
  val wdata_rep = if (Type == "WRIO") Some(Input(Bool())) else None
}

//class Cache extends Bundle with Paramete{
//
//}



