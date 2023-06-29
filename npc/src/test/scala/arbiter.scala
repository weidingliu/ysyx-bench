//package Pipline_CPU.axi
//import chisel3._
//import chiseltest._
//import org.scalatest.freespec.AnyFreeSpec
//
//
//class Arbiter_test extends AnyFreeSpec with ChiselScalatestTester {
//
//  "ALU" in {
//    test(new AxiArbiter()) { c =>
//      c.reset.poke(1.B)
//      c.clock.step()
//      c.clock.step()
//      c.reset.poke(0.B)
//      c.clock.step()
//      c.clock.step()
//
//      c.io.in1.raddr_req.valid.poke(1.B)
//      c.io.in1.raddr_req.bits.addr.poke(2.U)
//
//      println(c.io.out.raddr_req.valid.peek().toString() + "  " + c.io.out.raddr_req.bits.addr.peek().toString())
//      c.clock.step()
//      c.io.out.rdata_rep.valid.poke(1.B)
//      c.io.out.rdata_rep.bits.rdata.poke(3.U)
//      println(c.io.in1.rdata_rep.valid.peek().toString() + "  " + c.io.in1.rdata_rep.bits.rdata.peek().toString())
//
//      c.clock.step()
//
//      c.io.in1.raddr_req.valid.poke(1.B)
//      c.io.in1.raddr_req.bits.addr.poke(2.U)
//
//      c.io.in2.raddr_req.valid.poke(1.B)
//      c.io.in2.raddr_req.bits.addr.poke(5.U)
//
//      println(c.io.out.raddr_req.valid.peek().toString() + "  " + c.io.out.raddr_req.bits.addr.peek().toString())
//      c.clock.step()
//      c.io.out.rdata_rep.valid.poke(1.B)
//      c.io.out.rdata_rep.bits.rdata.poke(3.U)
//      println(c.io.in1.rdata_rep.valid.peek().toString() + "  " + c.io.in1.rdata_rep.bits.rdata.peek().toString())
//
//      c.clock.step()
//
//      c.io.in1.raddr_req.valid.poke(0.B)
//      println(c.io.out.raddr_req.valid.peek().toString() + "  " + c.io.out.raddr_req.bits.addr.peek().toString())
//      c.clock.step()
//      c.io.out.rdata_rep.valid.poke(1.B)
//      c.io.out.rdata_rep.bits.rdata.poke(6.U)
//      println(c.io.in2.rdata_rep.valid.peek().toString() + "  " + c.io.in2.rdata_rep.bits.rdata.peek().toString())
//
////      //      c.io.in.bits.ctrl_flow.mulw.poke(0.U)
////      while (i<65){
////        c.clock.step()
////        i=i+1
////        //        println("result is " + c.io.out.bits.result.quotient.peek().toString() + " cout is " + c.io.out.bits.result.remainder.peek().toString())
////        //        println("valid is " + c.io.out.valid.peek().toString())
////        //        println("dsffg " + c.count.toString())
////      }
////      println("result is " + c.io.out.bits.result.quotient.peek().toString() + " cout is " + c.io.out.bits.result.remainder.peek().toString())
////      println("valid is " + c.io.out.valid.peek().toString())
////
////      c.clock.step()
////      i = 0
////      c.io.in.bits.ctrl_data.src1.poke(12.U(64.W))
////      c.io.in.bits.ctrl_data.src2.poke(3.U(64.W))
////      c.io.in.bits.ctrl_flow.flush.poke(0.B)
////      c.io.in.valid.poke(1.B)
////      c.io.in.bits.ctrl_flow.div_signed.poke("b0".U)
////      c.io.in.bits.ctrl_flow.flush.poke(0.U)
////      //      c.io.in.bits.ctrl_flow.mulw.poke(0.U)
////      while (i < 65) {
////        c.clock.step()
////        i = i + 1
////        //        println("result is " + c.io.out.bits.result.quotient.peek().toString() + " cout is " + c.io.out.bits.result.remainder.peek().toString())
////        //        println("valid is " + c.io.out.valid.peek().toString())
////      }
////      println("result is " + c.io.out.bits.result.quotient.peek().toString() + " cout is " + c.io.out.bits.result.remainder.peek().toString())
////      println("valid is " + c.io.out.valid.peek().toString())
//
//
//    }
//  }
//
//}