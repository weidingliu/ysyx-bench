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

object LookupTree{
  def apply[T <: Data] (addr: UInt, mapping:Iterable[(UInt,T)] ): T=
    Mux1H(mapping.map(m=>(m._1 ===addr,m._2)))//m=> (),匿名函数,m 是输入，输出是()
}

//object  Lookup_List{
//  def apply[T <: Data] (sel:UInt,mapping:Iterable[(List[UInt],T)]): T =
//    Mux1H(mapping.map(m=>(m._1 === sel , m._2)))
//}
