#include <gtest/gtest.h>
#include "../armv8a_compiler.h"
TEST(armv8a_compiler_e2e, fake_test) {
  compileLine("hello world");
}