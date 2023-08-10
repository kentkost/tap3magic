cmake_minimum_required(VERSION 3.0)

set(OWN_VERSION 1.0.0)
if(DEFINED CMAKE_PROJECT_VERSION AND NOT "${CMAKE_PROJECT_VERSION}" STREQUAL "")
    set(OWN_VERSION ${CMAKE_PROJECT_VERSION})
endif()

project("hello"
    VERSION ${OWN_VERSION}
    DESCRIPTION "Library for saying hello" 
    LANGUAGES C
)
add_library(${PROJECT_NAME} SHARED)

target_sources(
    ${PROJECT_NAME}
    PRIVATE
        src/hello.c
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        # where the library itself will look for its internal headers
        # so I don't have big paths and less clutter
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)