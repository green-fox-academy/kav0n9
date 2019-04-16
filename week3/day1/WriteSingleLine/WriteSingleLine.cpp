#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line
    std::ofstream myFile;
    myFile.open("my-file.txt");

    if (myFile.is_open()){
        myFile << "Aaron Z. Novak\n";
        myFile.close();
    } else {
        std::cout << "Unable to open file" <<std::endl;
    }


    return 0;
}
