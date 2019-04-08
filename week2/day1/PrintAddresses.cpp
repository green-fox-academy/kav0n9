#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array
int x_array[5] = {};
std::cout << "Please give me 5 numbers: " << std::endl;
std::cin >> x_array[5];
std::cout << &x_array[0] << &x_array[1] << &x_array[2] << &x_array[3] << &x_array[4] << std::endl;

    return 0;
}