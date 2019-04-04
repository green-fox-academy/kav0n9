#include <iostream>
#include <string>

int sum (int number) {
    int a = 0;
    for (int x = 0; x <= number; x++) {
        a = x+a;
    }
    return a;
}

int main(int argc, char* args[]) {
    std::cout << "Give me a number: " << std::endl;
    int b;
    std::cin >> b;

    sum(b);

    std::cout << "The sum of these numbers is: "
              << sum(b) << std::endl;

    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter

    return 0;
}