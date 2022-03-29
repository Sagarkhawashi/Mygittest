#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],str2[20],s[50];
	
	printf("Enter the string");
	gets(str1);
	gets(str2);
	
	printf("%s",strcat(str1,str2));
	return 0;
}
