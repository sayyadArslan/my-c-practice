#include<stdio.h>
#include<conio.h>
int main()
{
	char str[12],upper[12];
	printf("Enter The String:");
	gets(str);
	int i=0;
	while(str[i] !='\0')
	{
		if(str[i]>='a'&& str[i]<='z')
		{
			upper[i] =str[i]-32;
		}
		else
		{
			upper[i] =str[i];
		}
		i++;
	}
	upper[i]='\0';
	printf("The String Is Converted:");
	puts(upper);
	return 0;
}
