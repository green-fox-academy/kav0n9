#include <iostream>

int main(int argc, char const *argv[]) {
    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87
    std::cout << "Aaron Z. Novak" << std::endl;
    int age = 23;
    std::cout << age << std::endl;
    double height = 1.93;
    std::cout << height << std::endl;
    return 0;
}