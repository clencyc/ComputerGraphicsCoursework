//
// Created by clencyc on 12/16/25.
//
#include <iostream>

extern int s1_variable;

// static for classes and structs
// static is useful for static data to be used for specific classes

struct Entity {
    static int x, y;

    static void Print() {
        std::cout << x<< "," << y << "Hello Struct" <<std::endl;
    }
};

static void Print(Entity e) {
    std::cout << e.x<< "," << e.y << "Hello Struct" <<std::endl;
}

void Function() {

}

int Entity::x;
int Entity::y;

int main_statics() {
    Entity e{};
    e.x = 2;
    e.y = 3;

    Entity e1{};
    Entity::x = 3;
    Entity::y = 4;
    Entity::Print();
    Entity::Print();

    std::cout << s1_variable << std::endl;
    std::cin.get();
}

