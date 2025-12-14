#include <iostream>

// add a declaration of the Log function
#include "Log.h"

int Multiply(int a, int b)
{
    Log("Multiply");
    return a * b;
}

int main2()
{
    std::cout <<Multiply(2, 5) << std::endl;
    std::cin.get();
}