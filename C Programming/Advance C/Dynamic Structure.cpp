#include<stdio.h>
#include<stdlib.h>
struct Dynamic
{
	int Id;
	int Salary;	
};
int main()
{
	struct Dynamic *ptr;
	ptr=(struct Dynamic *)malloc(sizeof(struct Dynamic));
	ptr->Id=12;
	ptr->Salary=15000;
		printf("%d\n",&ptr->Id);
		printf("%d\n",&ptr->Salary);	
		return 0;
}
