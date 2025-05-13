#include <gtest/gtest.h>
#include "math_utils.h"

TEST(MathTest, Addition) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(MathTest, Multiplication) {
    EXPECT_EQ(multiply(4, 5), 20);
}
