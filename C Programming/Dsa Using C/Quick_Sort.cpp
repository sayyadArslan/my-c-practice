#include<stdio.h>
void Print(int * A,int size)
{
	for(int i = 0;i<size;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
}
int partition(int A[],int low,int high)
{
	int pivot = A[low];
	int i =low + 1;
	int j = high; 
	int temp;
	do
	{
		while(A[i] <=pivot)
		{
			i++;
		}
		while(A[j > pivot])
		{
			j--;
		}
		if(i<j)
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;		
		}
	}
		while(i < j);
			temp = A[low];
			A[low] = A[j];
			A[j] = temp;	
			return j;	
}
void QuickSort(int  A[],int low,int high)
{
	int index;
	if(low < high)
	{
		index = partition(A,low,high);
		QuickSort(A,low,index-1);
		QuickSort(A,index+1,high);
	}
}
int main()
{
	int a[]={10,55,60,90,45,3,5};
	int size = 7;
	Print(a,size);
	QuickSort(a,0,size-1);
	Print(a,size);
	return 0;
}
