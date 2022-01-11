#include<stdio.h>  

int main() 
{


	int x;
	printf("X输入：");
	scanf("%d",&x);
	printf("\n");
	printf("A输出：");
	printf("%d\n",!(x^(-1)));
//	printf("%d\n",(~5)+1);
	printf("B输出：");
	printf("%d\n",!(x^(0)));
	printf("C输出：");
	printf("%d\n",!((x&0xff)^(0xff)));
	printf("D输出：");
	printf("%d\n",!(((x>>24)&0xff)));

	return 0;
}
