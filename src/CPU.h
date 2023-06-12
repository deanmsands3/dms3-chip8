//
// Created by deansands on 7/12/21.
//

#pragma once
#ifndef DMS3_CHIP8_CPU_H
#define DMS3_CHIP8_CPU_H
#pragma region Includes
#include "Types.h"
#include "Constants.h"
#include <vector>
#include <bitset>
#pragma endregion Includes

#pragma region CPU Class Declaration
class CPU {
    std::vector<uint8_t> m_ram;
    std::bitset<DISPLAY_SIZE> m_display_buffer;
};
#pragma endregion CPU Class Declaration

#endif //DMS3_CHIP8_CPU_H
