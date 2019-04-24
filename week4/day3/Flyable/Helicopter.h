//
// Created by aaron on 2019. 04. 24..
//

#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H


#include "Flyable.h"
#include "Vehicle.h"

class Helicopter : public Vehicle, public Flyable {
public:
    void fly() override;
    void takeoff() override;
    void land() override;

};


#endif //FLYABLE_HELICOPTER_H
