cmake_minimum_required(VERSION 3.26)

project (tap3reader)

add_definitions("-DPDU=DataInterChange")
add_definitions("-DJUNKTEST")

# The root CMakeLists.txt has an operating system check. But I don't really care for that right now.
set(CMAKE_DEBUG_POSTFIX "_d")
set(CMAKE_IMPORT_LIBRARY_PREFIX "")
set(CMAKE_IMPORT_LIBRARY_SUFFIX ".lib")
set(CMAKE_SHARED_LIBRARY_PREFIX "")
set(CMAKE_SHARED_LIBRARY_SUFFIX ".dll")
set(CMAKE_FIND_LIBRARY_SUFFIXES ".dll")
set(CMAKE_EXTRA_SHARED_LIBRARY_SUFFIXES ".dll")


if (${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    add_definitions("-DDEBUGGER_ATTACHED")
    MESSAGE("DEBUGGER ATTACHED")
endif()

include("TAP0311/_sources.cmake")

SET(LIBRARY_NAME "tap0311")


add_library(${LIBRARY_NAME} SHARED)

add_executable(${PROJECT_NAME})


# When I want to debug I have a main file for testing quick functions. Temporary until Testing folders are up and running.
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
    SET(TAP0311MAIN TestMain)
    SET(TAP0311Dll TestDll)
    # add_executable(${TAP0311MAIN})
    add_library(${TAP0311Dll} SHARED)
    add_executable(${TAP0311MAIN})

    target_sources(
        ${TAP0311MAIN}
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/tap3reader.c
    )

    # set_target_properties(${TAP0311MAIN} PROPERTIES OUTPUT_NAME "main")

    target_link_libraries(${TAP0311MAIN} ${LIBRARY_NAME})
    target_include_directories(${TAP0311MAIN}
        PUBLIC
            # where the library itself will look for its internal headers
            # so I don't have big paths and less clutter
            ${CMAKE_CURRENT_SOURCE_DIR}
    )
    
    target_sources(
        ${TAP0311Dll}
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/tap3reader.c
    )

    # set_target_properties(${TAP0311MAIN} PROPERTIES OUTPUT_NAME "main")

    target_link_libraries(${TAP0311Dll} ${LIBRARY_NAME})
    target_include_directories(${TAP0311Dll}
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