package Mux41
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
import chisel3._

class Mux41_test extends AnyFreeSpec with ChiselScalatestTester {

    "Mux41" in{
      test(new Mux41()) { c=>
        c.io.x_0.poke(1.U(2.W))
        c.io.x_1.poke(1.U(2.W))
        c.io.x_2.poke(1.U(2.W))
        c.io.x_3.poke(1.U(2.W))
        c.io.s.poke(0.U(2.W))
        c.io.out.expect(1.U(2.W))
        println("result is "+ c.io.out.peek().toString())

        c.io.x_0.poke(0.U(2.W))
        c.io.x_1.poke(1.U(2.W))
        c.io.x_2.poke(1.U(2.W))
        c.io.x_3.poke(1.U(2.W))
        c.io.s.poke(0.U(2.W))
        c.io.out.expect(0.U(2.W))
        println("result is " + c.io.out.peek().toString())

        c.io.x_0.poke(1.U(2.W))
        c.io.x_1.poke(2.U(2.W))
        c.io.x_2.poke(1.U(2.W))
        c.io.x_3.poke(1.U(2.W))
        c.io.s.poke(1.U(2.W))
        c.io.out.expect(2.U(2.W))
        println("result is " + c.io.out.peek().toString())

        c.io.x_0.poke(1.U(2.W))
        c.io.x_1.poke(1.U(2.W))
        c.io.x_2.poke(1.U(2.W))
        c.io.x_3.poke(3.U(2.W))
        c.io.s.poke(3.U(2.W))
        c.io.out.expect(3.U(2.W))
        println("result is " + c.io.out.peek().toString())

      }
    }
}
