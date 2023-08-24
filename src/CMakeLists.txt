set(CMAKE_CXX_STANDARD 20)

# Define sources and executable
set(
	${PROJECT_NAME}_SOURCES
	main.cpp
        CPU.cpp CPU.h Types.h Timer.cpp Timer.h Fonts.h Opcodes/Opcode.cpp Opcodes/Opcode.h Opcodes/Jump.h Opcodes/Jump.cpp Opcodes/SysCall.cpp Opcodes/Call.cpp Opcodes/Call.h)

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES})