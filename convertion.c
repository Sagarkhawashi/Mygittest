#include<stdio.h>
#include<string.h>

void convert(char *s,char *s1);
int main()
{
	char str1[20],str2[20];
	printf("Enter the string :");
	gets(str1);
	
	convert(str1,str2);
	printf("After conversion :\n");
	puts(str2);
	return 0;
}
void convert(char *s,char *s1){
	
	while (*s!= '\0') {
      *s1=*s;
      ++s;
      ++s1;
}
	
	
}
