#include <iostream>


// exercise: write code to swap the value of 2 variables.
int main() {
    const double pi = 3.14;

    // naming conventions
    int file_size; //snake case
    int FileSize; //Pascal Case - for classes
    int fileSize; //Camel Case - for functions
    int iFileSize; //Hungarian notation

    int x = 10;
    //int y = x++; // x = 11 y = 10
    int z = ++x;
    std::cout << z;

    return 0;
}