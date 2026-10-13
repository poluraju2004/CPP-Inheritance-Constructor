#include <iostream>
using namespace std;
//implicit copy constructor in runtime
class copys {
	int id;
public:
	copys(int);
	void disp();

};
copys::copys(int x) {
	id = x;
}
void copys::disp() {
	cout << "Id: " << id;
}
int main() {
	int a;
	cout << "Enter copy number: " << endl;
	cin >> a;

	copys c(a);
	c.disp();
	cout << endl;

	copys c1(c);
	c1.disp();
	cout << endl;
	copys c2(c1);
	c2.disp();
	return 0;



}
