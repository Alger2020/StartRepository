#include<stdio.h>  


typedef unsigned packed_t;

int xbyte (packed_t word, int bytenum)
{
	return (((int)(word<<((3<<3)-(bytenum<<3))))>>24);
}
int main() 
{

	printf("0xffaaffff=0x%x\n",xbyte(0xffaaffff,2));
	printf("0xff7fffff=0x%x\n",xbyte(0xff7fffff,2));
	printf("0xacffffff=0x%x\n",xbyte(0xacffffff,3));
	printf("0x7caaffff=0x%x\n",xbyte(0x7caaffff,3));
	printf("0xffffff0f=0x%x\n",xbyte(0xffffff0f,0));
	return 0;
}

