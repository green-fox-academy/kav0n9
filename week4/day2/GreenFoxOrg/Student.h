//
// Created by aaron on 2019. 04. 23..
//

#ifndef GREENFOXORG_STUDENT_H
#define GREENFOXORG_STUDENT_H

#include "Person.h"

class Student: public Person {

public:
    Student();

    Student(std::string name, int age, Gender gender, std::string previousOrganization);

    void getGoal() override ;
    void introduce() override ;
    void skipDays(int numberOfDays);
private:
    int _skippedDays;
    std::string _previousOrganization;



};


#endif //GREENFOXORG_STUDENT_H
