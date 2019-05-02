//
// Created by aaron on 2019. 05. 02..
//

#include "Animal.h"

Animal::Animal()
{
    _hunger = 50;
    _thirst = 50;
}

void Animal::setHunger(int hunger)
{
    _hunger = hunger;
}

void Animal::setThirst(int thirst)
{
    _thirst = thirst;
}

std::string Animal::getname()
{
    return _name;
}

int Animal::getHunger()
{
    return _hunger;
}

int Animal::getThirst()
{
    return _thirst;
}

void Animal::eat()
{
    int hunger = getHunger();
    setHunger(hunger - 1);
}

void Animal::drinnk()
{
    int thirst = getThirst();
    setThirst(thirst - 1);
}

void Animal::play()
{
    int hunger = getHunger();
    setHunger(hunger + 1);
    int thirst = getThirst();
    setThirst(thirst + 1);
}