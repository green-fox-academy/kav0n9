#include <iostream>

int main() {

    int numList[] = {3, 4, 5, 6, 7};
    for (int i = 0; i < (sizeof(numList) / sizeof(int)); ++i) {
        numList[i] *= 2;
    std::cout << numList[i] <<std::endl;
    }

    return 0;
}