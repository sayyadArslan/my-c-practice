#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void Max();
void Min();
int a[10];
int size;
int max;
int main()
{

	printf("Enter The Size of Array:");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		if(a[10]>a[i])
		{
			printf("Enter the Values:");
			scanf("%d",&a[i]);	
		}
	}
	Max();
	Min();
	return 0;
}
void Max()
{
	max=a[0];
	for(int i=1;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];	
		}	
	}
	printf("Maximum Value is:%d\n",max);
}
void Min()
{
	max=a[0];
	for(int i=1;i<size;i++)
	{
		if(a[i]<max)
		{
			max=a[i];	
		}		
	}
	printf("Minimum Value is:%d",max);
}
