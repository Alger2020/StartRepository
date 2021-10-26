#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


typedef int Status;
#define OK 1;
#define ERROR 0;

typedef struct BiNode{
	struct BiNode *lchild,*rchild;
	char date;
}BiNode,*BiTree;

#define MAXSIZE 50
//typedef *BiTree ElemType;
typedef struct{
	BiTree* base;
	BiTree* top;
	int stacksize;
 }sqstack;
 

//顺序栈 
 Status InitStack(sqstack *s){
 	s->base=((BiTree*)malloc(MAXSIZE*sizeof(BiTree)));
 	if(!s->base){
 		return ERROR;
	 }
	 	s->top=s->base;
	 	s->stacksize=MAXSIZE;
	 	return OK;

 }
 
 Status Push(sqstack *s,BiTree e){
 	if(s->top-s->base==s->stacksize){
 		return ERROR;
	 }
	 *(s->top)=e;
	 s->top++;
	 return OK;
 }
 
 Status Pop(sqstack *s,BiTree *e){
 	if(s->top==s->base){
 		return ERROR;
	 }
	 *e=*--(s->top);
	 return OK;
 }
 
 Status IsEmpty(sqstack s){
 	if(s.top==s.base) return OK;
 }

//先序建立 
void CreatBiTree(BiNode **T){
	T=(BiNode**)malloc(sizeof(BiNode*)); 
	char c;
	scanf("%c",&c);
	if(c=='#'){
		*T=NULL;
		return;	
	}
	else {
		(*T)->date=c;
		CreatBiTree(&((*T)->lchild));
		CreatBiTree(&((*T)->rchild));
	}
}

//先序遍历递归 
void PreOrderTraverse(BiTree T){
	if(T){
		printf("%c\t",T->date);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
} 

//先序遍历非递归 
//void PreorderTraverse(BiTree T){
//
//}

//中序遍历递归
void InOrderTraverse(BiTree T){
	if(T){
		InOrderTraverse(T->lchild);
		printf("c\t",T->date);
		InOrderTraverse(T->rchild);
	}
}

//中序遍历非递归 
void InOrderTraverse2(BiTree T){
	sqstack *S;
	BiTree q;
	InitStack(S);
	if(T){
		Push(S,T);
		T=T->lchild;
	}
	else{
		Pop(S,&q);
		printf("%c\t",q->date);
		T=q->rchild;
	}
}


int main(){
	BiTree T;
	int choose=0;
	printf("1、先序建立一个二叉树\n");
	printf("2、先序遍历递归\n");
	printf("3、中序遍历递归\n");
	printf("4、中序遍历非递归\n");
	printf("0、退出系统/n");

	while(1){
	printf("请输入要选择的功能\n");
	scanf("%d",&choose);
	getchar();
		if(choose==0){
		printf("系统退出成功\n");
		break;
	}
	switch(choose){
		case 5:{
			printf("哈哈\n");
			break;
		}
		case 1:{
			printf("请输入二叉树\n");
			CreatBiTree(&T);
			printf("建立成功");
			break;
		}
		case 2:{
			printf("先序递归遍历结果为\n");
			PreOrderTraverse(T);
			break;
		}
		case 3:{
			printf("中序递归遍历结果为\n");
			InOrderTraverse(T);
			break;
		}
		case 4:{
			printf("中序非递归遍历结果为\n");
			InOrderTraverse2(T);			
			break;
		}
	}
		}
	return 0;
}
































































