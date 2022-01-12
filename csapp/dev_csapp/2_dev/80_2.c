#include<stdio.h>  


int threefourths (int x)
{


	int a,b;
	int temp=((x>>((sizeof(int)<<3)-1))==(-1));
	printf("temp=%d\n",temp);
	temp&&(a=(x+(1<<2)-1)>>2);
	(temp==0)&& (a=(x>>2));
	temp&&(b=(x+(1<<1)-1)>>1);
	(temp==0)&& (b=(x>>1));
	return a+b;
}	



int main()
{


	printf("%d\n",threefourths(9));
	printf("%d\n",threefourths(-9));
	printf("%d\n",threefourths(10));
	printf("%d\n",threefourths(-10));



	return 0;
}
