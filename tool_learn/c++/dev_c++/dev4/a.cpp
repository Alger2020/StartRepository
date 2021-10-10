#include<iostream>  
using namespace std;  

class A 
{
private:
  
int i;

public:

A():i(110)
{
}

void  f()
{
cout<<i<<endl;

}

};

class B : public A 
{

public:

int x;

};



int main()  
{

A a;
B b;
a.f();
int *p = (int*)&a;
*p=22;
cout<<*p<<endl;
a.f();
cout<<"endl"<<endl;
b.f();
p=(int*)&b;
cout<<"b.x  "<<b.x<<endl;
p++;
*p=999;
cout<<"*p  "<<*p<<endl;
cout<<"b.x    "<<b.x<<endl;
cout<<"endl"<<endl;
p=(int*)&(b.x);
b.f();
cout<<"*p  "<<*p<<endl;
cout<<"b.x  "<<b.x<<endl;
*p--;
*p=888;
b.f();
cout<<"*p  "<<*p<<endl;
cout<<"b.x  "<<b.x<<endl;


return 0;

}
