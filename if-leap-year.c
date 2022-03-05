#include<stdio.h>

int main()
{
	int leap;
	printf("Enter the year : ");
	scanf("%d",&leap);
	
	if(leap%400==0)
	{
		if(leap%4==0)
		printf("It is a century year");
		else
		printf("It is not a century leap year");
	}
	else
	{
		if(leap%4==0)
		printf("It is a leap year");
		else
		printf("It is not a leap year");
	}
	return 0;
}
