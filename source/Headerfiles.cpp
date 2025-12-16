#include <iostream>
#include "LogHeader.h"

void Log1(const char* message) {
    std::cout << message;
}

int main_header()
{
    const char* ptr = "Hello";

    if (ptr)
        Log1(ptr);
    else if (ptr == "Hello")
        Log1("Ptr is Hello!");

    std::cin.get();
}
