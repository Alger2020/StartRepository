#include<stdio.h>  


int lower_one_mask(int n)
{

	return (1<<(n-1)<<1)-1;



}

int main() 
{


	printf("17=0x%x\n",lower_one_mask(17));
	printf("6=0x%x\n",lower_one_mask(6));
	printf("32=0x%x\n",lower_one_mask(32));


	return 0;
}

