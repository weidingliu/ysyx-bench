package Pipline_CPU.backend
import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec

class DIV_test extends AnyFreeSpec with ChiselScalatestTester {

  "ALU" in {
    test(new Radix_DIV(64)) { c =>
      c.reset.poke(1.B)
      c.clock.step()
      c.clock.step()
      c.reset.poke(0.B)
      c.clock.step()
      c.clock.step()
      var i=0
      c.io.in.bits.ctrl_data.src1.poke(9.U(64.W))
      c.io.in.bits.ctrl_data.src2.poke(3.U(64.W))
      c.io.in.bits.ctrl_flow.flush.poke(0.B)
      c.io.in.valid.poke(1.B)
      c.io.in.bits.ctrl_flow.div_signed.poke("b0".U)
      c.io.in.bits.ctrl_flow.flush.poke(0.U)
//      c.io.in.bits.ctrl_flow.mulw.poke(0.U)
      while (i<65){
        c.clock.step()
        i=i+1
//        println("result is " + c.io.out.bits.result.quotient.peek().toString() + " cout is " + c.io.out.bits.result.remainder.peek().toString())
//        println("valid is " + c.io.out.valid.peek().toString())
//        println("dsffg " + c.count.toString())
      }
      println("result is " + c.io.out.bits.result.quotient.peek().toString() + " cout is " + c.io.out.bits.result.remainder.peek().toString())
      println("valid is " + c.io.out.valid.peek().toString())

      c.clock.step()
      i = 0
      c.io.in.bits.ctrl_data.src1.poke(12.U(64.W))
      c.io.in.bits.ctrl_data.src2.poke(3.U(64.W))
      c.io.in.bits.ctrl_flow.flush.poke(0.B)
      c.io.in.valid.poke(1.B)
      c.io.in.bits.ctrl_flow.div_signed.poke("b0".U)
      c.io.in.bits.ctrl_flow.flush.poke(0.U)
      //      c.io.in.bits.ctrl_flow.mulw.poke(0.U)
      while (i < 65) {
        c.clock.step()
        i = i + 1
        //        println("result is " + c.io.out.bits.result.quotient.peek().toString() + " cout is " + c.io.out.bits.result.remainder.peek().toString())
        //        println("valid is " + c.io.out.valid.peek().toString())
      }
      println("result is " + c.io.out.bits.result.quotient.peek().toString() + " cout is " + c.io.out.bits.result.remainder.peek().toString())
      println("valid is " + c.io.out.valid.peek().toString())

      c.clock.step()
      i = 0
      c.io.in.bits.ctrl_data.src1.poke(13.U(64.W))
      c.io.in.bits.ctrl_data.src2.poke(3.U(64.W))
      c.io.in.bits.ctrl_flow.flush.poke(0.B)
      c.io.in.valid.poke(1.B)
      c.io.in.bits.ctrl_flow.div_signed.poke("b0".U)
      c.io.in.bits.ctrl_flow.flush.poke(0.U)
      //      c.io.in.bits.ctrl_flow.mulw.poke(0.U)
      while (i < 65) {
        c.clock.step()
        i = i + 1
        //        println("result is " + c.io.out.bits.result.quotient.peek().toString() + " cout is " + c.io.out.bits.result.remainder.peek().toString())
        //        println("valid is " + c.io.out.valid.peek().toString())
      }
      println("result is " + c.io.out.bits.result.quotient.peek().toString() + " cout is " + c.io.out.bits.result.remainder.peek().toString())
      println("valid is " + c.io.out.valid.peek().toString())

    }
  }

}
