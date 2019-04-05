#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
     std::cout << "Give me 5 numbers, and I will tell you its sum and average: " << std::endl;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << "The sum is: " << a + b + c + d + e << "\tThe average is:" << (a + b + c + d + e) / 5. << std::endl;
    return 0;
}