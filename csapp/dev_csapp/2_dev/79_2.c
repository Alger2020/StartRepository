#include<stdio.h>


int mul3div4(int x)
{
	int k;
	x=(x<<1)+x;
	(x>>((sizeof(int)<<3)-1)==(-1)) && (x=(x+(1<<2)-1)>>2);
	x>>((sizeof(int)<<3)-1)!=(-1) && (x=(x>>2));

	return x;
}

int main()
{
	int x;
	printf("请输入x:");
	scanf("%d",&x);
	printf("%d\n",mul3div4(x));
	return 0;
}
