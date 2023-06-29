cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)

#Enable cmake_modules
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

#include(GNUInstallDirs)
include(CommonCompilers)
include(__version__)


# Enable debug symbols by default
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

# Name of the Project
project(DMS3_CHIP8 VERSION ${DMS3_CHIP8_VERSION} LANGUAGES CXX)


# Include
include_directories("${PROJECT_BINARY_DIR}")

#Add required packages
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
set(SFML_STATIC_LIBRARIES TRUE)


enable_testing()


#Add src
set(PROJECT_SOURCE_DIR src)
set(${PROJECT_NAME}_SOURCE_DIR ${PROJECT_SOURCE_DIR})

# Add sub-folders
add_subdirectory(${PROJECT_SOURCE_DIR})


# Install target
install(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)


# CPack packaging
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/COPYING")
set(CPACK_PACKAGE_VERSION_MAJOR "${DMS3_CHIP8_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${DMS3_CHIP8_VERSION_MINOR}")
include(CPack)
