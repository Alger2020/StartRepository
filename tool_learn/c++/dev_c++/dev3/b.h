#ifndef ZHAIJINGHE  
#define ZHAIJINGHE
class A 
{
public:
	int one;
	int two;  
public:
	void fun();
	A(int a,int b);
	A();

};


class B  
{
public:
	int three;
public:
	void nice();

	B(int c);
	B();
};


class C
{
private:
	int four;
	A aone;
	B bone;

public:  
	C();



};

#endif  
