//
// Created by User on 2023-08-24.
//

#include "Call.h"
#include "../CPU.h"
namespace DMS3::Chip8::Opcodes {
    Call::Call(uint16_t raw_opcode) : Jump(raw_opcode) {}

    void Call::operate(CPU &cpu) {
        cpu.
    }

} // DMS3::Chip8::Opcodes