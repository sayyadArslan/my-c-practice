#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Array
{
	int total;
	int used;
	int * ptr;	
};
void CreateArray(struct Array *a,int tsize,int usize)
{
	a->total = tsize;
	a->used = usize;
	a->ptr = (int*)malloc(tsize *sizeof(int));
}
void Show(struct Array *a)
{
	for(int i=0;i<a->used;i++)
	{
		printf("%d\n",(a->ptr)[i]);
	}
}
void Setvalue(struct Array *a)
{
	int n;
	for(int i=0;i<a->total;i++)
	{
		printf("Enter Values:");
		scanf("%d",&n);
		(a->ptr)[i]=n;
	}
}
int main()
{
	struct Array Myarray;
	CreateArray(&Myarray,3,3);
	Setvalue(&Myarray);
	Show(&Myarray);
	return 0;
}
