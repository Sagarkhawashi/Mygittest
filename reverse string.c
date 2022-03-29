#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];
	
	printf("Enter the string");
	gets(str1);
	
	strrev(str1);
	printf("%s",str1);
	return 0;
}
