#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
void Print(int * A,int size)
{
	for(int i = 0; i<size; i++)
	{
		printf("%d\t",A[i]);
	}
		printf("\n");
}
int maximum(int a[],int n)
{
	int max = INT_MIN;
	for(int i=0;i < n; i++)
	{
		if(max <a[i])
		{
			max = a[i];
		}
	}
	return max;
}
void CountSort(int a[],int n)
{
	int i,j;
	int max = maximum(a,n);
	int * count =(int *)malloc((max+1)*sizeof(int));
	
	for(int i=0;i < max + 1; i++)
	{
		count[i] = 0;
	}
	for(int i=0;i < n; i++)
	{
		count[a[i]] = count[a[i]] + 1;
	}
	i = 0;
	j = 0;
	while(i<=max)
	{
		if(count[i] > 0)
		{
			a[j] = i;
			count[i] = count[i] -1;
			j++;
		}
		else
		{
			i++;
		}
	}
}
int main()
{
	int a[] = {10,50,33,8,40,78};
	int size = 6;
	Print(a,size);
	CountSort(a,size);
	Print(a,size);
	return 0;
}
