#include<iostream>
using namespace std;

class Number{
    private: int a;

    protected: int b;

    public:   int c;

    void set(int x){
        a=x;
    }

    void display(){
        cout<<a;
    }
    
};

int main(){
    Number n;
    // n.a=10;   // not possible because it is now accessible outside the class as it is public
    // n.b=5;    //not possible it is in protected
       n.c=7;     
    n.set(10);
    n.display();
}