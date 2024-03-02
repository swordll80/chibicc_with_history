cmake_minimum_required(VERSION 3.10)
project(chibicc LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_compile_options(-g -fno-common -Wall -Wno-switch)

file(GLOB SOURCE_FILES "*.c")

add_executable(chibicc ${SOURCE_FILES})

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(chibicc PRIVATE -DDEBUG)
else()
    #
endif()