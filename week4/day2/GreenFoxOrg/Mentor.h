//
// Created by aaron on 2019. 04. 23..
//

#ifndef GREENFOXORG_MENTOR_H
#define GREENFOXORG_MENTOR_H

#include "Person.h"

enum Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor: public Person {
public:
    Mentor();
    Mentor(std::string _name, int _age, Gender gender, Level level);
    void getGoal() override ;
    void introduce() override ;
    std::string levelToString();
private:
    Level _level;
};


#endif //GREENFOXORG_MENTOR_H
