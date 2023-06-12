//
// Created by deansands on 7/12/21.
//
#pragma once
#ifndef DMS3_CHIP8_CONSTANTS_H
#define DMS3_CHIP8_CONSTANTS_H
#pragma region Includes
#include "Types.h"
#pragma endregion Includes

#ifndef SUPER_CHIP
const unsigned DISPLAY_WIDTH(64);
const unsigned DISPLAY_HIEGHT(32);
#else
const unsigned DISPLAY_WIDTH(128);
const unsigned DISPLAY_HIEGHT(64);
#endif // SUPER_CHIP
const unsigned RAM_SIZE(4096);
const unsigned DISPLAY_SIZE(DISPLAY_HIEGHT*DISPLAY_WIDTH);

#endif //DMS3_CHIP8_CONSTANTS_H
