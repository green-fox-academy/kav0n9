#include <iostream>

int main() {

    int numbers[5] = {};
    std::cout << "Gimme 5 numbers!!!";
    std::cin >> numbers[5];

    for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); ++i) {
        std::cout << &numbers[i] << std::endl;
    }

    return 0;
}