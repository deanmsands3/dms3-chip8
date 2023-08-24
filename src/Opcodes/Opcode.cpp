/**************************************************************
 * Id: $Id
 * Source: $Source
 * Author: $Author
 * File: $File
 * Revision: $Revision
 * Purpose: Header for Constants
 * Created by deansands on 6/28/23.
 **************************************************************/

#include "Opcode.h"
namespace DMS3::Chip8::Opcodes{
    Opcode::Opcode(uint16_t raw_opcode):_raw_opcode(raw_opcode){
    }

    uint16_t Opcode::get_raw_opcode() const {
        return _raw_opcode;
    }

    Opcode::~Opcode()=default;
}