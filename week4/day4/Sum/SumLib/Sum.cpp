//
// Created by aaron on 2019. 04. 25..
//

#include "Sum.h"

int Sum::sumNumbers(std::vector<int> numbers)
{
    int sum = 0;
    for (unsigned int i = 0; i < numbers.size(); ++i) {
sum += numbers.at(i);
    }
    return sum;
}