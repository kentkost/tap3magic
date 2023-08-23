cmake_minimum_required(VERSION 3.0)

project(CircleDecoder)

add_definitions("-DPDU=Circle")
# add_definitions("-DPDU=Rectangle")

include(pdu/_sources.cmake)

SET(LIBRARY_NAME CircleLibrary)

add_library(${LIBRARY_NAME} SHARED)

add_executable(${PROJECT_NAME})

# When I want to debug I have a main file for testing quick functions. Temporary until Testing folders are up and running.
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
    SET(CircleMain TestMain)
    add_executable(${CircleMain})

    target_sources(
        ${CircleMain}
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/circle_test.c
    )

    target_link_libraries(${CircleMain} ${LIBRARY_NAME})
    set_target_properties(${CircleMain} PROPERTIES OUTPUT_NAME "main")
endif()


target_sources(
    ${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/pdu/converter-example.c
)

target_sources(
    ${LIBRARY_NAME}
    PUBLIC
        ${pdu_MODULE_SOURCES}
)

target_link_libraries(${PROJECT_NAME} ${LIBRARY_NAME})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "CircleConverter")

target_include_directories(${LIBRARY_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/pdu
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        # where the library itself will look for its internal headers
        # so I don't have big paths and less clutter
        ${CMAKE_CURRENT_SOURCE_DIR}/pdu
)