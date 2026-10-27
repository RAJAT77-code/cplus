#include<iostream>
using namespace std;

class Calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a, int b,int c){
        return a+b+c;
    }

    float add(float a,float b){
        return a+b;
    }
};
int main(){
    Calculator calc;
    cout<<calc.add(50,10,20)<<endl;
    cout<<calc.add(20.12f,1.90f)<<endl;
    cout<<calc.add(20,7)<<endl;
    return 0;
}