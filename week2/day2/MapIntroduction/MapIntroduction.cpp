#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<int, char> xMap;
    std::cout << xMap.empty() << std::endl; //map empty or not

    xMap.insert(std::make_pair(97, 'a'));
    xMap.insert(std::make_pair(98, 'b'));
    xMap.insert(std::make_pair(99, 'c'));
    xMap.insert(std::make_pair(65, 'A'));
    xMap.insert(std::make_pair(66, 'B'));
    xMap.insert(std::make_pair(67, 'C'));

    std::map<int, char>::iterator xmapIterator;
    for (xmapIterator = xMap.begin(); xmapIterator != xMap.end(); xmapIterator++) { //Printing the keys
        std::cout << xmapIterator->first << std::endl;
    }

    std::map<int, char>::iterator mapIterator;
    for (mapIterator = xMap.begin(); mapIterator != xMap.end(); mapIterator++) { //Printing the values
        std::cout << mapIterator->second << std::endl;
    }

    xMap.insert(std::make_pair(68, 'D')); //Adding D

    std::cout << xMap.size() << std::endl; //How many key-value pairs

    std::cout << xMap[99] << std::endl; //Key99 value

    xMap.erase(97);

if(xMap.find(100) == xMap.end()) {
    std::cout << "Key 100 does not have a value" << std::endl;
}
else{                                                                   //lookfor key 100
std::cout << xMap[100] << std::endl;
}

xMap.clear();                   //remove key-value pair
    {
        std::cout << xMap.empty() << std::endl;         //checking if its all removed
    }


    return 0;
}