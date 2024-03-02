cmake_minimum_required(VERSION 3.10)
project(chibicc LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_compile_options(-g -fno-common -Wall -Wno-switch)

file(GLOB SOURCE_FILES "*.c")

add_executable(chibicc ${SOURCE_FILES})

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(chibicc PRIVATE -DDEBUG)
endif()

# For historical versions
file(GLOB SOURCE_FILES_x1 "./history/003/*.c")
add_executable(chibicc_x1 ${SOURCE_FILES_x1})
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(chibicc_x1 PRIVATE -DDEBUG)
endif()

file(GLOB SOURCE_FILES_x2 "./history/004/*.c")
add_executable(chibicc_x2 ${SOURCE_FILES_x2})
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(chibicc_x2 PRIVATE -DDEBUG)
endif()
