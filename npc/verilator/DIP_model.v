import "DPI-C" function void ebreak();
module DIP-model(input wire is_break);

always @(*) begin 
    if(is_break==1'b1) begin 
        ebreak();
    end
end

endmodule 
