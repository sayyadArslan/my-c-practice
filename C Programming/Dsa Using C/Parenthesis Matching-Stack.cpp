#include<stdio.h>
#include<stdlib.h>
struct Stack
{
	int Top,size;
	char *arr;	
};
int Push(struct Stack * ptr,int Value)
{
	if(ptr->Top !=-1)
	{
		printf("The Stack Is Empty You Cannot Pop from Stack\n");
	}
	else
	{
		ptr->Top++;
		ptr->arr[ptr->Top]=Value;
		return ptr->arr[ptr->Top];
	}
}
int Pop(struct Stack * ptr)
{
	if(ptr->Top == -1)
	{
		printf("Stack UnderFlow\n");
	}
	else	
	{
		int val = ptr->arr[ptr->Top];
		ptr->Top--;
		return val;
	}
}
void EmptyStack(struct Stack * ptr)
{
	if(ptr->Top ==-1)
	{
		printf("The Stack is Empty\n");
	}
	else
	{
		printf("The Stack is Not Empty\n");
	}
}
void FullStack(struct Stack * ptr)
{
	if(ptr->Top ==ptr->size-1)
	{
		printf("The Stack is Full\n");
	}
	else
	{
		printf("The Stack is Not Full\n");
	}
}
int ParenMatch(char *Exp)
{
	struct Stack * sp;
	for(int i=0;Exp[i] !='\0';i++)
	{
		if(Exp[i]=='(')
		{
			Push(sp,'(');
		}
		else if(Exp[i]==')')
		{
			Pop(sp);
		}
	}
}
int main()
{
	char * exp = "8*)*(9";
	struct Stack  *st;
	st =(struct Stack *)malloc(sizeof(struct Stack));
	st->Top =-1;
	st->size =10;
	st->arr = (char *)malloc(sizeof(struct Stack));
	 ParenMatch(exp);
/*	EmptyStack(st);
	FullStack(st);*/
	return 0;
}
