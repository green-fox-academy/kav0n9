#include <iostream>
#include <map>
#include <vector>


int main() {

    std::map<std::string, int> database;
    database["Eggs"] = 200;
    database["Milk"] = 200;
    database["Fish"] = 400;
    database["Apples"] = 150;
    database["Bread"] = 50;
    database["Chicken"] = 550;

    std::cout << "The fish's price is: " << database["Fish"] << std::endl; //Fish price

    std::map<std::string, int>::iterator datIt;
    std::string product = "";
    int max = 0;
    for (datIt = database.begin(); datIt != database.end(); ++datIt) {
        if (max < datIt->second) {
            max = datIt->second;
            product = datIt->first;
        }
    }
    std::cout << "The most expensive product is: " << product << std::endl;

    int sum = 0;
    for (datIt = database.begin(); datIt != database.end(); datIt++) {
        sum += datIt->second;
    }
    int average = (sum / database.size());
    std::cout << "The average price is: " << average << std::endl;

    std::vector<int> prices;
    for (datIt = database.begin(); datIt != database.end(); ++datIt) {
        if (datIt->second < 300) {
            prices.insert(prices.begin(), datIt->second);
        }
    }
std::cout << prices.size() << " products have lower price than 300." << std::endl;

    for (datIt = database.begin(); datIt != database.end(); ++datIt) {
        if (datIt->second == 125) {
            std::cout << datIt->first << std::endl;
        }
    }

    return 0;
}