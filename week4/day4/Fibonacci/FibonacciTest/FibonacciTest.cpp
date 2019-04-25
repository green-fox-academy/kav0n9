//
// Created by aaron on 2019. 04. 25..
//
#include <Fibonacci.h>
#include "gtest/gtest.h"

TEST(FibonacciTest, TestWith5)
{
    Fibonacci fibonacci;
    int index = 5;
    int result = fibonacci.countFibonacci(index);
    ASSERT_EQ(result, 3);
}