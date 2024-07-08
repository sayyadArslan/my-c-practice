#include<stdio.h>
#include<stdlib.h>
int StackBottom(struct stack * ptr);
int StackTop(struct stack * ptr);
struct stack
{
	int top;
	int size;
	int * arr;
};
int main()
{
	struct stack  *st;
	st =(struct stack *)malloc(sizeof(struct stack));
	st->top =-1;
	st->size =10;
	st->arr= (int *)malloc(sizeof(struct stack));
	int a = StackTop(st);
	printf("%d\n",a);
	printf("%d\n",StackBottom(st));
	return 0;
}
int StackTop(struct stack * ptr)
{
	return ptr->arr[ptr->top];
}
int StackBottom(struct stack * ptr)
{
	return ptr->arr[0];
}
