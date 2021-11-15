#include<stdio.h> 

void main() 
{
union NUM 
{
	int a;
	char b[4];
} num;
	num.a=0x12345678;
	for (int i=0;i<4;i++)
	{
		printf("%x\n",num.b[i]);
	}
}
