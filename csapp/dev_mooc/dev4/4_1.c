#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>


int* copj_array(int *array,int count)
{
	int i;
	int *myarray =(int*)malloc(count*sizeof(int));
	if(myarray==NULL)
	{
		return 0;
	}
	for(i=0;i<2 ;i++)
	{
		myarray[i]=array[i];
	}
	return myarray ;
}

int main()
{
	int a[4]={1,2,3,4};
//	size_t b=(int)(pow(2,30)+1)*sizeof(int);
//	printf("%u\n",b);
	int* b=copj_array(a,(int)(pow(2,30)+1));
	for(int i=0;i<2;i++)
	{
	printf("%d\n",b[i]);
	}
	return 0;

}
