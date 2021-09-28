#include<iostream>   
using namespace std;
class A 
{
public: 
	int i;
	void f();
};


void A::f()  
{
	
	i=9999999;
	cout<<i<<endl;
}


int main()
{
	A a;
	A b;
	cout<<a.i<<endl;
	a.f();
	b.f();
	return 0;
}



