#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],str2[20];
	
	printf("Enter the string");
	gets(str1);
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("both are equal");
	}
	else
		printf("Not equal");
		
	return 0;
}
