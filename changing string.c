#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],str2[20];
	
	printf("Enter the string");
	gets(str1);
	gets(str2);
	strcpy(str1,str2);
	printf("%s",str1);
	return 0;
}
