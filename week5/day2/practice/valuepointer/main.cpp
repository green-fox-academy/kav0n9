#include <iostream>

int main() {


    int age = 31;
    double b = 322.10;
    std::string name = "atilla";

    int *pInt = &age;
    double *pDouble = &b;
    std::string *pString = &name;

    std::cout << *pInt << "\n" << *pDouble << "\n" << *pString << std::endl;

    return 0;
}