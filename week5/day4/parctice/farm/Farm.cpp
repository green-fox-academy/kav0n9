//
// Created by aaron on 2019. 05. 02..
//

#include "Farm.h"

Farm::Farm(int slots)
{
    _slots = slots;
}

void Farm::breed()
{
    if (_slots > 0) {
        Animal animal;
        _animal.push_back(&animal);
        _slots--;
    } else {
        std::cout << "There is not enough space for a new animal" << std::endl;
    }
}

void Farm::slaughter()
{
    int minHunger = 50;
    int numberInRow = 0;
    for (int i = 0; i < _animal.size(); ++i) {
        if (_animal.at(i)->getHunger() < minHunger) {
            minHunger = _animal.at(i)->getHunger();
            numberInRow = i;
        }
    }
    _animal.erase(_animal.begin() + numberInRow);
    _slots++;
}

