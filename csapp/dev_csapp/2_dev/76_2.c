#include<stdio.h>
#include<stdlib.h>  
#include<string.h> 


void *calloc(size_t nmemb, size_t size)
{

	if(nmemb ==0||size == 0 )
		return NULL;
	size_t length = nmemb*size;
	if (nmemb == length/size)   //判断乘法是否溢出
	{
		void * addr = malloc(length) ;
		void *p = memset(addr,0, nmemb*size);
		return p;
	}
	return NULL;
}

int main()
{


	void *p = calloc(11,22);
	printf("%d\n", *(int*)p);
	free(p);
	return 0;
}
