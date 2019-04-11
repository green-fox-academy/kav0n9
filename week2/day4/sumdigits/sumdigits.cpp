#include <iostream>

int sumdigits(int);


int main() {

    int n = 0;
    std::cout << "please give me a number: " << std::endl;
    std::cin >> n;
    sumdigits(n);
    std::cout << "The sum of the digits of the given number is: " << sumdigits(n) << std::endl;
    return 0;
}

int sumdigits(int n)
{
    if (n / 10 == 0)
    return n;{

    }
    return (( n % 10) + sumdigits(n / 10));
}