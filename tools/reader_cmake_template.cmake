cmake_minimum_required(VERSION 3.26)

project (tap0311reader)

add_definitions("-DPDU=DataInterChange")
add_definitions("-DJUNKTEST")

# The root CMakeLists.txt has an operating system check. But I don't really care for that right now.
# Delete this later 
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

include("generated/_sources.cmake")

SET(LIBRARY ${PROJECT_NAME}_essentials)
SET(CONVERTER_EXECUTABLE ${PROJECT_NAME}_converter)

add_library(${LIBRARY} SHARED)

add_executable(${CONVERTER_EXECUTABLE})


# When I want to debug I have a main file for testing quick functions. Temporary until Testing folders are up and running.
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
    SET(TAPREADER_EXE TestMain)
    SET(TAPREADER_LIB ${PROJECT_NAME}_lib)

    add_library(${TAPREADER_LIB} SHARED)
    add_executable(${TAPREADER_EXE})

    target_sources(
        ${TAPREADER_EXE}
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/tap3reader.c
    )

    # set_target_properties(${TAPREADER_EXE} PROPERTIES OUTPUT_NAME "main")

    target_link_libraries(${TAPREADER_EXE} ${LIBRARY})
    target_include_directories(${TAPREADER_EXE}
        PUBLIC
            # where the library itself will look for its internal headers
            # so I don't have big paths and less clutter
            ${CMAKE_CURRENT_SOURCE_DIR}
    )
    
    target_sources(
        ${TAPREADER_LIB}
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/tap3reader.c
    )

    # set_target_properties(${TAP0311_READER_EXE} PROPERTIES OUTPUT_NAME "main")

    target_link_libraries(${TAPREADER_LIB} ${LIBRARY})
    target_include_directories(${TAPREADER_LIB}
        PUBLIC
            # where the library itself will look for its internal headers
            # so I don't have big paths and less clutter
            ${CMAKE_CURRENT_SOURCE_DIR}
    )

endif()


target_sources(
    ${CONVERTER_EXECUTABLE}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/generated/converter-example.c
)

target_sources(
    ${LIBRARY}
    PUBLIC
        ${${CMAKE_PROJECT_NAME}_MODULE_SRCS}
)

target_link_libraries(${CONVERTER_EXECUTABLE} ${LIBRARY})

target_include_directories(${LIBRARY}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/generated
)

target_include_directories(${CONVERTER_EXECUTABLE}
    PUBLIC
        # where the library itself will look for its internal headers
        # so I don't have big paths and less clutter
        ${CMAKE_CURRENT_SOURCE_DIR}/generated
)