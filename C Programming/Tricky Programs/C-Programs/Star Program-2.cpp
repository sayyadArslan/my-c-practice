#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++) // This Loop Control Rows;
	{
		for(j=1;j<=i;j++) // This Loop Control Columns;
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
