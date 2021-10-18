//顺序表
#include<stdio.h>   

#define LIST_INIT_SIZE 100  //初始分配量
#define LISTINCREMENT 10  //分配增量
typedef struct
{
	int  *elem;
	int length;
	int listsize;
}SqList;
