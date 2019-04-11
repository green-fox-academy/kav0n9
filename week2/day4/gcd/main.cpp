#include <iostream>

int gcd(int a, int b);

int main() {
    int a, b;
    std::cout << "Please give me 2 numbers: " << std::endl;
    std::cin >> a >> b;
    gcd(a, b);
    std::cout << "The greatest common divisor of the given numbers is: " << gcd(a, b) <<  std::endl;


    return 0;
}

int gcd(int a, int b){
   if (a == 0)
       return b;
   if (b == 0)
       return a;
   if (a < b)
       return (gcd(a % b, b));
   else
       return (gcd(a, b % a));
}