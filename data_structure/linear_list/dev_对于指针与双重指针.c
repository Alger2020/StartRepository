#include<stdio.h>  
#include <stdlib.h> 
typedef int* INT;
//c++引用对应c语言可用两种方式实现，(*) (**)都是可以的，实现如下
void test(INT i)
{
	printf("testone=%d\n",i);
	INT c=i;
	printf("test()=%d\n",*c);
	*c=99999;
	printf ("teston()=%d\n",*c);
}
int main() 
{
	INT a=(INT)malloc(sizeof(int));
	printf("one=%d\n",a);
	scanf("%d",a);
	printf("main()=%d\n",*a);
	test(a);
	printf("mianon()=%d\n",*a);
	return 0;
}



/*
#include<stdio.h>  
#include <stdlib.h> 
typedef int* INT;

void test(INT* i)
{
	INT c=*i;
	printf("test()=%d\n",*c);
	*c=99999;
	printf ("teston()=%d\n",*c);
}
int main() 
{
	INT a=(INT)malloc(sizeof(int));
	scanf("%d",a);
	printf("main()=%d\n",*a);
	test(&a);
	printf("mianon()=%d\n",*a);
	return 0;
}
*/
