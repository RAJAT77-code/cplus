#include<iostream>
#include<string>
using namespace std;

class Bankaccount{
    private:
    string accountholder;
    int accountnumber;
    double balance=0;

    public:
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        balance-=amount;
    }
    void display(){
        cout<<"The total balance is: "<<balance<<endl;
    }

};
int main(){
    Bankaccount b;
    b.deposit(20000);
    b.display();
    cout<<endl;
 cout<<"balance after deduction is"<<endl;
    b.withdraw(10000);
    b.display();


}