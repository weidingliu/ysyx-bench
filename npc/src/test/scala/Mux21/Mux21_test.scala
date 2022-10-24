package Mux21
import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec


class Mux21_test extends AnyFreeSpec with ChiselScalatestTester {

  "Mux21" in {
    test(new Mux21()) { c=>
      c.io.s.poke(0.U)
      c.io.a.poke(0.U)
      c.io.b.poke(1.U)
      c.io.y.expect(0.U)
      println("result is "+ c.io.y.peek().toString())

      c.io.s.poke(0.U)
      c.io.a.poke(1.U)
      c.io.b.poke(1.U)
      c.io.y.expect(1.U)
      println("result is " + c.io.y.peek().toString())

      c.io.s.poke(0.U)
      c.io.a.poke(1.U)
      c.io.b.poke(0.U)
      c.io.y.expect(1.U)
      println("result is " + c.io.y.peek().toString())

      c.io.s.poke(1.U)
      c.io.a.poke(0.U)
      c.io.b.poke(1.U)
      c.io.y.expect(1.U)
      println("result is " + c.io.y.peek().toString())

      c.io.s.poke(1.U)
      c.io.a.poke(1.U)
      c.io.b.poke(1.U)
      c.io.y.expect(1.U)
      println("result is " + c.io.y.peek().toString())

    }
  }
}
