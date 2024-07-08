#include<stdio.h>
int Sum(int a,int b)
{
	static int c=0;
	printf("%i\n",c);
 	c++;
 /*	printf("%i\n",c);
	c=a+b;*/
	/****-------Static variable is variable that is initializad at one time
	Compiler execute static variable at one time --------***/
	return c;
}
int main()
{
	int a=Sum(10,50);
	int b=Sum(10,50);
	int c=Sum(10,50);
	int d=Sum(10,50);
//	printf("%i\n",a);
//	printf("%i\n",b);
	return 0;
}
