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
#include "Constants.h"

namespace DMS3::Chip8{

    class Opcode {
    public:
        explicit Opcode(uint16_t raw_opcode);
        virtual ~Opcode();
    };
}


#endif //DMS3_CHIP8_OPCODE_H
