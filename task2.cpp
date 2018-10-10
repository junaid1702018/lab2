#include <iostream>
using namespace std;
class Employee{
public:
Employee()
{


}
Employee(double amount,string first,string last)
{
  salary=amount;
first_name=first;
last_name=last;

}
void setfirst(string first)
{
first_name=first;
}
void setlast(string last)
{
last_name=last;
}
void setsalary(double amount)
{
if(amount<0)
{salary=0;}
else
{salary=amount;

}
}
void setyearly(double amount)
{salary=amount*12;}
void setprofit(double amount)
{salary=amount*0.1;}
double getyearly()
{return salary;}
double getprofit()
{return salary;}
string getfirst()
{return first_name;}
string getlast()
{return last_name;}
double getsalary()


{return salary;}

private:
double salary;
string first_name;
string last_name;
};
int main(int argc,char const *argv[])
{Employee acct1,acct2;
double salary;
string first_name;
string last_name;
cout<<"account 1 employ"<<endl;
cout<<"first_name=";
cin>>first_name;
cout<<"last name=";
cin>>last_name;
cout<<"salary=";
cin>>salary;
acct1.setfirst(first_name);
acct1.setlast(last_name);
acct1.setsalary(salary);

cout<<acct1.getfirst()<<"  "<<acct1.getlast()<<" has monthly salary  "<<acct1.getsalary()<<endl;
acct1.setyearly(acct1.getsalary());

cout<<"yearly salary  "<<acct1.getyearly()<<endl;

acct1.setprofit(acct1.getyearly());
cout<<" salary raise  "<<acct1.getprofit()<<endl;

cout<<"account 2 employ"<<endl;
cout<<"first_name=";
cin>>first_name;
cout<<"last name=";
cin>>last_name;
cout<<"salary=";
cin>>salary;
acct2.setfirst(first_name);
acct2.setlast(last_name);
acct2.setsalary(salary);
cout<<acct2.getfirst()<<"  "<<acct2.getlast()<<"  has monthly salary "<<acct2.getsalary()<<endl;
acct2.setyearly(acct2.getsalary());
cout<<"yearly salary  "<<acct2.getyearly()<<endl;
acct2.setprofit(acct1.getyearly());
cout<<" salary raise  "<<acct2.getprofit()<<endl;

return 0;
}
