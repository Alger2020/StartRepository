#include<iostream>  
using namespace std;
int main() 
{
char ch;
while(1)
{
ch=cin.get();
if(ch=='\n') break;
if(ch>='a'&&ch<='z') ch-=32;
if(ch==' ') ch='*';
cout<<ch;
}
cout<<endl;
return 0;
}
