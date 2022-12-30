package One_cycle
import chisel3._
import chisel3.util._

object SIgEXtend{
  def apply(imm: UInt, len: Int): UInt ={

    val alen=imm.getWidth
    val sign = imm(alen-1)

    if(alen>=len) imm(len-1,0)
    else Cat(Fill(len-alen,sign),imm)
  }

}

object ZeroEXtend{
  def apply(imm: UInt, len: Int): UInt ={

    val alen=imm.getWidth

    if(alen>=len) imm(len-1,0)
    else Cat(Fill(len-alen,0.U),imm)
  }

}
