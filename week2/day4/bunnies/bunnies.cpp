#include <iostream>

int ears(int);

int main() {

    int b = 0;
    std::cout << "Tell me how many fluffy bunnies you have: " << std::endl;
    std::cin >> b;
    ears(b);
    std::cout << "The number of ears they have: " << ears(b) << std::endl;

    return 0;
}

int ears(int b) {
    if (b == 1)
        return 2;
    {
        return 2 + ears(b - 1);
    }
}