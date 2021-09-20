#include<iostream>  
using namespace std;
int main()  
{
const char *name[]={"手电筒","电池"};  
double price[]={75.825,4.1};
cout<<"商品名次 单价"<<endl;  
cout.fill('*') ; 
for (int n=0;n<2;n++)
{
cout.width(8);
cout<<name[n];
cout<<" ";
cout.width(6);
cout<<price[n];
cout<<endl;
}
return 0;
}
