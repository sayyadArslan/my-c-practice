#include<stdio.h>
int main()
{
	int a =100;
	float pi=3.15;
	void* ptr;
	ptr=&a;
	printf("Void Pointer Points To Integer Variable %i\n",*((int*)ptr));
	ptr=&pi;
	printf("Void Pointer Points To Float Variable Variable %.2f\n",*((float*)ptr));
	return 0;
}
