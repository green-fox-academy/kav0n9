#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `p1`
    //   with the following content: `[1, 2, 3]`
    // - Create an array variable named `p2`
    //   with the following content: `[4, 5]`
    // - Print if `p2` has more elements than `p1`
int p1_array[] = {1, 2, 3};
int p2_array[] = {4, 5};
    if (sizeof(p2_array)> sizeof(p1_array)) std::cout << p2_array << std::endl;
    
    return 0;
}