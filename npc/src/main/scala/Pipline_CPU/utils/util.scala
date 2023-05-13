package Pipline_CPU.utils

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
object UInt2Int{
  def apply(in:UInt): Int={
    val len = in.getWidth
    var num = 0
    for(i<-0 until len){
      num = num + 2^i
    }
    num
  }
}
object MaskGen{
  def apply(offset:UInt,mask:UInt): UInt={
    val len = scala.math.pow(2 , (offset.getWidth)).toInt
    val wmask_len = mask.getWidth
//    println(len)
//    println(wmask_len)
//    println(offset.getWidth)
    val Genmask = Cat(Fill((len-1-UInt2Int(offset)),Fill(wmask_len,0.U)),mask,Fill(UInt2Int(offset),Fill(wmask_len,0.U)))

    MaskExtend(Genmask)
  }
}

object LookupTree{
  def apply[T <: Data] (addr: UInt, mapping:Iterable[(UInt,T)] ): T=
    Mux1H(mapping.map(m=>(m._1 ===addr,m._2)))//m=> (),匿名函数,m 是输入，输出是()
}

//object  Lookup_List{
//  def apply[T <: Data] (sel:UInt,mapping:Iterable[(List[UInt],T)]): T =
//    Mux1H(mapping.map(m=>(m._1 === sel , m._2)))
//}
