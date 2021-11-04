 /*----------------------链表-----------------------------------*/
#include<stdio.h>   
#include<stdlib.h>

/*------------------预定义常量与类型-------------------------------*/
#define OK 1
#define ERROR 1
#define TRUE 1  
#define FALSE 0  
#define INFEASIBLE -1 
#define OVERFLOW -2  
#define Status int  
#define ElemType int 


//----------------------线性表的单链表存储结构——————————————————————*/
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

