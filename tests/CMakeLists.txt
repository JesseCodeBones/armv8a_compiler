find_package(GTest REQUIRED)

file(GLOB 
test_sources 
CONFIGURE_DEPENDS 
./*.c
../*.c
../*.h)

add_executable(
  armv8a_compiler_test
  ${test_sources}
)

target_link_libraries(
  armv8a_compiler_test
  GTest::gtest_main
)

gtest_discover_tests(armv8a_compiler_test)