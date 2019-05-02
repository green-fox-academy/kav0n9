#include <iostream>

int main() {
    std::string abc[] = {"first", "second", "third"};
    std::string temp = abc[0];
    abc[0] = abc[2];
    abc[2] = temp;

    for (int i = 0; i < (sizeof(abc) / sizeof(abc[0])); ++i) {
        std::cout << abc[i] << std::endl;
    }
    return 0;
}