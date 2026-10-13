#include <iostream>
using namespace std;

class DestructorExample{

    public:
    char *s ;
    int size;
    DestructorExample(char*);
    ~DestructorExample();
};
DestructorExample::DestructorExample(char *str){
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}
DestructorExample::~DestructorExample(){
    delete [] s;
    cout << "Destructor called" << endl;
}
int main(){
    DestructorExample obj("Hello");
    cout << obj.s << endl;
    return 0;
}
