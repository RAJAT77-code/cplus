#include<iostream>
#include<string>
using namespace std;

 class Student{
    
    public:
    string name;
    int age;
 
    Student(string n,int a){
        name=n;
        age=a;
 
    }
    Student(const Student &s){
        name=s.name;
        age=s.age;
        cout<<"Copy constructor called"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }


};
int main(){
    Student s1("RAJAT",777);
    Student s2=s1;
    s2.display();
    return 0;
}