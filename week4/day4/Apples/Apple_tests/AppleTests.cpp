//
// Created by aaron on 2019. 04. 25..
//
#include "Apple.h"
#include "gtest/gtest.h"

TEST(apple_check, test_apple)
{
    EXPECT_EQ(getApple(), "Apple");
}

