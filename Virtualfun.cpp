#include <iostream>
using namespace std;

class Shape1 {
protected:
	int width, height;
public:
	Shape1(int a = 0, int b = 0) {
		width = a;
		height = b;
	}
	virtual	int area() {
		cout << "Parent class area: " << width * height << endl;
		return width * height;
	}

};
class rect : public Shape1 {
public:
	rect(int a = 0, int b = 0) :Shape1(a, b) {}
	int area() {
		cout << "Rectangle class area: " << width * height << endl;
		return width * height;

	}

};
class tri : public Shape1 {
public:
	tri(int a = 0, int b = 0) :Shape1(a, b) {}
	int area() {
		cout << "Triangle class area: " << (width * height) / 2 << endl;
		return (width * height) / 2;

	}

};
int main() {
	Shape1* shape;
	int w, h;
	cout << "Enter width : " << endl;
	cin >> w;
	cout << "Enter hieght: " << endl;
	cin >> h;

	rect r(w,h);
	tri t(w,h);

	//store the address of rectangle
	shape = &r;
	//rectangle the area
	shape->area();
	//store address of triangle
	shape = &t;
	//triangle the arae
	shape->area();

	return 0;
}