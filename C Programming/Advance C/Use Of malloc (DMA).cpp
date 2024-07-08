#include<stdio.h>
#include<stdlib.h>
int main()
{
	/// use of malloc()---
	int num;
	int* ptr;
	printf("Enter the Size of Array:\n");
	scanf("%d",&num);
	ptr =(int *)malloc(num * sizeof(int));
	for(int i=0;i<num;i++)
	{
		printf("Enter the Value %i of this array\n",i);
		scanf("%i\n",&ptr[i]);
	}
	for(int i=0; i<num; i++)
	{
		printf("The Value %i of this array=%i\n", i,ptr[i]);
	}
	return 0;
}
