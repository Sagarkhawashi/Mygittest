#include<stdio.h>

int main()
{
	char w[3];
	printf("Enter the day :");
	gets(w);
	
	if(strcmp(w,"sat")==0 || strcmp(w,"sun")==0)
	{
		printf("Today is weekend");
	}
	else
	{
		printf("Today is working day");
	}
	return 0;
	
}
