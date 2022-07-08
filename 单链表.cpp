#include<stdio.h>
#include<stdlib.h>

typedef int SLTDataType;

typedef struct SListNode
{
	int data;
	struct SListNode* next;
}SLTNode;

void f1(SLTNode* phead);
void SListPushBack(SLTNode** phead,SLTDataType x);
void test1();


 void f1(SLTNode* phead)
{   while(phead!=NULL)
	{
	printf("%d->",phead->data);
	phead=phead->next;
	}
}

 void SListPushBack(SLTNode** phead,SLTDataType x)
{   SLTNode*new=malloc(sizeof(SLTNode));
	new->data=x;
	new->next=NULL;
	if(*phead==NULL){
		*phead=new;
	}
	else{	
	SLTNode* tail=*phead;
	while(tail->next!=NULL)
	{
		tail=tail->next;
	}
	tail->next=new;
	}
}

void test1()
{  
    SLTNode* plist=NULL;
    SListPushBack(&plist,1);
	SListPushBack(&plist,2);
	SListPushBack(&plist,3);
    SListPushBack(&plist,4);
	SListPushBack(&plist,5);
	
	f1(plist);	
}

int main()
{
	test1();
	return 0;
}

