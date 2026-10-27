#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    int age;
   string dept;
    Student(){
        dept="Computer Science";
    }
    public:
     void display(){
        cout<<"Name: "<<name<<endl;

        cout<<"Age: "<<age<<endl;
        cout<<"Department: "<<dept<<endl;


     }};
     int main(){
        Student s1;
        s1.name="John";
        s1.age=20;
        s1.display();   
     }