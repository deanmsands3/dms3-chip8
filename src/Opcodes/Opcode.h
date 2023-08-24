/**************************************************************
 * Id: $Id
 * Source: $Source
 * Author: $Author
 * File: $File
 * Revision: $Revision
 * Purpose: Header for Opcode class
 * Created by deansands on 6/28/23.
 **************************************************************/

#ifndef DMS3_CHIP8_OPCODE_H
#define DMS3_CHIP8_OPCODE_H
#include "../Constants.h"

namespace DMS3::Chip8 {
    class CPU;
    namespace Opcodes {
/*
            00E0 - CLS
            00EE - RET
            0nnn - SYS _addr
            1nnn - JP _addr
            2nnn - CALL _addr
            3xkk - SE Vx, byte
            4xkk - SNE Vx, byte
            5xy0 - SE Vx, Vy
            6xkk - LD Vx, byte
            7xkk - ADD Vx, byte
            8xy0 - LD Vx, Vy
            8xy1 - OR Vx, Vy
            8xy2 - AND Vx, Vy
            8xy3 - XOR Vx, Vy
            8xy4 - ADD Vx, Vy
            8xy5 - SUB Vx, Vy
            8xy6 - SHR Vx {, Vy}
            8xy7 - SUBN Vx, Vy
            8xyE - SHL Vx {, Vy}
            9xy0 - SNE Vx, Vy
            Annn - LD I, _addr
            Bnnn - JP V0, _addr
            Cxkk - RND Vx, byte
            Dxyn - DRW Vx, Vy, nibble
            Ex9E - SKP Vx
            ExA1 - SKNP Vx
            Fx07 - LD Vx, DT
            Fx0A - LD Vx, K
            Fx15 - LD DT, Vx
            Fx18 - LD ST, Vx
            Fx1E - ADD I, Vx
            Fx29 - LD F, Vx
            Fx33 - LD B, Vx
            Fx55 - LD [I], Vx
            Fx65 - LD Vx, [I]
      3.2 - Super Chip-48 Instructions
            00Cn - SCD nibble
            00FB - SCR
            00FC - SCL
            00FD - EXIT
            00FE - LOW
            00FF - HIGH
            Dxy0 - DRW Vx, Vy, 0
            Fx30 - LD HF, Vx
            Fx75 - LD R, Vx
            Fx85 - LD Vx, R
 * */

        class Opcode {
        private:
            uint16_t _raw_opcode;
        protected:
            explicit Opcode(uint16_t raw_opcode);

            virtual ~Opcode();

        public:
            [[nodiscard]] uint16_t get_raw_opcode() const;
            virtual void operate(CPU &cpu) const=0;
        };

    }   // namespace Opcodes
}   // namespace DMS3::Chip8

#endif //DMS3_CHIP8_OPCODE_H
