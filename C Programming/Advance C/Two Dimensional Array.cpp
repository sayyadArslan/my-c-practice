#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2]={10,20,30,40};
	for(int i=0;i<2;i++)
	{
		printf("\n");
		for(int j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	return 0;
}
