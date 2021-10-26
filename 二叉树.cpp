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
 

//˳��ջ 
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

//������ 
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

//��������ݹ� 
void PreOrderTraverse(BiTree T){
	if(T){
		printf("%c\t",T->date);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
} 

//��������ǵݹ� 
//void PreorderTraverse(BiTree T){
//
//}

//��������ݹ�
void InOrderTraverse(BiTree T){
	if(T){
		InOrderTraverse(T->lchild);
		printf("c\t",T->date);
		InOrderTraverse(T->rchild);
	}
}

//��������ǵݹ� 
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
	printf("1��������һ��������\n");
	printf("2����������ݹ�\n");
	printf("3����������ݹ�\n");
	printf("4����������ǵݹ�\n");
	printf("0���˳�ϵͳ/n");

	while(1){
	printf("������Ҫѡ��Ĺ���\n");
	scanf("%d",&choose);
	getchar();
		if(choose==0){
		printf("ϵͳ�˳��ɹ�\n");
		break;
	}
	switch(choose){
		case 5:{
			printf("����\n");
			break;
		}
		case 1:{
			printf("�����������\n");
			CreatBiTree(&T);
			printf("�����ɹ�");
			break;
		}
		case 2:{
			printf("����ݹ�������Ϊ\n");
			PreOrderTraverse(T);
			break;
		}
		case 3:{
			printf("����ݹ�������Ϊ\n");
			InOrderTraverse(T);
			break;
		}
		case 4:{
			printf("����ǵݹ�������Ϊ\n");
			InOrderTraverse2(T);			
			break;
		}
	}
		}
	return 0;
}
































































