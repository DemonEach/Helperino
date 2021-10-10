extern "C"
{
    #include "../include/Log2.h"
}

#include <gtest/gtest.h>

TEST(Log2Tests, Log2_32Eq5)
{
    ASSERT_EQ(CalculateLog2(32), 5);
}

TEST(Log2Tests, Log2_31EqNOT_POWER_OF_2)
{
    ASSERT_EQ(CalculateLog2(31), -1);
}

TEST(Log2Tests, Log2_33EqNOT_POWER_OF_2)
{
    ASSERT_EQ(CalculateLog2(33), -1);
}

TEST(Log2Tests, Log2_minus1EqOUT_OF_SCOPE)
{
    ASSERT_EQ(CalculateLog2(-1), -2);
}

TEST(Log2Tests, Log2_1Eq0)
{
    ASSERT_EQ(CalculateLog2(1), 0);
}