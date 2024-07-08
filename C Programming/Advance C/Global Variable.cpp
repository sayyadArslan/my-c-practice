#include<stdio.h>
void glo();
int a=10;
int main()
{
	int a=5;
	printf("%d\n",a);
	glo();
	return 0;
}
void glo()
{
	printf("%d",a);	
}
