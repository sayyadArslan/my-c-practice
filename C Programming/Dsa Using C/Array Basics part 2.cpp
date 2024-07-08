#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4]={10,15,35,40};
	for(int i=0;i<4;i++)
	{
		if(a[i]%2==0)
		{
			printf("Prime Number is:%d\n",a[i]);	
		}
	}
	for(int i=0;i<4;i++)
	{
		if(a[i]%2!=0)
		{
			printf("Odd Number is:%d\n",a[i]);
		}
	}
	int sum=0;
	for(int i=0;i<4;i++)
	{
		sum =sum+a[i];
	}
	printf("Sum is:%d",sum);
	
	
	return 0;
}
