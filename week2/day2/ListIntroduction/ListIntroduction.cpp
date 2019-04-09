#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> names = {};
    for (int i = 0; i < names.size(); i++) {
        std::cout << names.at(i) << std::endl;
    }

    {
        names.insert(names.begin(), "William");
        std::cout << names.empty() << std::endl;
    }
    names.push_back("John");
    names.push_back("Amanda");

    std::cout << "The vector called names has: " << names.size() << "\telements" << std::endl;
    std::cout << "The 3rd element is: " << names[2] << std::endl;
    {
        for (std::vector<std::string>::iterator it = names.begin(); it != names.end(); ++it)
            std::cout << *it << std::endl;
    }
    {

    }

    return 0;
}