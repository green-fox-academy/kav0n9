#include <iostream>

int main() {

    int x = 4;
    int y = 4;

    int matrix[x][y];
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if (i == j) matrix[i][j] = 1;
            else matrix[i][j] = 0;
        }
    }


    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}