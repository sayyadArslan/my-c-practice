#include<stdio.h>
#include<string.h>
struct Arslan
{
	int Id,Salary;
	char Name[20];	
};
int main()
{
	struct Arslan Detail, Des;
	printf("Enter Id:\n");
 	scanf("%i",&Detail.Id);
 	printf("Enter Salary:");
	scanf("%i\n",&Detail.Salary);
	
	printf("Enter Name:\n");
	scanf("%s\n",&Detail.Name);
	
	printf("your Id:%i\n",Detail.Id);
	printf("Your Salary:%i\n",Detail.Salary);
	printf("Your Name:%s\n",Detail.Name);
	
	printf("your Id:%i\n",Des.Id);
	printf("Your Salary:%i\n",Des.Salary);
	printf("Your Name:%s\n",Des.Name);
	
	return 0;
}
