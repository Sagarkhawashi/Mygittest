#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90)
	{
		printf("%c is a upper case ",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("%c is a Lower case ",ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("%c is a digits",ch);
	}
	else
	{
		printf("%c is a special symbol ",ch);
	}
	return 0;
}
