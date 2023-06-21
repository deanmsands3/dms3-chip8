/**************************************************************
 * Id: $Id
 * Source: $Source
 * Author: $Author
 * File: $File
 * Revision: $Revision
 * Purpose: Header for CPU class
 * Created by deansands on 7/12/21.
 **************************************************************/

#pragma once
#ifndef DMS3_CHIP8_CPU_H
#define DMS3_CHIP8_CPU_H
#pragma region Includes
#include "Types.h"
#include "Constants.h"
#include "Timer.h"
#include <vector>
#include <bitset>
#include <memory>
#pragma endregion Includes

namespace DMS3{
#pragma region CPU Class Declaration
class CPU {
    std::shared_ptr<Timer> m_delay_timer;
    std::shared_ptr<Timer> m_beep_timer;
    std::vector<uint8_t> m_ram;
    std::bitset<DISPLAY_SIZE> m_display_buffer;
public:
    CPU();
    virtual ~CPU();
};
#pragma endregion CPU Class Declaration
}	// DMS3

#endif //DMS3_CHIP8_CPU_H
