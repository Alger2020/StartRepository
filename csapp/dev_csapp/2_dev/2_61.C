#include<stdio.h>  

int main() 
{


	int x;
	printf("输入：");
	scanf("%d",&x);
	printf("\n");
	printf("输出：");
	printf("%d\n",!(x^(-1)));
//	printf("%d\n",(~5)+1);
	return 0;
}
