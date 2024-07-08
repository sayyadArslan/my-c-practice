#include<stdio.h>
#include<stdlib.h>
struct Deque
{
	int * arr;
	int front,rear;
	int size;
};
void AddFront(struct Deque * ptr,int value)
{
	
}
void AddRear(struct Deque * ptr,int value);
void RemoveRear(struct Deque * ptr);
void RemoveFront(struct Deque * ptr);
void Peek(struct Deque * q)
{
	for(int i=0;i<q->rear;i++)
	{
		printf("%d\n",q->arr[i]);	
	}
}
int Full(struct Deque * q)
{
	if(q->rear ==q->size-1)
	{
		printf("Queue is Full\n");
	}
	return 0;
}
int Empty(struct Deque * q)
{
	if(q->rear ==q->front)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is Not Empty\n");
	}
	return 0;
}
void Enqueue(struct Deque * ptr,int value)
{
	if(Full(ptr))
	{
		
	}
	else
	{
		ptr->rear++;
 		ptr->arr[ptr->rear] = value;
	}
}
int  Dequeue(struct Deque * ptr)
{
	int a= -1;
	ptr->front++;
	a = ptr->arr[ptr->front];
	return a;
}
int main()
{
	struct Deque First;
	First.size = 5;
	First.front = First.rear = -1;
	First.arr = (int *)malloc(First.size *sizeof(int));
	Empty(&First);
	Enqueue(&First,10);
	Dequeue(&First);
	Empty(&First);
	Peek(&First);
	return 0;
}
