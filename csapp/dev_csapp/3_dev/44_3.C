#include<stdio.h>
struct p2 { int i; char c; char d; long j;};
struct p3 {short w[3];char c[3];};
struct p5 {struct p3 a[2]; struct p2 t;};


int main()
{

	struct p5* cc;
 		
       cc->a[0].w[0]=0;
       cc->a[0].w[1]=1;
       cc->a[0].w[2]=2;
       cc->a[0].c[0]=3;
       cc->a[0].c[1]=4;
       cc->a[0].c[2]=5;
        cc->a[1].w[0]=6;
       cc->a[1].w[1]=7;
       cc->a[1].w[2]=8;
       cc->a[1].c[0]=9;
       cc->a[1].c[1]=10;
       cc->a[1].c[2]=11;      cc->a[0].c[1]=1;
       cc->t.i=12;
       cc->t.c=13;
       cc->t.d=14;
       cc->t.j=15;
	//struct p2* dd=&(cc.t);
	printf("%x\n%x\n",(&cc),(&(cc->t)));

}
