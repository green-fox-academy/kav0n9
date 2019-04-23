//
// Created by aaron on 2019. 04. 23..
//

#ifndef GREENFOXORG_COHORT_H
#define GREENFOXORG_COHORT_H

#include "Mentor.h"
#include "Student.h"
#include <iostream>
#include <vector>

class Cohort {
public:
    Cohort(std::string name);
    void addMentor(Mentor *mentor);
    void addStudent(Student *student);
    void info();

private:
    std::string _name;
    std::vector<Student*> _students;
    std::vector<Mentor*> _mentors;
};


#endif //GREENFOXORG_COHORT_H
