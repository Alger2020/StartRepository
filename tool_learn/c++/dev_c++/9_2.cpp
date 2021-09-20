# include<iostream> 
using namespace std;  
int main()  
{
int x=0;
double y=0;
cin>>x>>y;
cout<<"x="<<x<<",y="<<y<<endl;
char str[5],str2[8];
cin.width(5);
cin>>str;
cin.width(8);
cin>>str2;
cout<<"str="<<str<<",str2="<<str2<<endl;
return 0;
}

