#include<stdio.h>
#include<conio.h>
struct Structure
{
	int Code;
	struct Arslan
	{
		int Id;
		int Salary;
	}ars;
};
int main()
{
	struct Structure E;
	E.Code=10;
	E.ars.Id=20;
	printf("%d\n",E.ars.Id);
	printf("%d\n",E.Code);
	return 0;
}
