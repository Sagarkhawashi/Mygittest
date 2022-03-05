#include<stdio.h>

int main()
{
	char vowel[1];
	printf("Enter the Character :");
	gets(vowel);
	
	if(strcmp(vowel,"a")==0 || strcmp(vowel,"e")==0 || strcmp(vowel,"i")==0 || strcmp(vowel,"o")==0 || strcmp(vowel,"u")==0)
	{
		printf(" %s is a vowel ",vowel);
	}
	else
	{
		printf(" %s is not a vowel ",vowel);
	}
	return 0;
}
