#include <iostream>
using namespace std;

class constructor {
	int rno;
	string name;
	int a;
	int b;
	


public:
	constructor();
	constructor(int, int);
	virtual void disp();
	virtual void disp1();
	
	void disp2();
};
//default constructor
constructor::constructor() {
	cout << "Enter a rollno: " << endl;
	cin >> rno;
	cout << "Enter a name:  " << endl;
	cin >> name;

}
//Parameterized constructor
constructor::constructor(int a, int b) {
	this->a = a;
	this->b = b;

}

//default value paremeterized constructor
//
//constructor::constructor(int x){
//	data = x;
//	
//
//}
//void constructor::disp2() {
//	cout<< data;
//}

void constructor::disp1() {
	cout << "sum = " << a + b;
}

void constructor::disp() {
	cout << rno << "\t" << name << endl;

} 
// Derived class
class derived : public constructor {
public:
	derived() : constructor() {}
	derived(int a, int b) : constructor(a, b) {}

	// Overriding disp()
	void disp() override {
		cout << "Overridden display function" << endl;
		constructor::disp();
	}

	// Overriding disp1()
	void disp1() override {
		cout << "Overridden addition function" << endl;
		constructor::disp1();
	}
};
int main() {
	constructor c;
	c.disp();
	int a1, b1;

	cout << "Enter a number : " << endl;
	cin >> a1;
	cout << "Enter b number : " << endl;
	cin >> b1;
	constructor c1(a1,b1);
	c1.disp1();

	////default parameterized constructor
	//constructor c2();
	//constructor c3(25);
	//c2.disp2();
	//c.disp2();
	return 0;



	
	
}