//import "DPI-C" function void ebreak();
module DIP_model(input wire is_break);

always @(*) begin 
    if(is_break==1'b1) begin 
        //ebreak();
        $finish;
    end
end

endmodule 
