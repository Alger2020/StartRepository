#include<stdio.h>
void show_float (float fval);
void show_int (int ival);
void show_pointer (void* pval);
void show_short(short s );
void show_long(long l );
void show_double(double l);
void test_show_bytes(int val)

{
	int ival = val;
	float fval =(float)ival;
	int *pval =&ival;
	double dval=(double)ival;
	short sval=(short) ival;
	long lval=(long) ival;
	show_int(ival);
	show_float(fval);
	show_short(sval);
	show_long(lval);
	show_double(dval);
	show_pointer(pval);
	
}


int main()
{
	test_show_bytes(-2);
	return 0;
}
