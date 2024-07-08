#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int x=10;
	int *y,**z;
	y=&x;
	z=&y;
	printf("%d\n",**z);
	//return 0;
}
