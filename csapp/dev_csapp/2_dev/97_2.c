#include<stdio.h>   

typedef unsigned float_bits;

float_bits float_i2f(int i)
{
	unsigned sign = (i>>31)&(0x1);
	unsigned ii = i<0 ? -i : i;
	if(i==0)
	{
		return 0;
	}
	int j=31;
	while(!(ii>>j))
	{
		j--;
	}  //找最高位
	int a=23;
	unsigned frac = 0;
	unsigned exp = j+127;
	j--;
	a--;
	while((a>=0)&&(j>=0))
	{
		frac+=((ii>>j)&0x1)<<a;
		a--;
		j--;
	}
	
	return (sign<<31)|(exp<<23)|(frac);	

}

int main()
{

	unsigned x,y;
	x = 0xfff12345;
	printf("%d\n",x);
	y = float_i2f(x);
	printf("%f\n",*(float*)&y);







	return 0;
}
