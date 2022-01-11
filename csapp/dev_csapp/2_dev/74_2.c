#include<stdio.h> 
#include<limits.h>


int tsub_ok(int x, int y)
{
	int temp=~y;
	int sum=x-y;
	int min=INT_MIN;
	int pos_over=(!(x&min)) &&(!(temp&min))&&(sum&min);
	int neg_over=(x&min)&&(temp&min)&&(!(sum&min));
		

	return !(pos_over||neg_over) ;
}

int tadd_ok(int x,int y)   //此函数来自习题2.30答案
{
		int sum=x+y;
		int neg_over=x<0&&y<0&&sum>=0;
		int pos_over=x>=0&&y>=0&&sum<0;
		return !neg_over&&!pos_over ;
}

int main()
{

	int x=2;
	int y=INT_MIN;
	printf("溢出返回0%d\n", tsub_ok(x,y));
	printf("溢出返回0%d\n",tadd_ok(x,-y));
	return 0;
}



