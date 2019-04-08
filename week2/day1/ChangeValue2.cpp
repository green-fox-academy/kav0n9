#include <iostream>

void plusten(float *tempPntr)
{
*tempPntr += 10;
}

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    plusten(&temperature);


    std::cout <<"The value of temperature after change is: " << temperature << std::endl;
    return 0;
}