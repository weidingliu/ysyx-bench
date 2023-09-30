package Pipline_CPU.utils

import Pipline_CPU.cache.CacheParamete
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

object MaskExtend{
  def apply(mask:UInt): UInt={
    Cat(mask.asBools.map(Fill(8,_)).reverse)
  }
}

object MaskData{
  def apply(olddata:UInt,mask:UInt,newdata:UInt): UInt={
    (olddata & (~mask)(mask.getWidth-1,0)) | (newdata & mask)
  }
}


object LookupTree{
  def apply[T <: Data] (addr: UInt, mapping:Iterable[(UInt,T)] ): T=
    Mux1H(mapping.map(m=>(m._1 ===addr,m._2)))//m=> (),匿名函数,m 是输入，输出是()
}

object MaskGen extends CacheParamete{
  def apply(offset:UInt,mask:UInt)={
    //    val len = scala.math.pow(2 , (offset.getWidth)).toInt
    val wmask_len = mask.getWidth
//    val Genmask = WireDefault(0.U)
//    println(offset)
//    val Genmask = MuxCase(0.U(Cache_line_wordnum.W),Seq(
//      (offset === WireInit("b000".U)) -> Cat(Fill(7 * wmask_len, 0.U), mask),
//      (offset === WireInit("b001".U)) -> Cat(Fill(6 * wmask_len, 0.U), mask, Fill(1 * wmask_len, 0.U)),
//      (offset === WireInit("b010".U)) -> Cat(Fill(5 * wmask_len, 0.U), mask, Fill(2 * wmask_len, 0.U)),
//      (offset === WireInit("b011".U)) -> Cat(Fill(4 * wmask_len, 0.U), mask, Fill(3 * wmask_len, 0.U)),
//      (offset === WireInit("b100".U)) -> Cat(Fill(3 * wmask_len, 0.U), mask, Fill(4 * wmask_len, 0.U)),
//      (offset === WireInit("b101".U)) -> Cat(Fill(2 * wmask_len, 0.U), mask, Fill(5 * wmask_len, 0.U)),
//      (offset === WireInit("b110".U)) -> Cat(Fill(1 * wmask_len, 0.U), mask, Fill(6 * wmask_len, 0.U)),
//      (offset === WireInit("b111".U)) -> Cat(mask, Fill(7 * wmask_len, 0.U)),
//    ))
val Genmask = MuxCase(0.U(Cache_line_wordnum.W), Seq(
  (offset === WireInit("b00".U)) -> Cat(Fill(3 * wmask_len, 0.U), mask),
  (offset === WireInit("b01".U)) -> Cat(Fill(2 * wmask_len, 0.U), mask, Fill(1 * wmask_len, 0.U)),
  (offset === WireInit("b10".U)) -> Cat(Fill(1 * wmask_len, 0.U), mask, Fill(2 * wmask_len, 0.U)),
  (offset === WireInit("b11".U)) -> Cat(mask, Fill(3 * wmask_len, 0.U)),
))
//    println(Genmask.getWidth)
    MaskExtend(Genmask)
//    switch(offset) {
//      is("b000".U) {
//        Genmask := Cat(Fill(7 * wmask_len, 0.U), mask)
//      }
//      is("b001".U) {
//        Genmask := Cat(Fill(6 * wmask_len, 0.U), mask, Fill(1 * wmask_len, 0.U))
//      }
//
//      is("b010".U) {
//        Genmask := Cat(Fill(5 * wmask_len, 0.U), mask, Fill(2 * wmask_len, 0.U))
//      }
//
//      is("b011".U) {
//        Genmask := Cat(Fill(4 * wmask_len, 0.U), mask, Fill(3 * wmask_len, 0.U))
//      }
//
//      is("b100".U) {
//        Genmask := Cat(Fill(3 * wmask_len, 0.U), mask, Fill(4 * wmask_len, 0.U))
//      }
//
//      is("b101".U) {
//        Genmask := Cat(Fill(2 * wmask_len, 0.U), mask, Fill(5 * wmask_len, 0.U))
//      }
//
//      is("b110".U) {
//        Genmask := Cat(Fill(1 * wmask_len, 0.U), mask, Fill(6 * wmask_len, 0.U))
//      }
//
//      is("b111".U) {
//        Genmask := Cat(Fill(0 * wmask_len, 0.U), mask, Fill(7 * wmask_len, 0.U))
//      }
//
//    }
//
//    MaskExtend(Genmask)
  }
}


//object  Lookup_List{
//  def apply[T <: Data] (sel:UInt,mapping:Iterable[(List[UInt],T)]): T =
//    Mux1H(mapping.map(m=>(m._1 === sel , m._2)))
//}
