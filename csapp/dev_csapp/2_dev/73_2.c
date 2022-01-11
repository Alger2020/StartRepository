#include<stdio.h> 
#include<limits.h> 


int saturating_add(int x, int y)
{
	int min=INT_MIN;
	int sum=x+y;
	
	printf("sum=%x\n",sum);
	int pos_over=(!(x&min))&&(!(y&min))&&(sum&min);
	int neg_over=(x&min)&&(y&min)&&(!(sum&min));
	(pos_over&&(sum=INT_MAX))||(neg_over&&(sum=INT_MIN ));
	
	printf("sum=%x\n",sum);
	return sum;
}

int main()
{
//	printf("%x\n%x\n",INT_MAX,INT_MIN );
	printf("0x4fffffff+0x4fffffff =%x\n",saturating_add (0x4fffffff,0x4fffffff ));
	printf("0x9fffffff+0x9fffffff =%x\n",saturating_add(0x9fffffff,0x9fffffff ));





	return 0;
}
