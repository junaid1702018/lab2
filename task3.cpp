#include <iostream>
using namespace std;
class Invoice{
public:
Invoice()
{


}
Invoice(string part,string desc,int item,double money)
{
part_number=part;
description=desc;
price=money;
items=item;
}
void setpartnumber(string partnumber)
{
part_number=partnumber;
}
void setdescription(string descrip)
{
description=descrip;
}
void setitems(int item)
{if(item<0)
items=0;
else
items=item;
}
void setprice(double rupees)
{
if(rupees<0)
price=0;
else
price=rupees;
}
void setInvoiceprice(int item,double rupees)
{price=item*rupees;}
double getInvoiceprice()
{return price;}
string getpartnumber()
{return part_number;
}
string getdescription()
{return description;
}
int getitems()
{return items;
}
double getprice()
{
return price;}


private:
double price;
string part_number;
string description;
int items;
};
int main(int argc,char const *argv[])
{
Invoice desc1,desc2;
double price;
string part_number;
string description;
int items;
cout<<"part_number=";
cin>>part_number;
cout<<"description=";
cin>>description;
cout<<"item=";
cin>>items;
cout<<"price=";
cin>>price;
cout<<desc1.getpartnumber()<<"  "<<desc1.getdescription()<<"  "<<desc1.getitems()<<"  "<<desc1.getprice()<<endl;
desc1.setpartnumber( part_number);
desc1.setdescription(description);
desc1.setitems(items);
desc1.setprice(price);
cout<<desc1.getpartnumber()<<"  "<<desc1.getdescription()<<"  "<<desc1.getitems()<<"  "<<desc1.getprice()<<endl;
desc1.setInvoiceprice(desc1.getitems(),desc1.getprice());
cout<<"Invoice price="<<desc1.getInvoiceprice()<<endl;
}
