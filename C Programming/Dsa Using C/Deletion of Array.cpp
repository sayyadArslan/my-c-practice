#include<stdio.h>
void Display(int arr[],int size);
void IndexDeletion(int arr[],int element,int Size);
int main()
{
	int a[10]={10,20,30,40,50};
	int Pos=4;//---------->Position Of Values that you Want to Delete
	int size; //---------->Total Size Of Array 
	int usedsize =5;//---->Total Size Of Array That Used in:
	size =sizeof(a)/sizeof(int);
	Display(a,size);
	printf("\n");
	IndexDeletion(a,usedsize,Pos);
	usedsize--;
	printf("\n");
	Display(a,size);
	return 0;
}
void Display(int arr[],int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%d\t",arr[i]);
	}
}
void IndexDeletion(int arr[],int usedsize,int Pos)
{
	for(int i = Pos; i<usedsize; i++)
	{
		arr[i]=arr[i+1];
	}
}
