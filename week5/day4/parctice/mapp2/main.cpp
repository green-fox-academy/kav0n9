#include <iostream>
#include <map>


int main() {

    std::map<std::string, std::string> ezMap;

    ezMap["978-1-60309-452-8"] = "A Letter to Jo";
    ezMap["978-1-60309-459-7"] = "Lupus";
    ezMap["978-1-60309-444-3"] = "Red Panda and Moon Bear";
    ezMap["978-1-60309-461-0"] = "The Lab";

    std::map<std::string, std::string>::iterator ezMapIt = ezMap.begin();
    for (; ezMapIt != ezMap.end(); ++ezMapIt)
    {
        std::cout << ezMapIt->second << "(ISBN: " << ezMapIt->first << ")" << std::endl;
    }

    ezMap.erase("978-1-60309-444-3");

    for (; ezMapIt != ezMap.end(); ++ezMapIt) {
        if (ezMapIt->second == "The Lab"){
            ezMap.erase(ezMapIt->first);
        }
    }

    ezMap.insert(std::make_pair("978-1-60309-450-4", "They Called Us Enemy"));
    ezMap.insert(std::make_pair("978-1-60309-453-5", "Why Did We Trust Him?"));

    if (ezMap.count("478-0-61159-424-8") > 0) {
        std::cout << "ezMap contains that key" <<std::endl;
    }
    else {
        std::cout << "ezMap doesn't contain that key" << std::endl;
    }

    std::cout << ezMap["978-1-60309-453-5"] << std::endl;

    return 0;
}