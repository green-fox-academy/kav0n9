#include <iostream>

void swap(int *, int *);

int main() {
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;

    int *aPntr = &a;
    int *bPntr = &b;
    swap(&a, &b);
    std::cout << "a after swap: " << a << "\nb after swap: " << b << std::endl;


    return 0;
}
void swap(int *n1, int *n2) {
    int c;
    c = *n1;
    *n1 = *n2;
    *n2 = c;
}