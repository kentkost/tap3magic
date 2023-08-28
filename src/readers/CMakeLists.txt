cmake_minimum_required(VERSION 3.0)

project (tap3reader)

add_definitions("-DPDU=DataInterChange")
add_definitions("-DJUNKTEST")

include("TAP0311/_sources.cmake")

SET(LIBRARY_NAME "tap0311")

add_library(${LIBRARY_NAME} SHARED)

add_executable(${PROJECT_NAME})


# When I want to debug I have a main file for testing quick functions. Temporary until Testing folders are up and running.
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
    SET(TAP0311MAIN TestMain)
    add_executable(${TAP0311MAIN})

    target_sources(
        ${TAP0311MAIN}
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/tap3reader.c
    )

    set_target_properties(${TAP0311MAIN} PROPERTIES OUTPUT_NAME "main")

    target_link_libraries(${TAP0311MAIN} ${LIBRARY_NAME})
    target_include_directories(${TAP0311MAIN}
        PUBLIC
            # where the library itself will look for its internal headers
            # so I don't have big paths and less clutter
            ${CMAKE_CURRENT_SOURCE_DIR}
)

endif()


target_sources(
    ${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/TAP0311/converter-example.c
)

target_sources(
    ${LIBRARY_NAME}
    PUBLIC
        ${TAP0311_MODULE_SOURCES}
)

target_link_libraries(${PROJECT_NAME} ${LIBRARY_NAME})

target_include_directories(${LIBRARY_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/TAP0311
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        # where the library itself will look for its internal headers
        # so I don't have big paths and less clutter
        ${CMAKE_CURRENT_SOURCE_DIR}/TAP0311
)