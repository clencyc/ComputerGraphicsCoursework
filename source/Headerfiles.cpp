#include <iostream>
#include "LogHeader.h"

void Log1(const char* message) {
    std::cout << message;
}

int main()
{
    std::cout << "Hello world" << std::endl;
    std::cin.get();
}