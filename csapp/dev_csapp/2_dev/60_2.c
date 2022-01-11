#include<stdio.h>

unsigned replace_byte(unsigned x,int i, unsigned char b)
{
	unsigned char * a=(unsigned char *)&x;
	a[i]=b;
	printf("%x\n",x);
	return 0;
}
int main() 
{
	replace_byte(0x12345678,2,0xab);
	replace_byte(0x12345678,0,0xab);
	return 0;
}
