#include<stdio.h>   

typedef unsigned float_bits;

float_bits float_f2i(float_bits f)
{
	unsigned sign = f >>31;
	unsigned exp = f>>23&0xff;
	unsigned frac = f&0x7fffff;
	if(exp==0xff&&frac!=0)
	{
		return 0x80000000 ;
	}
	int E =exp-127;
	int M = frac | 0x800000;
	printf("%d\n",E);
	if(E>=31)
	{
		return 0x80000000;
	}
	else if (E>23)
	{
		int n = M << (E-23);
		return sign == 0 ? n  : -n;
	}
	else if (E>0)
	{
		int n = M >> (23-E);
		return sign ==0 ? n : -n;
	}
	else 
	{
		return 0;
	}
}

int main()
{

	unsigned x,y;
	x = 0xfff12345;
	printf("%f\n",*(float*)&x);
	y = float_f2i (x);
	printf("%x\n",y);
	x = 0xa9f12345;
	printf("%.30f\n",*(float*)&x);
	y = float_f2i (x);
	printf("%d\n",y);







	return 0;
}
