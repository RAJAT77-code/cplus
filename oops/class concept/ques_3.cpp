#include<iostream>
#include<string>
using namespace std;

class Rectangle{
    public:
    double length;
    double breadth;
    
    public:
    void setDimensions(double l,double b){
        length=l;
        breadth=b;
    }
    double calculateArea(){
       return length*breadth; 
    }
    void display(){
        cout<<"the length is: "<<length<<endl;
        cout<<"the breadth is: "<<breadth<<endl;
        cout<<"the area is: "<<calculateArea()<<endl;
    }
};

int main(){
    Rectangle r1;
    r1.setDimensions(20.00,10.00);
    r1.display();
    cout<<endl;
    Rectangle r2;
    r2.setDimensions(40.00,20.00);
    r2.display();

    return 0;
}