#include <iostream>
#include <map>

int main() {

    std::map<int, char> vmi;
    if (vmi.empty() != 0) {
        std::cout << "The map is empty" << std::endl;
    } else {
        std::cout << "The map is not empty" << std::endl;
    }

    vmi[97] = 'a';
    vmi[98] = 'b';
    vmi[99] = 'c';
    vmi[65] = 'A';
    vmi[66] = 'B';
    vmi[67] = 'C';

    std::map<int, char>::iterator vmiIt = vmi.begin();
    for (; vmiIt != vmi.end(); ++vmiIt)
    {
        std::cout << vmiIt->first << std::endl; //printing the keys of the map.
    }

    std::map<int, char>::iterator vmiVal = vmi.begin();
    for (; vmiVal != vmi.end(); ++vmiVal)
    {
        std::cout << vmiVal->second << std::endl; //printing the values of the map
    }

    vmi.insert(std::pair<int, char>(68, 'D'));

std::cout << "There are " << vmi.size() << " key-value pairs in the map." << std::endl;

std::cout << "The value of key 99 is: " << vmi[99] << std::endl;

    return 0;
}