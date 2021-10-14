#include<iostream>  
using namespace std; 

class A 
{
public:   
	A(): i(10) {}
	virtual void f() { cout << "A::f()" << i << endl; }  
	virtual void u() { cout << "A::u()" << i << endl; } 

	int i;  



};

class AA : public A 
{

public:  
	virtual void u() { cout << "AA::f()" << endl;  }  





};
int main()
{
	A a,b;  
	a.f();
	cout << sizeof(a) << endl;
	int* p = (int*)&a;
	int* q = (int*)&b;
	int *x = (int*)*p;
	cout << "a vtable  " << x << endl;
	x++;
	cout << "a vtable`s  " << *x << endl;
	int *y = (int*)*q;
 	cout << "b vtable  " << y << endl;
	y++;
	cout << "b vtable`s  " << *y << endl;

	cout << "a vtable  " << *p << endl <<"b vtable  " <<  *q << endl;
	cout << "next" << endl ; 
	AA aa,bb;
	aa.f();
	aa.u();
	cout << sizeof(aa) << endl;
	int* pp = (int*)&aa;
	int* qq = (int*)&bb;
	int *xx = (int*)*pp;
	cout << "aa vtable  " << xx << endl;
	xx++;
	cout << "aa vtable`s  " << *xx << endl;
	int *yy = (int*)*qq;
 	cout << "b vtable  " << yy << endl;
	yy++;
	cout << "b vtable`s  " << *yy << endl;

	cout << "a vtable  " << *pp << endl <<"b vtable  " <<  *qq << endl;
	cout << "next" << endl ; 
	return 0;
}
