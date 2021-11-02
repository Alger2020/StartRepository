//顺序表
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

/*-------------线性表的动态分配顺序存储结构---------------------*/

#define LIST_INIT_SIZE 100  //线性表存储空间的初始分配量
#define LISTINCREMENT 10  //线性表存储空间的分配增量
#define ElemType int
typedef struct
{
	ElemType  *elem;
	int length;
	int listsize;
}SqList;

/*-------------------算法2.3-------------------------*/
/*------------------构造空线性表----------------------*/
Status InitList_Sq(SqList *L)  
{
	L->elem=(int*)malloc(LIST_INIT_SIZE*sizeof(int));
	if(!L->elem)
	{
		exit(OVERFLOW);
	}
	L->length=0;
	L->listsize=LIST_INIT_SIZE;
	return OK;
}

/*-------------------算法2.4--------------------------*/
/*------------------线性表的插入----------------------*/
Status ListInsert_Sq(SqList *L,int i,ElemType e)
{
	// 在顺序线性表L中第i个位置之前插入新的元素e，
	// i的合法值为1<=i<ListLength_Sq(L)+1  
	if(i<1||i>L->length+1)
	{
		return ERROR;  //i值不合法   
	}
	if(L->length>=L->listsize)  //当当前存储空间已满，增加分配
	{	
		//realloc(要改变内存大小的指针名,改变后的大小);   
		//先判断当前的指针是否有足够的连续空间，如果有，扩大mem_address指向的地址，
		//并且将mem_address返回，如果空间不够，先按照newsize指定的大小分配空间，
		//将原有数据从头到尾拷贝到新分配的内存区域，而后释放原来mem_address所指内存区域
		//（注意：原来指针是自动释放，不需要使用free），同时返回新分配的内存区域的首地址。
		//即重新分配存储器块的地址。
		ElemType* newbase =(ElemType*)realloc(L->elem,(L->listsize+LISTINCREMENT)*sizeof(ElemType));
		if (!newbase)
		{
			exit(OVERFLOW);  //存储分配失败  
		}
		L->elem=newbase;            //新地址
		L->listsize += LISTINCREMENT;//增加存储容量  
	}  
	ElemType* q =&(L->elem[i-1]);
	for(ElemType *p=&(L->elem[L->length-1]);p>=q;p--)
	{
		*(p+1)=*p;//插入位置及之后的元素右移
	}
	*q=e; //插入e
	(L->length)++;//表增加1
	return OK;
}


/*-------------------算法2.5--------------------------*/
/*------------------线性表的删除----------------------*/

Status ListDelee_Sq(SqList *L,int  i,ElemType *e)
{
	//在顺序线性表L中删除第i个元素，并用e返回其值  
	//i的合法值为1<=i<=ListLength_Sq(L)
	if((i<1)||(i>L->length))
	{
		return ERROR;   //i值不合法   
	}
	ElemType *p=&(L->elem[i-1]);  //p为被删除元素的位置  
	*e=*p;                        //被删除元素的值赋给e
	ElemType *q=&(L->elem[L->length-1]);//表尾元素的位置
	for(p;p<q;p++)
	{
		*p=*(p+1);             //被删除元素之后的元素左移
	}
	(L->length)--;
	return OK;
}



int main()
{
	SqList L;
	InitList_Sq(&L);
	

	return 0;
}







