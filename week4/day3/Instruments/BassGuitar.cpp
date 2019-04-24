//
// Created by aaron on 2019. 04. 24..
//

#include "BassGuitar.h"

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstruments(numberOfStrings)
{
    _numberOfStrings = numberOfStrings;
    _name = "Bass Guitar";
}

BassGuitar::BassGuitar()
{
    _numberOfStrings = 4;
    _name = "Bass Guitar";
}

void BassGuitar::sound()
{
    std::cout << "Duum - duum - duum" <<std::endl;
}