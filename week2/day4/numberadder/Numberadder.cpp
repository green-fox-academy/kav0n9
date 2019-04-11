#include <iostream>

int adderRecursion(int);

int main() {

    std::cout << "please give me a number: " << std::endl;
    int a = 0;
    std::cin >> a;
adderRecursion(a);
std::cout << adderRecursion(a) << std::endl;
    return 0;
}

int adderRecursion (int a)
{
if (a <= 1){
    return a;
}
    return a + adderRecursion(a - 1);
}
