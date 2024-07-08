#include<stdio.h>
#include<conio.h>
void Display(int arr[],int size);
void IndexInsert(int arr[],int element,int index,int size);
int main()
{
	int b[10]={50,100,150,200,250,300};
	int pos1=3,num1=500;
	int c;
	 int n1 =sizeof(b)/sizeof(int); 
	/* printf("%d\n",n1);
	 n1-------> size of The Array
	 pos1-----> Position that you want to change in Array Value
	 num1-----> Element That you want To add In ARRAY*/
	Display(b,n1);
	printf("\n");
	IndexInsert(b,num1,pos1,n1);
	printf("\n");
	Display(b,n1);
	return 0;
}
void Display(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
		
	}
}
void IndexInsert(int arr[],int element,int pos,int size)
{
	for(int i=size-1;i>=pos;i--)
	{
	 	arr[i+1] = arr[i];	
	}
	arr[pos]=element;	
}
