#include <iostream>

int fib(int f);

int main() {

    int f = 0;
    std::cout << "give me a number: " << std::endl;
    std::cin >> f;
    fib(f);
    std::cout << fib(f) << std::endl;


    return 0;
}

int fib(int f) {
    if (f == 0)
        return 0;
    if (f == 1)
        return 1;
    else {
        return fib(f-1) + fib(f-2);
    }
}