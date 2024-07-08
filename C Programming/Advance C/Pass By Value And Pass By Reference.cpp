#include<stdio.h>
//int Sum(int a,int b);
int passbyreference(int *p)
{
	return *p;
}
int main()
{
	
	///----------Pass By Value-------
    /*	int a=20,b=30;
	int c=Sum(a,b);
	int d=printf("Sum  is =%i\n",c);
	printf("%i",d);*/
	//************PASS BY REFERENCE**************
	int x=10;
	int y = passbyreference(&x);
	printf("%i",y);   
	
	return 0;
}
/*int Sum(int a,int b)
{
	return a+b;
}*/
