//
// Created by aaron on 2019. 04. 24..
//

#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstruments(numberOfStrings)
{
    _numberOfStrings = numberOfStrings;
    _name = "Electric Guitar";
}

ElectricGuitar::ElectricGuitar()
{
    _numberOfStrings = 6;
    _name = "Electric Guitar";
}

void ElectricGuitar::sound()
{
    std::cout << "Twang" <<std::endl;
}