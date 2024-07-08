#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
void Traversal(struct Node *ptr)
{	
	while(ptr!=NULL)
	{
		printf("The data Is:%d\n",ptr->data);
		ptr=ptr->next;
	}
}

int main()
{
	struct Node* first;
	struct Node* second;
	struct Node* third;
	first =(struct Node *)malloc(sizeof(struct Node));
	second =(struct Node *)malloc(sizeof(struct Node));
	third =(struct Node *)malloc(sizeof(struct Node));
	first->data = 10;
	first->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = NULL;
	Traversal(first);
	return 0;
}
