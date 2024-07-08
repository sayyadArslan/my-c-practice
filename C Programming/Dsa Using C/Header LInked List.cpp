#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * next;
};
void Traversal(struct Node * ptr)
{
	while(ptr != NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}
}
struct Node * Count(struct Node * ptr)
{
	struct Node * a;
	while(ptr->next != NULL)
	{
			a = ptr->next;
	}
		return a;
	
}
int main()
{
	struct Node* first;
	struct Node* second;
	struct Node* third;
	struct Node* Fourth;
	first =(struct Node *)malloc(sizeof(struct Node));
	second =(struct Node *)malloc(sizeof(struct Node));
	third =(struct Node *)malloc(sizeof(struct Node));
	Fourth =(struct Node *)malloc(sizeof(struct Node));
	first->data = 0;
	first->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = Fourth;
	Fourth->data = 40;
	Fourth->next = NULL;
	Count(first);
//	Traversal(second);
	return 0;
}
