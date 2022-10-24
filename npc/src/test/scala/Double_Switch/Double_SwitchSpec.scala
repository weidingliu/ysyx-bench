package Double_Switch

//import chisel3._
//import chisel3.experimental.BundleLiterals._
//import chisel3.experimental._
//import chisel3.tester._
import chisel3._
import chisel3.util._
import chiseltest._
import org.scalatest._
import org.scalatest.freespec.AnyFreeSpec

import scala.util._

//https://blog.csdn.net/qq_34291505/article/details/87880730?spm=1001.2101.3001.6661.1&utm_medium=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-1-87880730-blog-125401079.pc_relevant_multi_platform_whitelistv3&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-1-87880730-blog-125401079.pc_relevant_multi_platform_whitelistv3&utm_relevant_index=1
//object Double_SwitchSpec extends App{
//    test(new Double_Switch()) { c =>
//      c.io.a.poke(0.U)
//      c.io.b.poke(0.U)
//      c.io.out.expect(0.U)
//      println("Result is:" + c.io.out.peek().toString())
//      c.io.a.poke(1.U)
//      c.io.b.poke(0.U)
//      c.io.out.expect(0.U)
//      println("Result is:" + c.io.out.peek().toString())
//      c.io.a.poke(1.U)
//      c.io.b.poke(1.U)
//      c.io.out.expect(1.U)
//      println("Result is:" + c.io.out.peek().toString())
//    }
//    println("Succeed!!")
//}

class Double_SwitchSpec extends AnyFreeSpec with ChiselScalatestTester{
  "switch should" in {
    test(new Double_Switch()).withAnnotations(Seq(WriteVcdAnnotation)) { c =>
            c.io.a.poke(0.U)
            c.io.b.poke(0.U)
            c.io.out.expect(0.U)
            println("Result is:" + c.io.out.peek().toString())
            c.io.a.poke(1.U)
            c.io.b.poke(0.U)
            c.io.out.expect(0.U)
            println("Result is:" + c.io.out.peek().toString())
            c.io.a.poke(1.U)
            c.io.b.poke(1.U)
            c.io.out.expect(1.U)
            println("Result is:" + c.io.out.peek().toString())
          }
          println("Succeed!!")

  }

}
