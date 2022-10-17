package Double_Switch

import chisel3._
import chisel3.stage._
//import java.sql.Driver

object Spec extends App{
  (new ChiselStage).emitVerilog(new Double_Switch())
}
