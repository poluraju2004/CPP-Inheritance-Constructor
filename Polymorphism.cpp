#include <iostream>
using namespace std;

class Shape{
protected:
		int width,height;
public:
	Shape(int a = 0, int b = 0) {
		width = a;
		height = b;
	}
	int area() {
		cout << "Parent class area: " << width * height << endl;
		return width * height;
	}

};
class rect : public Shape {
public:
	rect(int a = 0,int b = 0):Shape(a,b){ }
	int area() {
		cout << "Rectangle class area: " << width * height << endl;
		return width * height;

	}

};

class tri : public Shape {
public:
	tri(int a = 0, int b = 0) :Shape(a, b) {}
	int area() {
		cout << "Triangle class area: " << (width * height)/2 << endl;
		return (width * height)/2;

	}

};
int main() {
	Shape* shape;
	rect r(10,20);
	tri t(25,25);

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