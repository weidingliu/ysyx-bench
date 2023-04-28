package Pipline_CPU.backend
import Pipline_CPU.Paramete
import chisel3._
import chisel3.util._
import Pipline_CPU.DIV_IN
import Pipline_CPU.DIV_OUT



class DIV (div_len:Int)extends Module with Paramete{
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new DIV_IN(div_len)))
    val out = Decoupled(new DIV_OUT(div_len))
  })
  val iDLE :: rUN :: eND :: Nil = Enum(3)
  val state = RegInit(iDLE)
  val count = Counter(state === rUN,)
  when(!io.in.valid && io.in.bits.ctrl_flow.flush){
    state := iDLE
  }.elsewhen(){

  }

}
