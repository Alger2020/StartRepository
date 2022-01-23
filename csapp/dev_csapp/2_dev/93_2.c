#include<stdio.h>   

typedef unsigned float_bits;

float_bits float_absval(float_bits f)
{
	unsigned sign = f >>31;
	unsigned exp = f>>23&0xff;
	unsigned frac = f&0x7fffff;
	if(exp==0xff&&frac!=0)
	{
		return f;
	}
	return (exp<<23)|frac;
}

int main()
{

	unsigned x,y;
	x = 0xfff12345;
	printf("%f\n",*(float*)&x);
	y = float_absval (x);
	printf("%f\n",*(float*)&y);
	x = 0xf9f12345;
	printf("%f\n",*(float*)&x);
	y = float_absval (x);
	printf("%f\n",*(float*)&y);







	return 0;
}
