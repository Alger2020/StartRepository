#include<iostream>  
using namespace std;  

class A 
{

public:  
	A(int ii):i(ii){cout<<"A::A()"<<endl;}
	~A() {cout<<"A::~A()"<<endl;}
	void print () {cout<<"A::print()"<<i<<endl;}
	void print(int i) {cout<<i;print();}
	void set(int ii) {i=ii;}  
private:  
	int i;
};


class B : public A 
{
public:
	B(): A(15) {cout<<"B::B()"<<endl;}  
	~B(){cout<<"B::~B()"<<endl;}
	void print (double a) {cout<<"B::print()"<<a<<endl;}
	void f() {set(20);}
};

int main() 
{

B b;
b.set(10);
b.f();
b.print();
b.print(200.00);
return 0;
}

