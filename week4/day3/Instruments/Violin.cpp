//
// Created by aaron on 2019. 04. 24..
//

#include "Violin.h"

Violin::Violin(int numberOfStrings) : StringedInstruments(numberOfStrings)
{

}

Violin::Violin()
{
    _numberOfStrings = 4;
    _name = "Violin";
}

void Violin::sound()
{
    std::cout << "Screech" << std::endl;
}