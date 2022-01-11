#include<stdio.h>  


unsigned srl(unsigned x,int k)
{
	unsigned xsra=(int)x>>k;
	xsra=xsra&((1<<(8*sizeof(int)-k))-1);
	return xsra;
}

int sra(int x,int k)
{

	int xsrl = (unsigned) x>>k;
	int hx=((1<<(8*sizeof(int)-1))&x)==0x80000000;
	int h1=(-1)<<(8*sizeof(int)-k);
	xsrl=xsrl|(h1&((!hx)-1));
	

	return xsrl ;

}

int main() 
{

	printf("%x\n",srl( 0xffff0000,4)); 
	printf("%x\n",sra( 0xffff0000,4)); 


	return 0;
}
