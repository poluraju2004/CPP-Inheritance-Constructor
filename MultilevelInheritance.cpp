#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"In constructor A"<<endl;
    }
};
class B: virtual public A{
    public:
    B(){
        cout<<"In constructor B"<<endl;
    }
};
class C: virtual public B{
    public:
    C(){
        cout<<"In constructor C"<<endl;
    }
};
int main(){
    C c;
    return 0;
}