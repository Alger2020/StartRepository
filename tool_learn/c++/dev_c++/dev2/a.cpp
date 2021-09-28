#include<stdio.h>  

class A 
{
public:  
	int i;
	void f();  
	A();

};

void A::f() 
{
	i=20;  
	printf("A::f()--&i=%p\n",&i);  
	printf("this=%p\n",this);
}   
A::A()
{
	i=0;
	printf("A::A()--this=%p\n",this);
}
int main()  
{
	A a;

	a.i=10;
	printf("&a=%p\n",&a);
	printf("&a.i=%p\n",&(a.i));
	a.f();  
	return 0;
}   

