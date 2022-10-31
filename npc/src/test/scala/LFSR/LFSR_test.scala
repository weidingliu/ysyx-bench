package LFSR
import chiseltest._
import chisel3._
import org.scalatest.freespec._

class LFSR_test extends AnyFreeSpec with ChiselScalatestTester {
  "LFSR" in{
    test(new LFSR()){c=>
      c.io.en.step()
//      c.io.out1.expect(6.U)
      c.io.en.poke(1.B)
      c.io.out1.expect(8.U)


    }
  }
}
