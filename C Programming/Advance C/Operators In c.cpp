#include<stdio.h>
#include<conio.h>
int main()
{
	const int a = 10;
	printf("%d\n",sizeof(a));
	const double b = 10;
	printf("%d\n",sizeof(b));
	const unsigned c = -500;
	printf("%d\n",sizeof(c));
	const signed d = 10;
	printf("%d:%d\n",d,sizeof(d));
	return 0;
}






