#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have
    int chick = 0;
    int pig = 0;
                std::cout << "How many chickens?" << std::endl;
    std::cin >> chick;
    std::cout << "How many pigs?" << std::endl;
    std::cin >> pig;

    std::cout << (chick * 2) + (pig * 4) << std::endl;

    return 0;
}