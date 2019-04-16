#include <iostream>
#include <fstream>

int divider(int x);

int main() {
    try {
        int a = 0;
        int b = 10;
        std::cout << "Give me a number: " << std::endl;
        std::cin >> a;
        if (a == 0) {
            throw std::string("Fail!");
        }
        std::cout << b / a << std::endl;
    } catch (std::string e) {
        std::cout << e << std::endl;
    }
    return 0;
}
