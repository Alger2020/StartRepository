#include<iostream>  
using namespace std;   


class A 
{
private:
	int i;
public:
	A()
{
i=0;
cout<<"构造"<<endl;
}
~A()
{
cout<<"析构"<<i<<endl;  
}
void set (int i)  {this->i=i;}   
void f() {cout<<"hello";}
};
int main()

{
A *p=new A[10];
for(int i=0;i<10;i++)
{
	p[i].set(i);
}
delete[] p;

return 0;
}



	
