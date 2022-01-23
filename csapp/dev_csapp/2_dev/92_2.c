#include<stdio.h>  
typedef unsigned float_bits;
float_bits float_negate(float_bits f)
{



	unsigned sign = f>>31;
	unsigned exp =f>>23 & 0xff;
	unsigned frac = f & 0x7fffff;
	if ( exp == 0xff && frac != 0)
	{
		return f;
	}
	return (~sign<<31)|(exp <<23)|frac;
}

int main()
{
	unsigned x;
	unsigned y;
	x=0xf4f23450;
	printf("%f\n",*(float*)&x);
	y=float_negate (x);
	printf("%f\n",*(float*)&y);
	return 0;
}
