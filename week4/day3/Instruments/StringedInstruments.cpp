//
// Created by aaron on 2019. 04. 24..
//

#include "StringedInstruments.h"

StringedInstruments::StringedInstruments(int numberOfStrings)
{
    _numberOfStrings = numberOfStrings;
}

StringedInstruments::StringedInstruments()
{
    _numberOfStrings = 0;
}

void StringedInstruments::play()
{
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes ";
    sound();
}