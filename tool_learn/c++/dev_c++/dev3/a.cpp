#include <iostream>  
using namespace std;


class A {
int i;
public:
A(){}
void f()  {cout<<"f()  "<<i<<"  "<<&i<<endl;  }
void f() const {cout<<"fu() const  "<<i<<"     "<<&i<<endl ;}  
};
int main()  
{  
 A b;
  A a; 
a.f();
b.f();
return 0;

}

