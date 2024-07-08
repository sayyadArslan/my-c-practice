#include<stdio.h>
#include<conio.h>
void Print(int * A,int size)
{
	for(int i = 0;i < size;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
}
void Selection_Sort(int * A,int size)
{
	int temp;
	int index;
	for(int i =0;i < size-1;i++)
	{
		index = i;
		for(int j =i+1; j < size; j++)
		{
			if(A[j] <A[index])
			{
				index = j;
			}
		}
		temp = A[i];
		A[i] = A[index];
		A[index] = temp;
	}
}
int main()
{
	//	        0  1  2  3 4  5 
	int a[] = {10,36,50,24,9,15};
	int size = 6;
	Print(a,size);
	Selection_Sort(a,size);
	Print(a,size);
	return 0;
}
