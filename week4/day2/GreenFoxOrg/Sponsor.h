//
// Created by aaron on 2019. 04. 23..
//

#ifndef GREENFOXORG_SPONSOR_H
#define GREENFOXORG_SPONSOR_H

#include <iostream>
#include "Person.h"

class Sponsor: public Person{
public:
    Sponsor();
    Sponsor(std::string name, int age, Gender gender, std::string company);

    void getGoal() override;
    void introduce() override;
    void hire();

private:
    std::string _company;
    int _hiredStudents;

};


#endif //GREENFOXORG_SPONSOR_H
