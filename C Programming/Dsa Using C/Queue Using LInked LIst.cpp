#include<stdio.h>
#include<stdlib.h>
struct Queue * front = NULL;
struct Queue * rear = NULL;
struct Queue
{
	int data;
	struct Queue * next;	
};
void Enqueue(int value)
{
	struct Queue * n = (struct Queue *) malloc (sizeof(struct Queue));
	if(n == NULL)
	{
		
	}
	else
	{
		n->data = value;
		n->next = NULL;
		if(front == NULL)
		{
			front = rear = n;
		}
		else
		{
			rear->next = n;
			rear = n;
		}
	}
}
int Dequeue(struct Queue * ptr)
{
	int a = -1;
		struct Queue * n;
	if(n == NULL)
	{
		
	}
	else
	{
		front = front->next;
		a = ptr->data;
		free(ptr);
	}
	return a;
}
void Traversal(struct Queue * ptr)
{
	
	while(ptr != NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}
}
int main()
{

	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Traversal(front);
	Dequeue(front);
	Traversal(front);
	return 0;
}
