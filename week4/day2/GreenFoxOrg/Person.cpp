//
// Created by aaron on 2019. 04. 23..
//

#include <iostream>
#include "Person.h"

Person::Person() {
    _name = "Jane Doe";
    _age = 30;
    _gender = FEMALE;
}

Person::Person(std::string name, int age, Gender gender) {
    _name = name;
    _age = age;
    _gender = gender;
}

void Person::introduce()
{
    std::cout << "Hi, I'm " << _name << " a " << _age << "year old " << getGenderString() << std::endl;
}

std::string Person::getGenderString()
{
    switch (_gender) {
        case MALE:
            return "Male";
        case FEMALE:
            return "Female";
    }
}

void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

const std::string &Person::getName() const {
    return _name;
}

int Person::getAge() const {
    return _age;
}