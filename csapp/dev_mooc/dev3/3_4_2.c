#include<stdio.h> 

int uadd_ok(unsigned x,unsigned y)
{
	unsigned sum =x+y;
	return sum>=x;
}

int tadd_ok (int x,int y) 
{
	int sum =x+y;
	int neg_over= x<0 && y<0 && sum >= 0;
	int pos_over = x>=0 && y>=0 && sum<0;
	return !neg_over&& !pos_over;
}


int tsub_ok(int x,int y)
{

	return tadd_ok(x,-y);
}  //x=o,y=0x80000000      有bug


int main()
{





	return 0;
}
