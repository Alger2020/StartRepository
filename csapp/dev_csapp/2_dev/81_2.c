#include<stdio.h>  
/* 题目难点是对于w=32的处理"*/

int main()
{

	int k,j,a;
	printf("k:");
	scanf("%d",&k);
	printf("j:");
	scanf("%d",&j);
	(k!=0)&& (a=((-1)^(int)(((unsigned)(-1))>>((sizeof(int )<<3)-k))));
	(k==0)&& (a=-1);
	printf("A:%.8x\n",a);
	int ak, aj;
	(j!=0) && (aj=(int)(((unsigned)(-1)>>((sizeof(int)<<3)-j))));
	(j==0) &&( aj=0);
	
	((j+k)!=0)&&(ak=(int)(((unsigned)(-1)>>((sizeof(int)<<3)-(j+k)))));
	((j+k)==0) && (ak=0);
	k=~(aj^ak);	
	(k!=0) && (a=(-1)^(k));	
	(k==0) && (a=-1);
	printf("B:%.8x\n",a);

	return 0;
}

