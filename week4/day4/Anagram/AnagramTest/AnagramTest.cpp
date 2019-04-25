//
// Created by aaron on 2019. 04. 25..
//

#include "Anagram.h"
#include "gtest/gtest.h"

TEST(AnagramTest, NotAnagram)
{
    Anagram anagram;
    bool output = anagram.isitAnagram("kecske", "kutya");
    ASSERT_EQ(output, false);
}

TEST(AnagramTest, YesAnagram)
{
    Anagram anagram;
    bool output = anagram.isitAnagram("dog", "god");
    ASSERT_EQ(output, true);
}