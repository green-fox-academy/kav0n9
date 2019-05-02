//
// Created by aaron on 2019. 05. 02..
//

#ifndef FARM_FARM_H
#define FARM_FARM_H

#include <vector>
#include "Animal.h"

class Farm {

public:
    Farm(int slots);
    void breed();
    void slaughter();
    void add(Animal *animal);
    void animalInfo();

private:
    std::vector<Animal *> _animal;
    int _slots;
};


#endif //FARM_FARM_H
