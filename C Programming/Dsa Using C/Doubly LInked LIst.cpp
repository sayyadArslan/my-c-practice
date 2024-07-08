#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
	struct Node *prev;
	int data;
	struct Node * next;	
};
void Traversal(struct Node *ptr)
{	
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	struct Node * first;
	struct Node * Second;
	struct Node * Third;
	struct Node * Fourth;
	first =(struct Node*)malloc(sizeof(struct Node));
	Second =(struct Node*)malloc(sizeof(struct Node));
	Third =(struct Node*)malloc(sizeof(struct Node));
	Fourth =(struct Node*)malloc(sizeof(struct Node));
	first->prev = NULL;
	first->data =50;
	first->next = Second;	
	Second->prev = first->next;
	Second->data =60;
	Second->next = Third;
	Third->prev = Second->next;
	Third->data =70;
	//Third->next = Fourth;
	Fourth->prev = Third->next;
	Fourth->data =80;
	Fourth->next = NULL;
	Traversal(first);
	return 0;
}
