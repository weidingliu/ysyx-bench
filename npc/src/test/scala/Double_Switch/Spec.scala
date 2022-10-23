package scala.Double_Switch

import Double_Switch.Double_Switch
import chisel3.stage._
import chiseltest.
//import java.sql.Driver

object Spec extends App{
  (new ChiselStage).emitVerilog(new Double_Switch(),Array("--target-dir", "build"))
}

//object Spec extends App {
//  Driver.execute(args, () => new Double_Switch)
//}
