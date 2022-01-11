#include<stdio.h>   
int odd_ones (unsigned x)
{
	x^=(x>>16);
	x=x<<16>>16;
	printf("test1=%x\n",x);
	x^=(x>>8);
	x=x<<24>>24;
	x^=(x>>4);
	x=x<<28>>28;
	x^=(x>>2);
	x=x<<30>>30;
	x^=(x>>1);
	x=x<<31>>31;
	printf("test=%x\n",x);
	return x;
//return (x&1);
}	

int main() 
{

	unsigned x=0xaaaaaaab;
	printf("%d\n",odd_ones(x));
	x=0xbaaaaaaa;
	printf("%d\n",odd_ones(x));
	x=0xaaaaaaaa;
	printf("%d\n",odd_ones(x));
	x=0xaa;
	printf("%d\n",odd_ones(x));



	return 0;
}
