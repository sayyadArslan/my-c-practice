#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * next;
};
void Traversal(struct Node * ptr)
{	
	struct Node * head = ptr;
	do
	{
	printf("%d\n",head->data);
	head = head->next;	
	}
	while(head!=ptr);
}
struct Node * InsertatFirst(struct Node * head,int data)
{
	// Circular Linked List;
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data =data;
	struct Node * p = head->next;
	while(p->next !=head)
	{
			p = p->next;		
	}
	p->next = ptr;
	ptr->next = head;
	head = ptr;
	return head;

}
int main()
{
	struct Node * First;
	struct Node * Second;
	struct Node * Third;
	First = (struct Node *)malloc(sizeof(struct Node));
	Second = (struct Node *)malloc(sizeof(struct Node));
	Third = (struct Node *)malloc(sizeof(struct Node));
	First->data =10;
	First->next=Second;
	Second->data =50;
	Second->next=Third;
	Third->data =30;
	Third->next=First;
	//Traversal(First);
	First =InsertatFirst(First,100);
	Traversal(First);
}

