//
// Created by aaron on 2019. 05. 02..
//

#ifndef FARM_ANIMAL_H
#define FARM_ANIMAL_H
#include <iostream>

class Animal {

public:
    Animal();

    void setHunger(int hunger);
    void setThirst(int thirst);
    int getHunger();
    int getThirst();
    std::string getname();
    void play();
    void drinnk();
    void eat();

private:
    int _hunger;
    int _thirst;
    std::string _name;


};


#endif //FARM_ANIMAL_H
