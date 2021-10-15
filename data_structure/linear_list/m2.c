#include<stdio.h>   

typedef struct seqList 
{
	int n; 
	int maxLength;  
	ElemType *element;  
}SeqList;   


Status Insert(SeqList *L,int i,ElemType x)   
{
	int j; 
	if (i<-1||i>L->n-1)
	return ERROR;
	if(L->n==L->maxLength)
	return ERROR;
	for(j=L->n-1;j>i;j--)
	L->element[j+1]=L->element[j];
	L->element[i+1]=x;
	L->n++;
	return OK;
}

Status Delete(SeqList*L,int i) 
{
	int j;
	if(i<0||i>L->n-1)
	return ERROR;
	if(L->n==0)
	return ERROR;
	for(j=i+1;j<L->n;j++)
	L->element[j-1]=L->element[j];
	L->n--;
	return OK ;
}


typedef struct node  
{
	ElemType element;   
	struct nodee* link;
}Node;

typedef struct singleList  
{
	struct node* first;
	int n;
}SingleList;


