//
// Created by aaron on 2019. 04. 23..
//

#include "Sponsor.h"

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) {
    _company = company;
    _hiredStudents = 0;

}

Sponsor::Sponsor(): Person() {
    _company = "Google";
    _hiredStudents = 0;
}

void Sponsor::introduce()
{
    std::cout << "Hi, I'm " << getName() << " a " << getAge() << " year old " << getGenderString() << " who represents " << _company << " and hired " << _hiredStudents << " students so far. " << std::endl;
}

void Sponsor::getGoal()
{
    std::cout << "My goal is: Hire brilliant junior software developers" << std::endl;
}

void Sponsor::hire()
{
    _hiredStudents++;
}