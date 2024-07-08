#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack * prev;
	struct stack * next;	
};
void Traversal(struct stack *ptr)
{	
	while(ptr!=NULL)
	{
		printf(":%d\n",ptr->data);
		ptr=ptr->next;
	}
}
struct stack * InsertFirst(struct stack * ptr ,int value)
{
	struct stack * head = (struct stack *)malloc(sizeof(struct stack));
		head->prev = NULL;
		head->data=value;
		head->next = ptr;
		return head;
}
struct stack * InsertLast(struct stack * ptr ,int value)
{
	struct stack * head = (struct stack *)malloc(sizeof(struct stack));
	struct stack * p = ptr;	
	 while(p->next != NULL)
	{
	  		p = p->next;
	}
		p->next = head;
		head->prev = p;
		head->data = value;	
		head->next = NULL;
		return ptr;
}
struct stack * InsertIndex(struct stack * ptr,int value,int index)
{
	struct stack * head =(struct stack *)malloc(sizeof(struct stack));
	struct stack * p = ptr;
	for( int i=0; i !=index-1; i++)
	{
		p =p->next;
	}	
	head->prev = p->next;
	head->data = value;
	head->next = p->next;
	p->next = head;
	return ptr;	
}

int main()
{
	struct stack * First;
	struct stack * Second;
	struct stack * Third;
	struct stack * Fourth;
	First =(struct stack *)malloc(sizeof(struct stack));
	Second =(struct stack *)malloc(sizeof(struct stack));
	Third =(struct stack *)malloc(sizeof(struct stack));
	Fourth =(struct stack *)malloc(sizeof(struct stack));
	First->prev=NULL;
	First->data = 10;
	First->next = Second;
	Second->prev = First;
	Second->data = 20;
	Second->next = Third;
	Third->prev = Second;
	Third->data = 30;
	Third->next = Fourth;
	Fourth->prev = Third;
	Fourth->data = 50;
	Fourth->next = NULL;
	//Traversal(First);
//	First = InsertFirst(First,100);
//	Traversal(First);
/*	First = InsertLast(First,150);
	Traversal(First);*/
	First =InsertIndex(First,400,2);
	Traversal(First);
	return 0;
}
