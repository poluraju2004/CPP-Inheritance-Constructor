//Example: Define member function without arguments outside the class 

#include <iostream>
using namespace std;

class InheritanceEx2{
    int id;
    char name[50];

    public:
    void SetData();
    void display();
};

void InheritanceEx2::SetData(){
    cout<<"In constructor Person"<<endl;
    cout<<"Enter id: "<<endl;
    cin>>id;
    cout<<"Enter name: "<<endl;
    cin>>name;
}

void InheritanceEx2::display(){
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
}

class Student:private InheritanceEx2{
    char course[50];
    int fee;

    public:
    void studentData();
    void displayData();
};
void Student::studentData(){
    SetData();
    cout<<"In constructor Student"<<endl;
    cout<<"Enter course: "<<endl;
    cin>>course;
    cout<<"Enter fee: "<<endl;
    cin>>fee;
}
void Student::displayData(){
    display();
    cout<<"Course: "<<course<<endl;
    cout<<"Fee: "<<fee<<endl;
}
int main(){
    Student s;
    s.studentData();
    s.displayData();
    return 0;
}
