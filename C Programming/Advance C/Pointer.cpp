#include<stdio.h>
int main()
{
	int a=10;
	printf("The Address of a=%i\n",&a);
	int *ptr;
	printf("The Adress of pointer Variable ptr=%i\n",ptr);
	ptr = &a;
	printf("Now,The  Adress of Ptr=%i\n",ptr);
	printf("Now,The Value of *ptr=%i",*ptr);


	//printf("%i",a);
	return 0;
}
