/**************************************************************
 * Id: $Id
 * Source: $Source
 * Author: $Author
 * File: $File
 * Revision: $Revision
 * Purpose: Header for SysCall Opcode class
 * Created by deansands on 8/23/23.
 **************************************************************/

#ifndef DMS3_CHIP8_OPCODES_SYSCALL_H
#define DMS3_CHIP8_OPCODES_SYSCALL_H
#include "Jump.h"
namespace DMS3::Chip8::Opcodes{
    /*
            00E0 - CLS
            00EE - RET
            0nnn - SYS _addr
      */
    class SysCall: public Jump{
        uint16_t _sys_call{};
    public:
        explicit SysCall(uint16_t raw_opcode);
        void operate(CPU &cpu) const override;
    };


}
#endif // DMS3_CHIP8_OPCODES_SYSCALL_H