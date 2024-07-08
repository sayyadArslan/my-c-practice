#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void Wellcome();

int main()
{
	printf("*************Enter Student Record Management*************\n");
	int size;
	printf("Enter Total Students:");
	scanf("%d",&size);
	int a[size];
	for(int i=0;i<size;i++)
	{
	printf("Enter Student Marks:");
	scanf("%d",&a[i]);
	}
	for(int i=0;i<size;i++)
	{
		printf("Roll no.%d marks is:%d\n",i,a[i]);
	}
	int max=a[0];
	
	for(int i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Maximum Marks is %d:\n",max);
	max=a[0];
	for(int i=0;i<size;i++)
	{
		if(a[i]<max)
		{
			max=a[i];
		}
	}
	printf("Minimum Marks is %d:\n",max);
	printf("If You Change Marks,Replace,Delete\n press! 1 for Update \n Press 2 for Delete:");
	int crud;
	scanf("%d",&crud);
	int pos,Num,n;
	if(crud==1)
	{
		printf("Enter Rollno:");
		scanf("%d",&pos);
		printf("Enter Marks:");
		scanf("%d",&Num);
		printf("Enter Previous Marks:");
		scanf("%d",&n);
		for(int i=n-1;i>=pos;i--)
		{
			a[pos]=Num;
			n++;
		}
	for(int i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	}
	return 0;
}
