#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that asks for two numbers and prints the bigger one
    int a = 0;
    int b = 0;
    std::cout << "Give me 2 numbers: " << std::endl;
    std::cin >> a >> b;

    if (a > b) {
        std::cout << "This is the bigger number: " << a << std::endl;
    }
    else if (b > a) {
        std::cout << "This is the bigger number: " << b << std::endl;
    }
    return 0;
}