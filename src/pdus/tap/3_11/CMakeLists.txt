cmake_minimum_required(VERSION 3.0)
project(pdus-tap3.11)

add_definitions("-Wall" "-g")

include_directories(${PROJECT_SOURCE_DIR})

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/*.c)
file(GLOB HDRS_FILES ${PROJECT_SOURCE_DIR}/*.h)



