cmake_minimum_required(VERSION 3.0)

project (tap3reader)

# When I want to debug I have a main file for testing quick functions. Temporary until Testing folders are up and running.
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
    SET(MAIN TestMain)
    add_executable(${MAIN})

    target_sources(
        ${MAIN}
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/tap3reader.c
    )

    set_target_properties(${MAIN} PROPERTIES OUTPUT_NAME "main")

    target_include_directories(${MAIN}
        PUBLIC
            # where the library itself will look for its internal headers
            # so I don't have big paths and less clutter
            ${CMAKE_CURRENT_SOURCE_DIR}
)

endif()


# target_sources(
#     ${PROJECT_NAME}
#     PUBLIC
#         ${CMAKE_CURRENT_SOURCE_DIR}/pdu/converter-example.c
# )

# target_sources(
#     ${LIBRARY_NAME}
#     PUBLIC
#         ${ASN_MODULE_SRCS}
#         ${CMAKE_CURRENT_SOURCE_DIR}/circle_test.c
# )

# target_link_libraries(${PROJECT_NAME} ${LIBRARY_NAME})

# target_include_directories(${LIBRARY_NAME}
#     PUBLIC
#         ${CMAKE_CURRENT_SOURCE_DIR}/pdu
# )

# target_include_directories(${PROJECT_NAME}
#     PUBLIC
#         # where the library itself will look for its internal headers
#         # so I don't have big paths and less clutter
#         ${CMAKE_CURRENT_SOURCE_DIR}
# )