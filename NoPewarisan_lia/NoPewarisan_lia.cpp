// NoPewarisan_lia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya Function dari base class";
    }
};

class derivedClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "Hallo saya Function dari derived class";
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
