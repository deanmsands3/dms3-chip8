//
// Created by User on 2023-08-23.
//
#include "Jump.h"
#include "../CPU.h"
namespace DMS3::Chip8::Opcodes{
    Jump::Jump(uint16_t raw_opcode) : Opcode(raw_opcode), _addr(0x0FFF & raw_opcode) {}

    uint16_t Jump::get_addr() const {
        return _addr;
    }

    void Jump::operate(CPU &cpu) const {
        cpu.setPc(_addr);
    }
}
