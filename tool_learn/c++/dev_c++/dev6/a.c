#include<stdio.h>  
#include<malloc.h>

typedef struct StackNode 
{
	int data;
	struct StackNode *next;
} StackNode,*LinkStack;  


// 初始化stack  
int InitStack (LinkStack* x)
{
	*x = NULL;
	return 1;
}  

//入
int Push (LinkStack* x) 
{
	int e;
	StackNode *p;
	p = ((LinkStack) malloc(sizeof(StackNode)));
	printf("请输入要入站的整数\n");
	scanf("%d",&e);
	p->data=e;
	p->next=*x;
	*x=p;
	return 1;
}

int Pop(LinkStack* x)
{
	int e;
	LinkStack p;
	if((*x)==NULL)
{	return 0;  }
	e=(*x)->data;
	printf("%d\n",e);
	p = *x;
	(*x) = (*x)->next;
	free(p);
	return 0;
}


int main()  
{

	LinkStack s;
	int i=0;
	int e=0;
	InitStack(&s);
	printf("请输入要入站的次数\n");
	scanf("%d",&i);
	e=i;
	while (i>0)
{
	i--;
	Push(&s);
}
	printf("入站完成\n");
	while(e)
{
	e--;
	Pop(&s);
}
	printf("  弹站完成  ");
	return 0;
}
