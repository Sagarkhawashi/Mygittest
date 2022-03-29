#include<stdio.h>
#include<string.h>

int main()
{
	char ch[20];
	printf("Enter the character : ");
	gets(ch);
	printf("\ncharacter : %s",strupr(ch));
	
	return 0;
}

