#include<stdio.h>
main()
{
	int n=65;
	switch(n)
	{
		case 64:
			printf("Case 64\n");
		break;
		case 'A':// char to int and ViceVersa automatic Type Castind is Done
			printf("Case A\n");
			break;
		default:
			printf("Default Case:\n");
	}
}
