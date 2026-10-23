#include <iostream>
#include<string>
using namespace std;

class Student{
    private:
    int rollno;
    string name;
    double marks;
public:
    void setStudent(int r,string n,double m){
        rollno=r;
        name=n;
        marks=m;
    }
 public:
    int displayStudent(){
        cout<<"rollno: "<<rollno<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"marks: "<<marks<<endl;
        return 0;
    }   };


    int main(){
        Student s1;
        s1.setStudent(77,"rajat",99.99);
        s1.displayStudent();


    }