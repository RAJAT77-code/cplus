#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    int age;
   string dept;
    Student(string name,int age,string dept){
    this->name=name;
       this->age=age;
        this->dept=dept;
    }
    public: 
     void display(){
        cout<<"Name: "<<name<<endl;

        cout<<"Age: "<<age<<endl;
        cout<<"Department: "<<dept<<endl;
     }};
     int main(){
            Student s1("RAJAT",777,"COMPUTER SCIENCE");
            s1.display();

     }