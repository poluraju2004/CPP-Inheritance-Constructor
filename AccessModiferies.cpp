#include <iostream>
using namespace std;

class AccessModifiers {
    private:
    int x = 1;
    protected:
    int y = 2;
    public:
    int z = 3;
    int getX(){
        return x;
    }
};

class PublicDerived: protected AccessModifiers {

    public:
    int getY(){
        return y; // Accessing protected member from base class
    }
    int getZ(){
        return z; // Accessing public member from base class
    }
};
int main(){
    PublicDerived obj;
    //cout << "Value of x: " << obj.getX() << endl; // Accessing private member through public method
    cout << "Value of y: " << obj.getY() << endl; // Accessing protected member through public method
    cout << "Value of z: " << obj.getZ() << endl; // Accessing public member through public method
    return 0;
}
