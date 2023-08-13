cmake_minimum_required(VERSION 3.0)

project(CircleDecoder)

add_definitions("-DPDU=Circle")

include(sources.cmake)

SET(LIBRARY_NAME CircleLibrary)

add_library(${LIBRARY_NAME})

add_executable(${PROJECT_NAME})

MESSAGE(${ASN_MODULE_SRCS}) 

target_sources(
    ${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/converter-example.c
)

target_sources(
    ${LIBRARY_NAME}
    PUBLIC
        ${ASN_MODULE_SRCS}
)

target_link_libraries(${PROJECT_NAME} ${LIBRARY_NAME})

target_include_directories(${LIBRARY_NAME}
    PUBLIC
        "${PROJECT_SOURCE_DIR}"
)
