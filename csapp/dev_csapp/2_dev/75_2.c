#include<stdio.h>
#include<inttypes.h>
/*思路参考等式（2.18） blog：https://www.coder.work/article/2169733  */
int signed_high_prod (int x, int y)
{
	int64_t mul=(int64_t)x*y;
	return mul>>32;
}


unsigned unsigned_high_prod(unsigned x, unsigned y)
{
	int high=signed_high_prod((int)x,(int)y);
	(x>>31)&&(high+=y);
	(y>>31)&&(high+=x);
	return (unsigned)high;
}

unsigned long prod (unsigned long x, unsigned long y)
{
	unsigned long mul=x*y;
	return mul;
}
int main()
{

	printf("%lx\n",prod(0x12345678,0x12345678));
	printf("%x\n",unsigned_high_prod (0x12345678,0x12345678));
	return 0;

}

