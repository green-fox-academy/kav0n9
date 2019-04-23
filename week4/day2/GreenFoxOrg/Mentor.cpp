//
// Created by aaron on 2019. 04. 23..
//

#include "Mentor.h"

Mentor::Mentor() {
    _level = INTERMEDIATE;
}

Mentor::Mentor(std::string name, int age, Gender gender, Level level) {
    _level = level;

}

std::string Mentor::levelToString() {
    switch (_level){
        case JUNIOR:
            return "Junior";
        case INTERMEDIATE:
            return "Intermediate";
        case SENIOR:
            return "Senior";
        default:
            return "";
    }
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << getName() << " a " << getAge() << " year old " << getGenderString() << " a " << levelToString() << " mentor" <<std::endl;
}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers!" << std::endl;
}

