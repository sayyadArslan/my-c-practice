#include<stdio.h>
int Linear(int arr[],int size,int element);
int main()
{
	int a[10]={10,20,30,40,50,60};
	int b=Linear(a,10,50);
	if(b==0)
	{
		printf("The Element Is not Found");
	}
//Linear search is a way To find Data In Array One by One 
	return 0;
}
int Linear(int arr[],int size,int element)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i] == element)
		{
			printf("The Elment %d Is Found at Index %d \n",arr[i],i);
			return 1;
		}
	}
	return 0;
}
