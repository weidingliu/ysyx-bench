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
  switch(io.aluoptype){
    is(ALUOPType.ld){
      wmask_temp := 0.U(masklen.W)
      wdata_temp:= 0.U(xlen.W)
    }
    is(ALUOPType.sd){
      wmask_temp := "b11111111".U
      wdata_temp:= src2
    }
  }
  switch(io.aluoptype){
    is(ALUOPType.ld){
      addr_temp := src1 + src2
    }
    is(ALUOPType.sd){
      addr_temp := src1+io.Imm
    }
  }

  io1.wmask := wmask_temp
  io1.wdata:=wdata_temp
  io1.addr:=addr_temp
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
    is(ALUOPType.or){
      alu_result := src1 | src2
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
      result_tem:= 0.U(xlen.W)
    }
    is(FUType.mem){
      result_tem := io1.rdata
    }
  }
  io1.result:= result_tem

  io1.is_jump := Mux(io.futype===FUType.jump,1.U,0.U)
//  io1.is_jump := Mux(io.futype===FUType.branch,1.U,0.U)

  switch(io.aluoptype){
    is(ALUOPType.jal) {
      dnpc := src1 + src2
    }
    is(ALUOPType.jalr){
      dnpc := Cat((src1+src2)(xlen-1,1),0.U)
    }
  }


  io1.dnpc := dnpc
  io1.is_branch := 0.U

}
