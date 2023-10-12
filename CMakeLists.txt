cmake_minimum_required(VERSION 3.24.0)
project(armv8a_compiler VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

add_library(armv8a_compiler armv8a_compiler.c)
add_subdirectory(tests)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
