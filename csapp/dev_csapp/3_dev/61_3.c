long cread_alt(long *xp)
{
	long x=0;
long 	*p=(xp?xp:&x);
	return *p;
}
