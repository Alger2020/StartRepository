#include<stdio.h>  

int main()
{
	int x;
	printf("请输入:");
	scanf("%d",&x);
	
	printf("k=17->%d,%d\n",(x<<4)+x,x*17);
	printf("k=-7->%d,%d\n",x-(x<<3),x*(-7));
	printf("k=60->%d,%d\n",(x<<6)-(x<<2),x*60);
	printf("k=-112->%d,%d\n",(x<<4)-(x<<7),(-112)*x);
	return 0;
}
