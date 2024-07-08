#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int Id;
	struct Node *next;	
};
void Traversal(struct Node *a)
{
	while(a!=NULL)
	{
		printf("%d\n",a->Id);
		a =a->next;//Important Line
	}
}
struct Node * DeleteFirst(struct Node *ptr)
{
		struct Node * ptr1 = ptr;
		ptr = ptr->next;
		free(ptr1);
		return ptr;	
};
struct Node * DeleteatIndex(struct Node *ptr,int data)
{
	struct Node * p = ptr;
	struct Node * q = ptr->next;	
	while(q->Id!=data)
	{
	
		p =p->next;//Important Line
		q =q->next;
	}
		p->next=q->next;
		free(q);
		return ptr;	
};
struct Node * DeleteatEnd(struct Node *ptr)
{
	struct Node * p = ptr;
	struct Node * q = ptr->next;	
	while(q->next!=NULL)
	{
	
		p =p->next;//Important Line
		q =q->next;
	}
		p->next=NULL;
		free(q);
		return ptr;	
};
int main()
{
	struct Node * First;
	struct Node * Second;
	struct Node * Third;
	First =(struct Node *)malloc(sizeof(struct Node));
	Second = (struct Node *)malloc(sizeof(struct Node));
	Third = (struct Node *)malloc(sizeof(struct Node));
	First->Id = 50;
	First->next = Second;
	Second->Id=100;
	Second->next =Third; 
	Third->Id=150;
	Third->next =NULL; 
	Traversal(First);
	printf("--------------------------\n");
	First = DeleteFirst(First);
	Traversal(First);	
	//--------------------------------------------------------
/*	First = DeleteatIndex(First,100);
	Traversal(First);
	First = DeleteatEnd(First);
	Traversal(First);*/
}
