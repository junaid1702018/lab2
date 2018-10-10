#include <iostream>
using namespace std;
class Account{
public:
Account(double initial_balance)
{
balance=initial_balance;
}
void debit(double amount)
{
if(amount>balance)
{cout<<"Debit amount exceeded account balance"<<endl;
}
else
balance=balance-amount;
}
void credit(double amount)
{
balance=balance+amount;
}
double getbalnce()
{
return balance;
}
private:
double balance;
};
int main(int argc,char const *argv[])
{Account acct1(45);
cout<<"account 1 balance is"<<acct1.getbalnce()<<endl;
acct1.credit(2323);
cout<<"account 1 balance is"<<acct1.getbalnce()<<endl;
double debit1;
cin>>debit1;
acct1.debit(debit1);
cout<<"account 1 balance is"<<acct1.getbalnce()<<endl;
return 0;
}
