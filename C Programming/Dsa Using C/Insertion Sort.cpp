#include<stdio.h>
#include<conio.h>
void InsertionSort(int * A,int size) // Loop For Passes
{
	int key;
	int j;
	for(int i = 1; i <=size-1; i++) 	// Loop for Each Pass
	{
		key = A[i];
		j =i-1;	
		while( j>=0 && A[j] > key)
		{
				A[j+1] = A[j];
				j--;
			
		}	
			A[j+1] = key;	
	}
}
void Print(int * A,int  size)
{
	for(int i=0;i<size; i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
}
int main()
{
	int a[] ={20,54,66,23,7,9};
	int size = 6;
	Print(a,size);
	InsertionSort(a,size);
	Print(a,size);
	return 0;
}
