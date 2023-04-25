package Pipline_CPU.backend
import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
class ALU_test extends AnyFreeSpec with ChiselScalatestTester {

  "ALU" in {
    test(new Shift_MUL(64)) { c =>
      var i=0
      c.io.in.bits.ctrl_data.src1.poke("hFFFFFFFFAEB1C2AA".U(64.W))
      c.io.in.bits.ctrl_data.src2.poke("hFFFFFFFFAEB1C2AA".U(64.W))
      c.io.in.bits.ctrl_flow.flush.poke(0.B)
      c.io.in.valid.poke(1.B)
      while (i<=64){
        c.clock.step()
        i=i+1
      }
      println("result is " + c.io.out.bits.result.result_hi.peek().toString() + " cout is " + c.io.out.bits.result.result_lo.peek().toString())
//      println("valid is " + c.io.out.valid.peek().toString() + "dfagfdg "+ (0xFFFFFFFFAEB1C2AA * 0xFFFFFFFFAEB1C2AA))

      c.io.in.valid.poke(0.B)
      c.clock.step()

//      i = 0
//      c.io.in.bits.ctrl_data.src1.poke(9.U(32.W))
//      c.io.in.bits.ctrl_data.src2.poke(9.U(32.W))
//      c.io.in.bits.ctrl_flow.flush.poke(0.B)
//      c.io.in.valid.poke(1.B)
//      while (i <= 32) {
//        c.clock.step()
//        i = i + 1
////        println("result is " + c.io.out.bits.result.result_hi.peek().toString() + " cout is " + c.io.out.bits.result.result_lo.peek().toString())
////        println("valid is " + c.io.out.valid.peek().toString())
//      }
//      println("result is " + c.io.out.bits.result.result_hi.peek().toString() + " cout is " + c.io.out.bits.result.result_lo.peek().toString())
//      println("valid is " + c.io.out.valid.peek().toString())
//
//      c.io.in.valid.poke(0.B)
//      c.clock.step()
//      i = 0
//      c.io.in.bits.ctrl_data.src1.poke(120.U(32.W))
//      c.io.in.bits.ctrl_data.src2.poke(3.U(32.W))
//      c.io.in.bits.ctrl_flow.flush.poke(0.B)
//      c.io.in.valid.poke(1.B)
//      while (i <= 32) {
//        c.clock.step()
//        i = i + 1
//      }
//      println("result is " + c.io.out.bits.result.result_hi.peek().toString() + " cout is " + c.io.out.bits.result.result_lo.peek().toString())
//      println("valid is " + c.io.out.valid.peek().toString())
//
//
//      c.io.in.valid.poke(0.B)
//      c.clock.step()
//
//      i = 0
//      c.io.in.bits.ctrl_data.src1.poke(3.U(32.W))
//      c.io.in.bits.ctrl_data.src2.poke(18.U(32.W))
//      c.io.in.bits.ctrl_flow.flush.poke(0.B)
//      c.io.in.valid.poke(1.B)
//      while (i <= 32) {
//        c.clock.step()
//        i = i + 1
//      }
//      println("result is " + c.io.out.bits.result.result_hi.peek().toString() + " cout is " + c.io.out.bits.result.result_lo.peek().toString())
//      println("valid is " + c.io.out.valid.peek().toString())
    }
  }

}
