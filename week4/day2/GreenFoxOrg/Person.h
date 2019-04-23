//
// Created by aaron on 2019. 04. 23..
//

#ifndef GREENFOXORG_PERSON_H
#define GREENFOXORG_PERSON_H

#include <iostream>

enum Gender {
    MALE,
    FEMALE
};

class Person {

public:
    Person();
    Person(std::string _name, int _age, Gender gender);

    virtual void introduce();
    virtual void getGoal();
    std::string getGenderString();
    const std::string &getName() const;
    int getAge() const;


private:
   std::string _name;
   int _age;
   Gender _gender;

};


#endif //GREENFOXORG_PERSON_H
