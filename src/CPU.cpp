/**************************************************************
 * Id: $Id
 * Source: $Source
 * Author: $Author
 * File: $File
 * Revision: $Revision
 * Purpose: Source for CPU Class
 * Created by deansands on 7/12/21.
 **************************************************************/

#pragma region Includes
#include "CPU.h"
#include "Fonts.h"
#include "Opcode.h"
#include <algorithm>
#pragma endregion Includes

namespace DMS3::Chip8 {
#pragma region Public Methods

    CPU::CPU() : _display_buffer(0) {
        _setup();
        _loop();
    }

    CPU::~CPU() = default;

#pragma region Getters and Setters
    const uint8_t *CPU::getRegisters() const {
        return _registers;
    }

    uint16_t CPU::getPc() const {
        return _pc;
    }

    void CPU::setPc(uint16_t pc) {
        _pc = pc;
    }

    uint16_t CPU::getI() const {
        return _i;
    }

    void CPU::setI(uint16_t i) {
        _i = i;
    }

    const std::shared_ptr<Timer> &CPU::getMDelayTimer() const {
        return _delay_timer;
    }

    void CPU::setMDelayTimer(const std::shared_ptr<Timer> &mDelayTimer) {
        _delay_timer = mDelayTimer;
    }

    const std::shared_ptr<Timer> &CPU::getMBeepTimer() const {
        return _beep_timer;
    }

    void CPU::setMBeepTimer(const std::shared_ptr<Timer> &mBeepTimer) {
        _beep_timer = mBeepTimer;
    }

    const std::array<uint8_t, 4096> &CPU::getMRam() const {
        return _ram;
    }

    void CPU::setMRam(const std::array<uint8_t, 4096> &mRam) {
        _ram = mRam;
    }

    const std::bitset<DISPLAY_SIZE> &CPU::getMDisplayBuffer() const {
        return _display_buffer;
    }

    void CPU::setMDisplayBuffer(const std::bitset<DISPLAY_SIZE> &mDisplayBuffer) {
        _display_buffer = mDisplayBuffer;
    }

    bool CPU::isRunning() const {
        return _running;
    }

    void CPU::setRunning(bool running) {
        _running = running;
    }

#pragma endregion Getters and Setters

#pragma endregion Public Methods
#pragma region Private Methods
    void CPU::_setup() {
        setRunning(true);
        _load_font();
    }
    void CPU::_load_font() {
        auto font_host_start = font;
        auto font_host_end = font + font_size;               // End of font block in host ram
        auto font_ram_start = _ram.begin() + font_addr;    // Start of font block in CPU ram

        std::copy(font_host_start, font_host_end, font_ram_start);
    }
    void CPU::_loop(){
        while(_running){
            _loop_internal();
        }
    }

    void CPU::_loop_internal() {
        auto raw_opcode = _fetch();
        auto opcode = _decode(raw_opcode);
        _execute(opcode);
    }

    uint16_t CPU::_fetch() {
        return 0;
    }

    Opcode CPU::_decode(uint16_t raw_opcode) {
        return nullptr;
    }

    void CPU::_execute(Opcode opcode) {

    }


#pragma endregion Private Methods
}