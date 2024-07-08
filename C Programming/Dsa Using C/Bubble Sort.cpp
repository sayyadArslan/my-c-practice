#include<stdio.h>
int Bubble_Sort(int * A,int size)
{
	int temp;
	int Sort = 0;
	
	for(int i=0;i<size-1;i++) // for Number of Pass
	{
		for(int j=0; j<size-1-i;j++) // For Comparision of each Pass
		{
			if(A[j] > A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				Sort = 0;  
			}	
		}
	}

}
void Print(int  * A,int size)
{
	for(int i=0;i<size; i++)
	{
		printf("%d\t",A[i]);
	}
		printf("\n");
}
int main()
{
	int a[] ={40,70,43,52,90,85,12,20,70}; // Unsorted Array
	int b[7] ={10,20,30,40,50,60,70}; // Sorted Array
	int size = sizeof(a)/sizeof(int);
//	int siz = sizeof(b)/sizeof(int);
//	printf("%d",size);
	Print(a,size);
	Bubble_Sort(a,size);
	Print(a,size);
	//Print(b,7);
	/*Bubble_Sort(b,7);
	Print(b,7);
	return 0;*/
}
