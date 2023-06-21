/**************************************************************
 * Id: $Id
 * Source: $Source
 * Author: $Author
 * File: $File
 * Revision: $Revision
 * Purpose: Header for Timer class
 * Created by deansands on 7/12/21.
 **************************************************************/

#ifndef DMS3_CHIP8_TIMER_H
#define DMS3_CHIP8_TIMER_H
#pragma region Includes
#include "Types.h"
#include <functional>
#include <chrono>
#include <thread>
#include <mutex>
#pragma endregion Includes

namespace DMS3{
    class Timer {
    private:
        std::chrono::microseconds _timeout;
        uint8_t _count;
        float _frequency;
        std::function<void()> _callback;
        std::thread _thread;
        mutable std::mutex _mutex;
        std::condition_variable _cv;
        void _thread_function();
    public:
        Timer(float frequency, const std::function<void()> &callback);
        virtual ~Timer();
        [[nodiscard]] float getFrequency() const;
        void setFrequency(float frequency);
        [[nodiscard]] const std::function<void()> &getCallback() const;
        void setCallback(const std::function<void()> &callback);
        [[nodiscard]] uint8_t getCount() const;
        void setCount(uint8_t count);
        void stop();
    };
}	// DMS3

#endif //DMS3_CHIP8_TIMER_H
