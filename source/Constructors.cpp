//
// Created by clencyc on 12/16/25.
//
#include <iostream>


// constructor - a special method which runs whenever you create a
//              special method of a class. 1. Initialize a class first then create the constructor
//              you can have different constructors for different classes

class Entity {
public:
    float X, Y;

    // A constructor
    Entity(const float w, const float z) {
        X = w;
        Y = z;
    }

    // inititalizing a class
    // void Init() {
    //     X = 0.0f;
    //     Y = 0.0f;
    // }

    void Printc() {
        std::cout << X << ", " << Y << std::endl;
    }
};

class Log
{

public:
    Log() = delete;
    static void Write() {

    }
};
int main() {
    Log::Write();
    Log 1;

    Entity e(10.99f, 443.33f);
    e.Printc();

    std::cin.get();
}