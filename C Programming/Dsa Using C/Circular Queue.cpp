#include<stdio.h>
#include<stdlib.h>
struct Queue
{
	int size;
	int rear;
	int front;
	int * arr;
};
int Empty(struct Queue * ptr)
{
	if(ptr->rear == ptr->front)
	{
			return 1;
	}
	else
	{
		return 0;
	}
	
}
void Peek(struct Queue * ptr)
{
	
}
int Full(struct Queue * ptr)
{
	if((ptr->rear+1)% ptr->size == ptr->front)
	{	
		return 1;
	}
	else
	{
		return 0;
	}
}
void Enqueue(struct Queue * ptr,int value)
{
	if(Full(ptr))
	{
		
	}
	else
	{
		ptr->rear = (ptr->rear+1) % (ptr->size);
		ptr->arr[ptr->rear] = value;
	}
}
int  Dequeue(struct Queue * ptr)
{
	int a =-1;
	if(Empty(ptr))
	{
		
	}
	else
	{
		ptr->front = (ptr->front +1) % ptr->size;
		a = ptr->arr[ptr->front];
	}
	return a;
}
int main()
{
	struct Queue obj;
	obj.size = 4;
	obj.front = obj.rear = 0;
	obj.arr= (int *)malloc(obj.size * sizeof(int));
/*	Empty(&obj);
	Full(&obj);
	*/
	Enqueue(&obj,50);
	Enqueue(&obj,100);
	Enqueue(&obj,150);
	Enqueue(&obj,200);
	if(Empty(&obj))
	{
		printf("Queue is Empty\n");
	}
	if(Full(&obj))
	{
		printf("Queue is Full\n");
	}
	printf("%d\n",Dequeue(&obj));
	printf("%d\n",Dequeue(&obj));
	printf("%d\n",Dequeue(&obj));
	printf("%d\n",Dequeue(&obj));
	if(Empty(&obj))
	{
		printf("Queue is Empty\n");
	}
	if(Full(&obj))
	{
		printf("Queue is Full\n");
	}
//	Enqueue(&obj,50);
	return 0;
}
