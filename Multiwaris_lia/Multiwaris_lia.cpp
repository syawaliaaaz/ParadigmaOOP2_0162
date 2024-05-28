// Multiwaris_lia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class orang {
public:
    int umur;

    orang(int pUmur) :
        umur(pUmur)
    {
        cout << "orang dibuat degngan umur " << umur << "\n" << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

