package prior_encoder_83
import chiseltest._
import chisel3._
import org.scalatest.freespec._

class encoder_test extends AnyFreeSpec  with ChiselScalatestTester {
    "encoder" in{
      test(new prior_encoder_83()){c=>
        c.io.in.poke("b00000000".U)
        c.io.out.expect("b000".U)
        c.io.flag.expect("b0".U)
        println("result is " + c.io.out.peek().toString())

        c.io.in.poke("b00000001".U)
        c.io.out.expect("b000".U)
        c.io.flag.expect("b1".U)
        println("result is " + c.io.out.peek().toString())

        c.io.in.poke("b10000000".U)
        c.io.out.expect("b111".U)
        c.io.flag.expect("b1".U)
        println("result is " + c.io.out.peek().toString())

        c.io.in.poke("b00001000".U)
        c.io.out.expect("b011".U)
        c.io.flag.expect("b1".U)
        println("result is " + c.io.out.peek().toString())
      }
    }
}
