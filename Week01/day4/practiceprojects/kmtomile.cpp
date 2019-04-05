#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
int tav = 0;
    std::cout << "Write a distance in kilometer and I will tell you how many miles it is: " << std::endl;
std::cin >> tav;
std::cout << "It is:" << tav * 1.609344 << "miles" << std::endl;
    return 0;
}