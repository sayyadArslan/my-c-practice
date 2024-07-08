#include<stdio.h>
#include<conio.h>
struct Structure
{	
	int Id;
	int Salary;
};
int main()
{
	struct Structure a,*ptr;
	a.Id=10;
	a.Salary=22000;
	ptr=&a;
	printf("%d\n",&ptr->Id);
	printf("%d\n",&ptr->Salary);
	return 0;
}
