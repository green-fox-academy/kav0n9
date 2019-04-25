//
// Created by aaron on 2019. 04. 25..
//

#include "Fibonacci.h"

int Fibonacci::countFibonacci(int index)
{
    if (index == 0 ) {
        return 0;
    }
    if (index == 1) {
        return 1;
    }
    else {
        return countFibonacci(index-1) + countFibonacci(index - 2);
    }
}