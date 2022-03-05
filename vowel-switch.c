#include<stdio.h>

int main()
{
	int ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\n%c is a vowel",ch);
			break;
		default:
			printf("%c is not a vowel",ch);
		break;
	}
	return 0;
}
