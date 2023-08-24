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
#include "Opcodes/Opcode.h"
#include <vector>
#include <array>
#include <bitset>
#include <memory>
#include <stack>
#pragma endregion Includes

namespace DMS3::Chip8{
#pragma region CPU Class Declaration
    class CPU {

        uint8_t _registers[16]{};
        uint16_t _pc{};
        uint16_t _i{};

        std::shared_ptr<Timer> _delay_timer;
        std::shared_ptr<Timer> _beep_timer;
        std::array<uint8_t, 4096> _ram{};
        std::bitset<DISPLAY_SIZE> _display_buffer;
        bool _running{};
        void _load_font();
        void _setup();
        void _loop();
        void _loop_internal();
        uint16_t _fetch();
        Opcodes::Opcode _decode(uint16_t raw_opcode);
        void _execute(Opcodes::Opcode opcode);
    public:
        CPU();
        virtual ~CPU();

        [[nodiscard]] const uint8_t *getRegisters() const;
        [[nodiscard]] uint16_t getPc() const;
        void setPc(uint16_t pc);
        [[nodiscard]] uint16_t getI() const;
        void setI(uint16_t i);
        [[nodiscard]] const std::shared_ptr<Timer> &getMDelayTimer() const;
        void setMDelayTimer(const std::shared_ptr<Timer> &mDelayTimer);
        [[nodiscard]] const std::shared_ptr<Timer> &getMBeepTimer() const;
        void setMBeepTimer(const std::shared_ptr<Timer> &mBeepTimer);
        [[nodiscard]] const std::array<uint8_t, 4096> &getMRam() const;
        void setMRam(const std::array<uint8_t, 4096> &mRam);
        [[nodiscard]] const std::bitset<DISPLAY_SIZE> &getMDisplayBuffer() const;
        void setMDisplayBuffer(const std::bitset<DISPLAY_SIZE> &mDisplayBuffer);
        [[nodiscard]] bool isRunning() const;
        void setRunning(bool running);
    };
#pragma endregion CPU Class Declaration
}	// DMS3

#endif //DMS3_CHIP8_CPU_H
