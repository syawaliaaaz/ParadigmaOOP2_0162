// abstraksi_lia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y;

public:

    //method untuk mengisi nilai
    //private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
    //menampilkan nilai
    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

