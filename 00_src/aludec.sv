`timescale 1ns/1ps

module aludec
(
    input   logic           opb5,
    input   logic   [2:0]   funct3,
    input   logic           funct7b5,
    input   logic   [1:0]   ALUOp,
    input   logic           ALUSrcDb1,
    output  logic   [3:0]   ALUControlD
);

logic   RtypeSub;
assign  RtypeSub = funct7b5 & opb5;  // TRUE for R–type subtract, FALSE for add

always_comb
    case(ALUOp)
        2'b00:                      ALUControlD = 3'b0000; // addition
        2'b01:                      ALUControlD = 3'b0001; // subtraction
        2'b10: 
            case(funct3) // R-type or I-type ALU 
                3'b000:  
                    if (RtypeSub)   ALUControlD = 4'b0001; // beq, bne (sub)
                    else            ALUControlD = 4'b0000; // add, addi 
                3'b001:             ALUControlD = 4'b0110; // sll, slli 
                3'b010:             ALUControlD = 4'b0101; // slt, slti, blt, bge
                3'b011:             ALUControlD = 4'b1001; // sltu, sltui, bltu, bgeu
                3'b100:             ALUControlD = 4'b0100; // xor, xori 
                3'b101: 
                    if (funct7b5)   ALUControlD = 4'b1000; // sra, srai 
                    else            ALUControlD = 4'b0111; // srl, srli 
                3'b110:             ALUControlD = 4'b0011; // or, ori 
                3'b111:             ALUControlD = 4'b0010; // and, andi 
                default:            ALUControlD = 4'bxxxx;  
            endcase
        2'b11:                      
            case(ALUSrcDb1)
                1'b0:               ALUControlD = 4'b1011; // lui
                1'b1:               ALUControlD = 4'b1100; // auipc
            endcase
        default:                    ALUControlD = 4'bxxxx;
    endcase

endmodule:aludec

