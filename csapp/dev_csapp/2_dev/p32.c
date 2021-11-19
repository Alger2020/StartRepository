#include<stdio.h>
void show_float (float fval);
//void show_float (int eval);
void show_int (int ival);
void show_pointer (void* pval);
void test_show_bytes(int val)
{
	int ival = val;
	float fval =(float)ival;
	int *pval =&ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}


int main()
{
	show_float(12345);
	test_show_bytes(12345);
	return 0;
}
