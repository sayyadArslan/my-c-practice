#include<stdio.h>
#include<stdlib.h>
int main()
{
	// Use of Realloc()
	int a;
	int* ptr;
	printf("Enter the Size of Array in Heap::");
	scanf("%i",&a);
	ptr = (int*)realloc(ptr,a*sizeof(int));
	for(int i=0;i<a;i++)
	{
		printf("Enter The Values of Array ptr[%i]:\n",i);
		scanf("%i",&ptr[i]);
	}	
	for(int i=0;i<a;i++)
	{
		printf("The Values of Array  in ptr[%i] is %i\n",i,ptr[i]);
	}
	free(ptr);
	printf("The Memory is Freed: ");
	return 0;
}
