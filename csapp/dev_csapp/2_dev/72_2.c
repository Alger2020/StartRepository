#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void copy_int_new(int val, void *buf, int maxbytes) 
{
	if (maxbytes>=sizeof(val))
		memcpy(buf, (void *) &val, sizeof(val));
}


int main() 
{
	return 0
}
