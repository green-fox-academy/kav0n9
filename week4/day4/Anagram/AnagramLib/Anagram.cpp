//
// Created by aaron on 2019. 04. 25..
//

#include "Anagram.h"
#include <algorithm>

bool Anagram::isitAnagram(std::string word1, std::string word2)
{
    std::sort(word1.begin(), word1.end());
    std::sort(word2.begin(), word2.end());

    return word1 == word2;
}