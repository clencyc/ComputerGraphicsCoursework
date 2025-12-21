//
// Created by clencyc on 12/21/25.
//

#include <iostream>

// this is inheritance. OOP in C++
// alo virtual functions on here

class Printable {
public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable{
public:
    float X, Y;

    // om virtual functions
    virtual std::string GetName() = 0; // <- a pure virtual function which must be implemented in a subclass

    void Move(float xa, float ya) {
        X += xa;
        Y += ya;
    }
};


class Player : public Entity {
private:
    std::string m_Name;
public:
    const char* Name;
    void PrintInherited() {
        std::cout << Name << std::endl;
    }

    Player(const std::string& name)
        : m_Name(name) {}

    std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity) {
    std::cout << entity -> GetName() << std::endl;
}

void Print(??? obj) {
    std::cout << obj -> GetClassName() << std::endl;
}

int main() {
    // instantiate

    // std::cout << sizeof(Player) << std::endl;
    // Player player{};
    // player.Move(5, 5);
    // player.X = 2;

    // initializing
    Entity* e = new Player("");
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);

    Entity* entity = p;
    std::cout << entity << std::endl;

    std::cin.get();
}

// dynamic dispatch
// virtual functions aren't free due to memory usage.
