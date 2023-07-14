cmake_minimum_required(VERSION 3.0)
project("tap3reader"
    VERSION 0.1.0.0 
    DESCRIPTION "Library for reading tap3 files" 
    LANGUAGES C
)

#cmake --system-information
message("-- CMAKE_SYSTEM_INFO_FILE: ${CMAKE_SYSTEM_INFO_FILE}")
message("-- CMAKE_SYSTEM_NAME:      ${CMAKE_SYSTEM_NAME}")
message("-- CMAKE_SYSTEM_PROCESSOR: ${CMAKE_SYSTEM_PROCESSOR}")
message("-- CMAKE_SYSTEM:           ${CMAKE_SYSTEM}")

set(CMAKE_DEBUG_POSTFIX d)

# Todo: make a cmake function that checks for subsystems.
if(${CMAKE_SYSTEM} MATCHES "CYGWIN")
    message("Windows subsystem")    
    set(CMAKE_SYSTEM_NAME Windows)
endif()

if(${CMAKE_SYSTEM} MATCHES "MINGW")
    message("Windows subsystem")    
    set(CMAKE_SYSTEM_NAME Windows)
endif()

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows" )
    set(CMAKE_SHARED_LIBRARY_PREFIX "")
    set(CMAKE_SHARED_LIBRARY_SUFFIX ".dll")
    set(CMAKE_FIND_LIBRARY_SUFFIXES ".dll")
    set(CMAKE_EXTRA_SHARED_LIBRARY_SUFFIXES ".dll")
endif()

add_library(hello SHARED hello.c)

add_executable(main main.c)
target_link_libraries(main hello) 
