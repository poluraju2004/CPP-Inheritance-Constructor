#include <iostream>
using namespace std;

/*2.Write a C+ program to define a class Student with:
• Private data members: roll number, name, marks
• A parameterized constructor to initialize data
• A copy constructor
• A destructor that displays a message when the object is destroyed
• A member function to display details
In main():
• Create one object
• Create another object using the copy constructor
• Display details of both objects*/
class Student {
private:
	int rollno;
	//char name [50];
	string name;
	double marks;
public:
	Student(int, /*char[]*/  string , double);
	//copy constructor
	Student(Student& t) {
		rollno = t.rollno;
		//strcpy(name, t.name);
		name = t.name;
		marks = t.marks;

	}
	void display();

	~Student();
};

Student::Student(int rno, /*char n[]*/  string n, double m) {
	rollno = rno;
	//strcpy(name, n);
	name = n;
	marks = m;
}
Student::~Student() {
	cout << "Object destroyed: " << name << endl;
	
}

void Student::display() {
	cout<< rollno << " " << name << " " << marks << endl;

}
int main() {
	Student s(101, "Raju", 85);
	s.display();
	//copy constructor
	Student s1(s);
	s1.display();
	return 0;
}