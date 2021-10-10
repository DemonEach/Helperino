extern "C"
{
    #include "../include/GCD.h"
}

#include <gtest/gtest.h>

TEST(GCDTests, GCD32_64Eq32)
{
    ASSERT_EQ(CalculateGCD(32, 64), 32);
}

TEST(GCDTests, GCD64_32Eq32)
{
ASSERT_EQ(CalculateGCD(64, 32), 32);
}

TEST(GCDTests, GCD31_17Eq1)
{
    ASSERT_EQ(CalculateGCD(31, 17), 1);
}

TEST(GCDTests, GCDR32_64Eq32)
{
    ASSERT_EQ(CalculateGCDRecursively(32, 64), 32);
}

TEST(GCDTests, GCDR64_32Eq32)
{
    ASSERT_EQ(CalculateGCDRecursively(64, 32), 32);
}

TEST(GCDTests, GCDR31_17Eq1)
{
    ASSERT_EQ(CalculateGCDRecursively(31, 17), 1);
}