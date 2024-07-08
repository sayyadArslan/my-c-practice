#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50,60,70,80};
	int *x;
	int size = sizeof(a)/sizeof(int);
	for(int i=0;i<size;i++)
	{
		x=&a[i];
		printf("Data Of array is:%d\n",*x);
	}
	return 0;
}
