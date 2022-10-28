package ALU
import chisel3._
import chisel3.util._

class ALUIO extends Bundle{
  val A=Input(SInt(4.W))
  val B=Input(SInt(4.W))
  val Out_s=Output(SInt(4.W))
  val sel=Input(UInt(3.W))
  val Out_c=Output(Bool())
  val is_zero=Output(Bool())
}

class ALU extends Module{
  val io=IO(new ALUIO)
  val temp=WireDefault(0.S(5.W))
  switch(io.sel){
    is("b000".U){
      temp := io.A + io.B
    }
    is("b001".U) {
      temp := io.A - io.B

    }
    is("b010".U) {
      temp := ~io.A

    }
    is("b011".U) {
      temp := io.A & io.B

    }
    is("b100".U) {
      temp := io.A | io.B

    }
    is("b101".U) {
      temp := io.A ^ io.B

    }
    is("b110".U) {
      temp := Mux((io.A<io.B),1.S,0.S)

    }
    is("b111".U) {
      temp := Mux((io.A === io.B), 1.S, 0.S)

    }

  }
  io.is_zero := Mux((io.Out_s === 0.S),1.B,0.B)
  io.Out_c := temp(4)
  val p=Wire(SInt())
  p := temp(3,0)
  io.Out_s := p

}
