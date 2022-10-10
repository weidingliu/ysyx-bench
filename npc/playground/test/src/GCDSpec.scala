//package DoubleSwitch
import chisel3._
import chisel3.tester._
import chiseltest.RawTester.test
import chiseltest._
test(new DoubleSwitch()){c=>
  c.io.a.poke(0.U)
  c.io.b.poke(0.U)
  c.io.a.expect(0.U)

  c.io.a.poke(1.U)
  c.io.b.poke(0.U)
  c.io.a.expect(0.U)

  c.io.a.poke(1.U)
  c.io.b.poke(1.U)
  c.io.a.expect(1.U)
}
//println("Succeed!!")

