#include <iostream>
#include <string>
int doubling (int x);

int main(int argc, char* args[]) {

    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`
    int baseNum = 123;
    int value = doubling(baseNum);

    std::cout << "The double of baseNum: " << value << std::endl;


    return 0;
}

int doubling(int x){
    int result = x * 2;
    return result;
}