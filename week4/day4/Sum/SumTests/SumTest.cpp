//
// Created by aaron on 2019. 04. 25..
//
#include "gtest/gtest.h"
#include "Sum.h"

TEST(TestSum, SumCorrect) {
    Sum sum;
    std::vector<int> numbers = {1, 2, 3, 4};
    ASSERT_EQ(sum.sumNumbers(numbers), 10);

}