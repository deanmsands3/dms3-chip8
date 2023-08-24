//
// Created by User on 2023-08-23.
//
#include "SysCall.h"
namespace DMS3::Chip8::Opcodes{

    SysCall::SysCall(uint16_t raw_opcode) : Opcode(raw_opcode) {

    }

    void SysCall::operate(CPU &cpu) const {

    }
}   // namespace DMS3::Chip8::Opcodes
