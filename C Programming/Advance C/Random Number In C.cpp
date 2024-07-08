#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	printf("The Random Number is %i\n",rand()%100);
	return 0;
	// It's Create Random Number between 0 to 100
}

