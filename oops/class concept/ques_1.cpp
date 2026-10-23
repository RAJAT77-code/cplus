#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    string accountHolder;
    int accountNumber;
    double balance=0;
public:
    void deposit(double amount){
        balance+=amount;   
        }

        void withdraw(double debit){
            balance-=debit;
        }

        int display(){
            cout<<"Account balance: "<<balance<<endl;
            return 0;
        }
};

int main(){
    BankAccount b1;
    
    b1.deposit(1000.00);
    b1.display();
  cout<<endl;
    b1.withdraw(300);
    b1.display();
    
 return 0 ;
}