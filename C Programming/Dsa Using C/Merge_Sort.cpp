#include<stdio.h>
void Print(int * A,int size)
{
	for(int i = 0;i < size;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
}
void Merge(int a[],int mid,int low,int high)
{
	int i,j,k,b[100];
	i = low;
	j = mid + 1;
	k = low;
	while(i<=mid && j <=high )
	{
		if(a[i] < a[j])
		{
			b[k] = a[i];
			i++;
			k++;
		}
		else
		{
			b[k] = a[j];
			j++;
			k++;
		}
	} 
	while(i <= mid)
	{
			b[k] = a[i];		
			k++;
			i++;
	}
	while(j <= high)
	{
			b[k] = a[j];		
			k++;
			j++;
	}
	for(int i =low; i<=high; i++)
	{
		a[i] = b[i];
	}
}
void MergeSort(int * A,int low,int high)
{
	int mid;
	if(low < high)
	{
		mid = (low+high) /2;
		MergeSort(A,low,mid);
		MergeSort(A, mid +1 ,high);
		Merge(A,mid,low,high);
	}
}
int main()
{
	int a[] = {10,36,50,24,9,15};
	int size = 6;
	Print(a,size);
	MergeSort(a,0,6);
	Print(a,size);
	return 0;
}
