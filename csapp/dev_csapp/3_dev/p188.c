#include<stdio.h>  

union 
{
	double d;
	unsigned long u;
} temp;

int main()
{
	double a;
	scanf("%lf",&a);
	unsigned long aa =(unsigned long) a;
	printf("%ld\n",aa);
	temp.d=a;
	printf("temp.d=%lf\n",temp.d) ;
	printf("temp.u=%ld",temp.u );
	return 0;
}
