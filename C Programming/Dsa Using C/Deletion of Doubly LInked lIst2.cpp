#include<stdio.h>
#include<stdlib.h>
struct stack
{
	struct stack * prev;
	int data;
	struct stack *next;	
};
void Traversal(struct stack * ptr)
{
	while(ptr != NULL)
	{
		printf("%d\n",ptr->data);
		ptr =ptr->next;
		//Important Line
	}
}
struct stack * DeleteFirst(struct stack * ptr)
{
	struct stack * head = ptr;
	ptr = ptr->next;
	ptr->prev = NULL;
	free(head);
	return ptr;
}
struct stack * DeleteLast(struct stack * ptr)
{
	struct stack * p = ptr;
	struct stack * q = ptr->next;	
	while(q->next!=NULL)
	{
	
		p =p->next;
		//Important Line
		q =q->next;
	}
		p->next=NULL;
		free(q);
		return ptr;	
}
struct stack * DeleteIndex(struct stack * ptr,int index)
{
	struct stack * p = ptr;
	struct stack * q = ptr->prev;	
	while(q->data != index)
	{
	
		p =p->next;//Important Line
		q =q->prev;
	}
		p->next = q->next;
		free(q);
		return ptr ;	
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
	/*Traversal(First);
	printf("---------------------\n");
	First = DeleteFirst(First);
	Traversal(First);
	printf("---------------------\n");
	First = DeleteLast(First);
	Traversal(First);*/
	First = DeleteIndex(First,1);
	Traversal(First);
	return 0;
}
