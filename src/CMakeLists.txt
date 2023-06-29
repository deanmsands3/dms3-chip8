set(CMAKE_CXX_STANDARD 20)

# Define sources and executable
set(
	${PROJECT_NAME}_SOURCES
	main.cpp
        CPU.cpp CPU.h Types.h Timer.cpp Timer.h Fonts.h Opcode.cpp Opcode.h)

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES})