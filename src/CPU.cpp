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
#pragma endregion Includes

namespace DMS3 {
#pragma region Public Methods

    CPU::CPU() : m_ram(RAM_SIZE), m_display_buffer(0) {

    }

    CPU::~CPU() {}

#pragma endregion Public Methods

}