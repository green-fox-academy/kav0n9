#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.
int szam = 0;
        std::cout << "Write me a number: " << std::endl;
std::cin >> szam;
if (szam % 2 == 0) {
    std::cout << "The number is PAROS!" << std::endl;
}
else {
    std::cout << "The number is PARATLAN" << std::endl;
}
    return 0;
}