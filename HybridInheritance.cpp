#include <iostream>
using namespace std;

class A{
    public:
    int x;
};

class B : public A{
    public:
};
class C :public B{
    
};
class D:public B,public A{
    
};

int main(){
    D d;
    d.x = 10;

    d.B::x = 20;
    cout<<"Value of x: "<<d.x<<endl;// error: request for member 'x' is ambiguous
    cout<<"Value of x from B: "<<d.B::x<<endl;// error: request for member 'x' is ambiguous
}

