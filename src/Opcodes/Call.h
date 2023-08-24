//
// Created by User on 2023-08-24.
//

#ifndef DMS3_CHIP8_CALL_H
#define DMS3_CHIP8_CALL_H
#include "Jump.h"
namespace DMS3::Chip8::Opcodes {

            class Call:public Jump {
            public:
                explicit Call(uint16_t raw_opcode);
                virtual void operate(CPU& cpu);
            };

        } // Opcodes

#endif //DMS3_CHIP8_CALL_H
