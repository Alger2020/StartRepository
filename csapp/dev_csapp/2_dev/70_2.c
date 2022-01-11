#include<stdio.h>  

int fits_bits(int x, int n)
{
	return ((x<<((sizeof(int)<<3)-n))>>((sizeof(int)<<3)-n))==x;



}

int main()
{

	printf("%d\n",fits_bits(3,3));
	printf("%d\n",fits_bits(0xfffffffb,3));





	return 0;
}
