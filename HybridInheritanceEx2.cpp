// Hybrid Inheritance Example 2
#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"In constructor A"<<endl;
    }
};

class B:public A{
    public:
    B(){
        cout<<"In constructor B"<<endl;
    }
};

class C{
    public:
    C(){
        cout<<"In constructor C"<<endl;
    }
};

class D:public B,public C{
    public:
    D(){
        cout<<"In constructor D"<<endl;
    }
};

int main(){
    D d;
    return 0;
}