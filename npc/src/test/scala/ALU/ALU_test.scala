package ALU

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
class ALU_test extends AnyFreeSpec with ChiselScalatestTester {
  "ALU" in {
    test(new ALU()) {c=>
      c.io.A.poke(7.S)
      c.io.B.poke((7.S))
      c.io.sel.poke(0.U)
//      c.io.Out_s.expect(5.U)
      println("result is " + c.io.Out_s.peek().toString()+"cout is "+ c.io.Out_c.peek().toString())

      c.io.A.poke(3.S)
      c.io.B.poke((2.S))
      c.io.sel.poke(1.U)
      c.io.Out_s.expect(1.U)
      println("result is " + c.io.Out_s.peek().toString())

      c.io.A.poke(3.S)
      c.io.B.poke((-2.S))
      c.io.sel.poke(1.U)
      c.io.Out_s.expect(5.U)
      println("result is " + c.io.Out_s.peek().toString())

      c.io.A.poke(0.S)
      c.io.B.poke((2.S))
      c.io.sel.poke(2.U)
      c.io.Out_s.expect(15.U)
      println("result is " + c.io.Out_s.peek().toString())

      c.io.A.poke(0.S)
      c.io.B.poke((2.S))
      c.io.sel.poke(3.U)
      c.io.Out_s.expect(0.U)
      println("result is " + c.io.Out_s.peek().toString()+"cout is "+ c.io.Out_c.peek().toString()+"is_zero"+c.io.is_zero.peek().toString())

      c.io.A.poke(0.S)
      c.io.B.poke((4.S))
      c.io.sel.poke(4.U)
      c.io.Out_s.expect(4.U)
      println("result is " + c.io.Out_s.peek().toString()+c.io.Out_c.peek().toString())

      c.io.A.poke(0.S)
      c.io.B.poke((2.S))
      c.io.sel.poke(5.U)
      c.io.Out_s.expect(2.U)
      println("result is " + c.io.Out_s.peek().toString())

      c.io.A.poke(3.S)
      c.io.B.poke((2.S))
      c.io.sel.poke(6.U)
      c.io.Out_s.expect(0.U)
      println("result is " + c.io.Out_s.peek().toString())

      c.io.A.poke(3.S)
      c.io.B.poke((3.S))
      c.io.sel.poke(7.U)
      c.io.Out_s.expect(1.U)
      println("result is " + c.io.Out_s.peek().toString())
    }
  }
}
