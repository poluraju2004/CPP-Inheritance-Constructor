//Example: Define member function without arguments within the class 
#include <iostream>
using namespace std;
class SingleInheritance {
    int id;
    char name[50];
    public:
    SingleInheritance(){
        cout<<"In constructor Person"<<endl;
    }
    void setData(){
        cout<<"Enter id: " <<endl;
        cin>>id;
        cout<<"Enter name: " <<endl;
        cin>>name;
    }
    void display(){
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
class Student:private SingleInheritance{
    char course[50];
    int fee;
    public:
    Student(){
        cout<<"In constructor Student"<<endl;
    }
    void studentData(){
        setData();
        cout<<"Enter course: " <<endl;
        cin>>course;
        cout<<"Enter fee: " <<endl;
        cin>>fee;
    }
    void displayData(){
        display();
        cout<<"Course: "<<course<<endl;
        cout<<"Fee: "<<fee<<endl;
    }
};
int main(){
    Student s;
    s.studentData();
    s.displayData();
    return 0;
}
