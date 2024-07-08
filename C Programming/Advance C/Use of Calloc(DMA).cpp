#include<stdio.h>
#include<stdlib.h>
int main()
{
	// Use of Calloc()
	int ab;
	int* ptr;
	printf("Enter the Size of Array in Dynamic Memory Allocation:");
	scanf("%d",&ab);
	ptr = (int *)calloc(ab,sizeof(int));
	for(int i = 0; i < ab;i++)
	{
		printf("Enter the Value %i of this array:\n",i);
		scanf("%i",&ptr[i]);
	}
	for(int i = 0; i < ab;i++)
	{
		printf("The Value %i of this Index=%i\n",i,ptr[i]);
	}
	return 0;
}
