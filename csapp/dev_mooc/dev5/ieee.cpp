#include<iostream> 
using namespace std;

int main() 
{
	float heads;
	cout.setf(ios::fixed ,ios::floatfield);
	while (1)
	{
		cout<< "please enter a number:";
		cin>> heads;
		cout<<heads<<endl;
	}
	return 0;
}

