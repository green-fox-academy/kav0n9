#include <iostream>
#include <fstream>
#include <string>

void functioon (std::string, std::string, int);
// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

int main() {
std::string path = "C:\\Users\\aaron\\greenfox\\kav0n9\\week3\\day1\\SomeFiles\\fajl.txt";
std::string word = "apple";
int a = 4;

functioon(path, word, a);

    return 0;
}

void functioon (std::string path, std::string word, int a)
{
std::ofstream file;
file.open(path);
    for (int i = 0; i < a; ++i) {
        file << word << std::endl;
    }
}
