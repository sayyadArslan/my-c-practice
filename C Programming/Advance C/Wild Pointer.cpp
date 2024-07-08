#include<stdio.h>
int main()
{
	int a=334;
	int* ptr; // This is a Wild Pointer
	ptr=&a; // Now this Is not a wild Pointer
	printf("a=%i",*ptr);
	return 0;
}
