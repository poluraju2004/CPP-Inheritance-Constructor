// C++ program to demonstrate Multiple Inheritance

#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Constructor of Base1" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Constructor of Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << "Constructor of Derived" << endl;
    }
};

int main() {
    Derived d;
    return 0;
}