#include <iostream> 
using namespace std;

class Sample {
public:
	int length(void);
	Sample(int len); // simple constructor
	Sample(const Sample& obj);//copy constructor
	~Sample();//destructor

private:
	int* ptr;

};

Sample::Sample(int len) {
	cout << "Normal constructor allocating pointer" << endl;
	ptr = new int;
	*ptr = len;
}
Sample::Sample(const Sample& obj) {
	cout << "copy constructor allocating pointer" << endl;
	ptr = new int;
	*ptr = *obj.ptr; //copy the value
}

Sample::~Sample(void) {
	cout << "Free memory!" << endl;
	delete ptr;

}
int Sample::length(void) {
	return *ptr;
}
void display(Sample obj) {

	cout << "Length of line : " << obj.length() << endl;

}

int main() {
	Sample s(10);
	display(s);
	return 0;
}