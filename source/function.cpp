//
// Created by clencyc on 12/14/25.
//

#include "function.h"
#include <iostream>

int Multiply1(int a, int b)
{
    return a * b;
}

void MultiplyAndLog(int a, int b) {
    int result = Multiply1(a, b);
    std::cout << result << std::endl;

}

int main3()
{
    MultiplyAndLog(2, 4);
    MultiplyAndLog(5, 6);
}