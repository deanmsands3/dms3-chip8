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
#include <functional>
#pragma endregion Includes

namespace DMS3{
class Timer {
	float _frequency;
	std::function<void()> _callback;
public:
    
    Timer(float frequency, std::function<void()> callback);
    virtual ~Timer();
};
}	// DMS3

#endif //DMS3_CHIP8_TIMER_H
