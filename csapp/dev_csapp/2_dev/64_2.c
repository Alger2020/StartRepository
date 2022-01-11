#include<stdio.h> 

int any_add_one(unsigned x)
{	
	return (0xAAAAAAA&x)==0xAAAAAAA ;






}


int main()
{


	unsigned x;
	x=0xAAAAAAA;
//	scanf("%u",&x);
	printf("%u\n",any_add_one(x));



	return 0;
}
