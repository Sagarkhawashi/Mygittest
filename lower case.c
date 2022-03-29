#include<stdio.h>
#include<string.h>

void lower(char *s);
int main()
{
	char ch[20];
	printf("Enter a character : ");
	gets(ch);
	lower(ch);
	printf("Lower case character :");
	puts(ch);
	return 0;
}

void lower(char *s){
	
	while(*s!='\0'){
		*s=*s+32;
	
		s++;
	}
}

