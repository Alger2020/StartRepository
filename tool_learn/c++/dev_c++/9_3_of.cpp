#include<iostream>  
#include<iomanip>  
#include<fstream>   
using namespace std; 
int main()  
{
const char *name[]={"手电筒","电池"};  
double price[]={75.825,4.1};
int n;
cout<<"商品名称 单价\n"<<setiosflags(ios::left);  
for (n=0;n<2;n++)  
{
cout<<setw(8)<<name[n];
cout<<" ";
cout<<setw(6)<<price[n];
cout<<endl; 
}
ofstream fout;
fout.open("9_3_of.txt");
fout<<"商品名称 单价\n"<<setiosflags(ios::left);  
for (n=0;n<2;n++)  
{
fout<<setw(8)<<name[n];
fout<<" ";
fout<<setw(6)<<price[n];
fout<<endl; 
}
fout.close();
return 0;
}
//翟景和随机测试  
//ooohhhhooohhh
//hhhhhaaaaaaa
