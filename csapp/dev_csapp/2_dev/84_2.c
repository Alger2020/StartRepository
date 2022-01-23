#include<stdio.h>   

unsigned f2u (float x)
{

	return *(unsigned*) &x;
}

int float_le(float x, float y)
{
	unsigned ux = f2u(x);
	unsigned uy = f2u(y);

	unsigned sx = ux >> 31;
	unsigned sy = uy>>31;
	return ((!(ux<<1)&&!(uy<<1))||(sx&&!sy)||(!sx&&!sy&&(ux<=uy))||(sx&&sy&&(ux>=uy)));
}



int main()
{
	printf("%d\n",float_le(+0.0,-0.0));
	printf("%d\n",float_le(-0.0,+0.0));
	printf("%d\n",float_le(5.0,6.0));
	printf("%d\n",float_le(7.0,-8.0));
	printf("%d\n",float_le(-8.0,7.0));
	return 0;
}
