#include<stdio.h>
int BinarySearch(int arr[],int size,int element)
{
	int low,mid,high=0;
	high=size-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
		if(arr[mid]<element)
		{
			low=mid+1;
		}
		else
		{
			high =mid-1;
		}
	}
}
int main()
{
	int a[10]={10,20,30,40,50,60,70,80,90,100};
	int size=sizeof(a)/sizeof(int);
	int Element=800;
	int c=BinarySearch(a,size,Element);
	if(c>0)
	{
		printf("The Element Is Found At Index %d",c,Element);
	}
	return 0;
}
