cmake_minimum_required(VERSION 3.0)

project("tap3magic"
    VERSION 0.1.0.0 
    DESCRIPTION "Libraries for reading (and writing in future) TAP3 files"
    LANGUAGES C
)

set(CMAKE_DEBUG_POSTFIX "_d")

# Todo: make a cmake function that checks for subsystems.
if(${CMAKE_SYSTEM} MATCHES "CYGWIN")
    message("Is Cygwin: Windows subsystem")    
    set(CMAKE_SYSTEM_NAME Windows)
endif()

if(${CMAKE_SYSTEM} MATCHES "MSYS")
    message("Is MSYS: Windows subsystem")    
    set(CMAKE_SYSTEM_NAME Windows)
endif()

if(${CMAKE_SYSTEM} MATCHES "MINGW")
    message("Is MingW: Windows subsystem")    
    set(CMAKE_SYSTEM_NAME Windows)
endif()

if(CMAKE_SYSTEM_NAME MATCHES "Windows")
    set(CMAKE_IMPORT_LIBRARY_PREFIX "")
    set(CMAKE_IMPORT_LIBRARY_SUFFIX ".lib")
    set(CMAKE_SHARED_LIBRARY_PREFIX "")
    set(CMAKE_SHARED_LIBRARY_SUFFIX ".dll")
    set(CMAKE_FIND_LIBRARY_SUFFIXES ".dll")
    set(CMAKE_EXTRA_SHARED_LIBRARY_SUFFIXES ".dll")
endif()

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory("src")