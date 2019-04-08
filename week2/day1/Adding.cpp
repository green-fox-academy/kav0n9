#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
int *aPntr = &a;
int *bPntr = &b;
    std::cout << *(&a) + *(&b) << std::endl;

    return 0;
}