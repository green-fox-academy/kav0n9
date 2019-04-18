#include <iostream>
#include "Sharpie.h"

int main() {

    Sharpie black ("black", 12,5);

    std::cout << black.getcolor() << "\t" << black.getwidth() << "\t" << black.getinkAmount() <<std::endl;

    return 0;
}