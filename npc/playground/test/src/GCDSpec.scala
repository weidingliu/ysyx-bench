package DoubleSwitch

//package org.scalatest.examples.flatspec
import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec


class GCDSpec extends AnyFlatSpec with ChiselScalatestTester{
  behavior of "doubleswitch"
  it should "pass" in{
    test(new DoubleSwitch()) { c =>
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

//object TestSimple extends App{
//  chiseltest.
//  (()=> new DeviceUnderTest())
//}
//

