#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
enum Arslan
{
	Sunday,Monday,tuesday,Wednesday,Thursday,Friday,Saturday
};
int main()
{
	enum Arslan e1;
	e1 = Sunday;
	printf("Day:%d\n",e1);
	printf("Day:%d\n",e1+1);
	
}

