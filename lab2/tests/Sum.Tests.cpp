
extern "C"
{
    #include "../include/Sum.h"
}

#include <gtest/gtest.h>

TEST(SumTests, SumOfOneAndFiveShouldBeSix)
{
    ASSERT_EQ(SumInt(1, 5), 6);
}