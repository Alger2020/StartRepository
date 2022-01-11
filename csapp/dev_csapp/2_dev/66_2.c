#include<stdio.h>   

int leftmost_one (unsigned x)
{
	x|=(x>>1);		
	x|=(x>>2);
	x|=(x>>4);
	x|=(x>>8);
	x|=(x>>16);
	return x^(x>>1);
}


int main()
{
	unsigned x=0xffffffff;
	printf("0xffffffff=%x\n",leftmost_one(x));
	x=0xfff;
	printf("0xfff=%x\n",leftmost_one(x));
	x=0xaffffa;
	printf("0xaffffa=%x\n",leftmost_one (x));
	x=0x1;
	printf("0x1=%u\n",leftmost_one(x));
	return 0;
}
	
