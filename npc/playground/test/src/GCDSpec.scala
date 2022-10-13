import DoubleSwitch._
import chisel3._
import chisel3.experimental.BundleLiterals._
import chisel3.tester._
import chiseltest.iotesters._
//import chiseltest.{ChiselScalatestTester, _}
import org.scalatest.freespec.AnyFreeSpec
class GCDSpec extends AnyFreeSpec with ChiselScalatestTester{

  test(new DoubleSwitch()) { c =>
    c.io.a.poke(0.U)
    c.io.b.poke(0.U)
    c.io.out.expect(0.U)
    println("Result is:" +c.io.out.peek().toString() )
    c.io.a.poke(1.U)
    c.io.b.poke(0.U)
    c.io.out.expect(0.U)
    println("Result is:" +c.io.out.peek().toString() )
    c.io.a.poke(1.U)
    c.io.b.poke(1.U)
    c.io.out.expect(1.U)
    println("Result is:" +c.io.out.peek().toString() )
  }
  println("Succeed!!")
}

//object TestSimple extends App{
//  chiseltest.
//  (()=> new DeviceUnderTest())
//}
//

