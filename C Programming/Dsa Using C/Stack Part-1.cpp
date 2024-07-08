#include<stdio.h>
#include<stdlib.h>
struct Stack
{
	int top,size;
	int *arr;
};
int EmptyStack(struct Stack *ptr)
{
	if(ptr->top==-1)
	{
		printf("The Stack Is Empty\n");
	}
	else
	{
		printf("The Stack Is not Empty\n");
	}
}
int FullStack(struct Stack *ptr)
{
	if(ptr->top == ptr->size-1)
	{
		printf("The Stack Is Full\n");
	}
	else
	{
		printf("The Stack Is not Full\n");
	}
}
int Push(struct Stack * ptr,int Value)
{
	
	if(ptr->top != ptr->size-1)
	{		
		ptr->top++;
		ptr->arr[ptr->top]=Value;
		return ptr->arr[ptr->top];
	}
	else
	{
		printf("Stack Overflow\n");
	}
}
int Pop(struct Stack * ptr)
{
	if(ptr->top == -1)
	{
		printf("Stack UnderFlow\n");
	}
	else	
	{
		int val = ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}
int main()
{	
	struct Stack *st= (struct Stack *)malloc(sizeof(struct Stack));
	st->size=5;
	st->top=-1;
	st->arr=(int *)malloc(sizeof(struct Stack));
	Push(st,10);// 10 store at 0-index
	Push(st,20); // 20 store at 1-index
	Push(st,30); // 30 store at 2-index
	Push(st,40);// 40 store at 3-index
	Push(st,50);//50 store at 4-index
	FullStack(st);
	Push(st,60); // stack Overflow
	Pop(st);// 50 remove from stack
	Pop(st);// 40 remove from stack
	Pop(st);// 30 remove from stack
	Pop(st);// 20 remove from stack
	Pop(st);// 10 remove from stack
	EmptyStack(st);
	return 0;
}
