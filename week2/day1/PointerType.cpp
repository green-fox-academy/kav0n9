#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";
int *aPntr = &a;
double *bPntr = &b;
std::string *namePntr = &name;

std::cout << "The value of *aPntr is: " << *aPntr << std::endl;
std::cout << "The memory address of a is: " << &a << std::endl;
std::cout << "The value of *bPntr is: " << *bPntr <<std::endl;
std::cout << "The memory address of b is: " << &b << std::endl;
std::cout << "The value of *namePntr is: " << *namePntr << std::endl;
std::cout << "The memory address of name is: " << &name << std::endl;

return 0;
}