cmake_minimum_required(VERSION 3.0)

set(OWN_VERSION 1.0.0)
if(DEFINED CMAKE_PROJECT_VERSION AND NOT "${CMAKE_PROJECT_VERSION}" STREQUAL "")
    set(OWN_VERSION ${CMAKE_PROJECT_VERSION})
endif()

project("main"
    VERSION ${OWN_VERSION}
    DESCRIPTION "Main excutable" 
    LANGUAGES C
)

add_subdirectory("hello")
add_subdirectory("circle")

add_executable(main)

target_sources(main PRIVATE main.c)
target_link_libraries(main CircleLibrary)  
