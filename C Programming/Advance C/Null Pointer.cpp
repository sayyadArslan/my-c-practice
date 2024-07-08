#include<stdio.h>
int main()
{
	int a;
	int* ptr=NULL;
	printf("The Address of Pointer Variable:%i\n",ptr);// it is a null pointer
	ptr=&a;
	printf("The Address of Pointer Variable:%i",ptr); // its not a null pointer
	
	
	return 0;
}
