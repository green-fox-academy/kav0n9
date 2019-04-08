#include <iostream>


int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
float *tempPntr = &temperature;
*tempPntr += 10;
std::cout << *tempPntr << std::endl;

    return 0;
}