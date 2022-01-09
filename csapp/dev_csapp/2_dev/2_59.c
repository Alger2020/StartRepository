#include<stdio.h>  
typedef unsigned char *byte_pointer;
void byte_swap(byte_pointer x,byte_pointer y, size_t len_y)
{
	y[0]=x[0];
	for(size_t i=len_y;i>=1;i--)
	{
//		printf("%.2x",y[i-1]);
	}

	printf("%x",*((int*)y));
	printf("\n");
}
int main() 
{
	int x=0x89abcdef;
	int y=0x7654f321;
	byte_swap((byte_pointer)&x,(byte_pointer )&y,sizeof(int));

	return 0;
}

