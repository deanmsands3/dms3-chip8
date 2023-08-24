//
// Created by User on 2023-08-23.
//

#ifndef DMS3_CHIP8_JUMP_H
#define DMS3_CHIP8_JUMP_H
#include "Opcode.h"
namespace DMS3::Chip8::Opcodes{
    class Jump: public Opcode{
        uint16_t _addr{};
    public:
        explicit Jump(uint16_t raw_opcode);
        [[nodiscard]] uint16_t get_addr() const;
        virtual void operate(CPU &cpu) const;
    };


}
#endif //DMS3_CHIP8_JUMP_H
