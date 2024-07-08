#include<stdio.h>
#include<stdlib.h>
union Ali
{
	int id,Salary;
	char name[20];
};
int main()
{
	union Ali det;
	det.id =1;
	det.Salary=20000;
	//det.name ="Sherazi";
	printf("%i\n",det.id);
	printf("%i\n",det.Salary);
	printf("%i",det.name);
	return 0;
}
