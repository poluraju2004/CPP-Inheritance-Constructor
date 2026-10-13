#include <iostream>
using namespace std;
class Complex {
    int real, imag;
public:
    Complex();
    Complex(int, int);
    Complex add(Complex);
    void display();
};
Complex::Complex() {
    real = 0;
    imag = 0;
}
Complex::Complex(int r, int i) {
    real = r;
    imag = i;
}
Complex Complex::add(Complex c) {
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}
void Complex::display() {
    cout << real;
    if (imag >= 0)
        cout << " + " << imag << "i" << endl;
    else
        cout << " - " << -imag << "i" << endl;
}
int main() {
    int r1, i1, r2, i2;
    cout << "Enter real and imaginary parts of first number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary parts of second number: ";
    cin >> r2 >> i2;
    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex c3 = c1.add(c2);
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum of complex numbers: ";
    c3.display();
    return 0;
}