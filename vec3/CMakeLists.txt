add_library(vec3 STATIC vec3.h)

target_sources(
    vec3
    PRIVATE
        vec3.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/vec3.h
    )

target_include_directories(
    vec3
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
