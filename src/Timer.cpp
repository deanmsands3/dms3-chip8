/**************************************************************
 * Id: $Id
 * Source: $Source
 * Author: $Author
 * File: $File
 * Revision: $Revision
 * Purpose: Source for Timer Class
 * Created by deansands on 7/12/21.
 **************************************************************/

#pragma region Includes
#include "Timer.h"

#include <utility>
#pragma endregion Includes

#pragma region Public Methods
namespace DMS3::Chip8 {
    Timer::Timer(float frequency, const std::function<void()> &callback): _callback(callback){
        setFrequency(frequency);

    }
    Timer::~Timer(){

    }

    void Timer::setFrequency(float frequency) {
        std::unique_lock<std::mutex> lock(_mutex);
        _frequency = frequency;
    }

    float Timer::getFrequency() const {
        std::unique_lock<std::mutex> lock(_mutex);
        return _frequency;
    }

    uint8_t Timer::getCount() const {
        std::unique_lock<std::mutex> lock(_mutex);
        return _count;
    }

    void Timer::setCount(uint8_t count) {
        std::unique_lock<std::mutex> lock(_mutex);
        _count = count;
    }

    const std::function<void()> &Timer::getCallback() const {
        return _callback;
    }

    void Timer::setCallback(const std::function<void()> &callback) {
        _callback = callback;
    }
    void Timer::stop() {

    }
#pragma endregion Public Methods

#pragma region Private Methods
    void Timer::_thread_function() {

    }
#pragma endregion Private Methods
};




