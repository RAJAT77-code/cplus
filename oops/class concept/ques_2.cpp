#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    double marks;

    public:
    void display(){
        cout<<"name is: "<<name<<endl;
        cout<<"roll number is: "<<rollno<<endl;
        cout<<"marks is: "<<marks<<endl;
    }
};
int main(){
    Student s;
    s.name="Rajat";
    s.rollno=77;
    s.marks=99.88;

    s.display();
}