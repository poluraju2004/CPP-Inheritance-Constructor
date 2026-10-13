// C++ program to demonstrate Hierarchical Inheritance

#include <iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a Vehicle Constructor"<<endl;
    }
};
class Car:public Vehicle{
    public:
    Car(){
        cout<<"This is a Car Constructor"<<endl;
    }
};
class Bike:public Vehicle{
    public:
    Bike(){
        cout<<"This is a Bike Constructor"<<endl;
    }
};
class Truck: public Vehicle{
    public:
    Truck(){
        cout<<"This is a Truck Constructor"<<endl;
    }
};
int main(){
    Car C;
    Bike b;
    Truck t;
    return 0;
}