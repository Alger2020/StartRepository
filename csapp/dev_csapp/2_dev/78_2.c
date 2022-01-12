#include<stdio.h>  
#include<limits.h> 

int divide_power2(int x, int k)
{


	(x>>((sizeof(int)<<3)-1)==(-1)) && (x=(x+(1<<k)-1)>>k);
	printf("%d\n",x);
	(x>>((sizeof(int)<<3)-1)!=(-1)) && (x=x>>k);
	return x;
}
 int main()
{
	int x;
	printf("请输入x:");
	scanf("%d",&x);
	printf("请输入k:");
	int k;
	scanf("%d",&k);
	printf("%d\n",divide_power2(x,k));


	return 0;
}
