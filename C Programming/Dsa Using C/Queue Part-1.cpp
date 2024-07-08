#include<stdio.h>
#include<stdlib.h>
struct Queue
{
	int size;
	int front,rear;
	int * arr; 
};
int Full(struct Queue * q)
{
	if(q->rear ==q->size-1)
	{
		printf("Queue is Full\n");
	}
	return 0;
}
int Empty(struct Queue * q)
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
void Enqueue(struct Queue * ptr,int value)
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
int  Dequeue(struct Queue * ptr)
{
	int a= -1;
	ptr->front++;
	a = ptr->arr[ptr->front];
	return a;
}
void Peek(struct Queue * q)
{
	for(int i=0;i<=q->rear;i++)
	{
		printf("%d\n",q->arr[i]);	
	}
}
int main()
{
	struct Queue q;
	q.size =5;
	q.front = q.rear = -1;
	q.arr = (int *)malloc(q.size *sizeof(int));
	Empty(&q); // Cheack wether is empty or not	
	//Inserting Elements In The Queue
	Enqueue(&q,10); //0-index				
	Enqueue(&q,20); //1-index
	Enqueue(&q,30); //2-index
	Enqueue(&q,40); //3-index
	Enqueue(&q,50); //4-index
	Peek(&q); // Display Elements of the Queue
	printf("----------------------------------\n");
	// Deleting Elements In The Queue
	Dequeue(&q);
	Dequeue(&q);
	Dequeue(&q);
	Dequeue(&q);
	Dequeue(&q);
	Empty(&q); 
	return 0;
}
