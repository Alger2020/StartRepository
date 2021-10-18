//顺序表
#include<stdio.h>   
#include<stdlib.h>
#define LIST_INIT_SIZE 100  //初始分配量
#define LISTINCREMENT 10  //分配增量
#define OK 1
#define ERROR 1
#define TRUE 1  
#define FALSE 0  
#define INFEASIBLE -1 
#define OVERFLOW -2  
#define Status int  
typedef struct
{
	int  *elem;
	int length;
	int listsize;
}SqList;

Status InitList_Sq(SqList *L)  
{
	L->elem=(int*)malloc(LIST_INIT_SIZE*sizeof(int));
	if(!L->elem)
	exit(OVERFLOW);
	L->length=0;
	L->listsize=LIST_INIT_SIZE;
	return OK;
}

Status ListInsert_Sq(SqList *L,int i,int e)
{
	if(i<1||i>L->length+1)
	return ERROR;
	if(L->length>=L->listsize)
	{
		int* newbase =(int*)realloc(L->elem,(L->listsize+LISTINCREMENT)*sizeof(int));
		if (!newbase)
		exit(OVERFLOW);
		L->elem=newbase;
		L->listsize += LISTINCREMENT;
	}  
	int *q =&(L->elem[i-1]);
	for(int *p=&(L->elem[L->length-1]);p>=q;p--)
	*(p+1)=*p;
	*q=e;
	L->length++;
	return OK;
}

Status ListDelee_Sq(SqList *L,int i,int *e)
{
	if((i<1)||(i>L->length))
	return ERROR;
	int *p=&(L->elem[i-1]);
	*e=*p;
	int *q=&(L->elem[L->length-1])
	for(p;p<=q;p++)
	*p=*(p+1);
	L->length--;
	return OK;
}

int


int main()
{
	SqList L;
	InitList_Sq(&L);
	

	return 0;
}







