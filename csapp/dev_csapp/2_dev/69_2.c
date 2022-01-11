#include<stdio.h>   


unsigned rotate_left (unsigned x, int n)

{
	unsigned a=0;
	a=x>>(8*sizeof(unsigned)-n);
	printf("a=%x\n",a);
	x=x<<n;
	return x|a;
}

int main() 
{


	unsigned x=0x12345678;
	printf("n=4->0x%x\n",rotate_left(x,4));
	printf("n=20->0x%x\n",rotate_left(x,20));
	printf("n=0->0x%x\n",rotate_left(x,0));
	return 0;
}
