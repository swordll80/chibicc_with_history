cmake_minimum_required(VERSION 3.10)
project(chibicc LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_compile_options(-g -fno-common -Wall -Wno-switch)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(-DDEBUG)
endif()

file(GLOB SOURCE_FILES "*.c")
add_executable(chibicc ${SOURCE_FILES})

# For historical versions
file(GLOB SOURCE_FILES_x1 "./history/003/*.c")
add_executable(chibicc_x1 ${SOURCE_FILES_x1})

file(GLOB SOURCE_FILES_x2 "./history/004/*.c")
add_executable(chibicc_x2 ${SOURCE_FILES_x2})
