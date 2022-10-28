package ALU
import chisel3._
import chisel3.util._

class ALUIO extends Bundle{
  val A=Input(SInt(4.W))
  val B=Input(SInt(4.W))
  val Out_s=Output(SInt(4.W))
  val sel=Input(UInt(3.W))
  val Out_c=Output(UInt(1.W))
  val is_zero=Output(UInt(1.W))
}

class ALU extends Module{
  val io=IO(new ALUIO)

  switch(io.sel){
    is("b000".U){
      Cat(io.Out_c,io.Out_s) := io.A + io.B
    }
    is("b001".U) {
      Cat(io.Out_c,io.Out_s) := io.A - io.B

    }
    is("b010".U) {
      io.Out_s := ~io.A
      io.Out_c := 0.U
    }
    is("b011".U) {
      io.Out_s := io.A & io.B
      io.Out_c := 0.U
    }
    is("b100".U) {
      io.Out_s := io.A | io.B
      io.Out_c := 0.U
    }
    is("b101".U) {
      io.Out_s := io.A ^ io.B
      io.Out_c := 0.U
    }
    is("b110".U) {
      io.Out_s := Mux((io.A<io.B),1.S,0.S)
      io.Out_c := 0.U
    }
    is("b111".U) {
      io.Out_s := Mux((io.A === io.B), 1.S, 0.S)
      io.Out_c := 0.U
    }

  }
  io.is_zero := Mux((io.Out_s === 0.S),1.U,0.U)

}
