#include<stdio.h>

int main()
{
	int i,no,fact;
	printf("Enter the number : ");
	scanf("%d",&no);
	fact=1;
	
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d = %d",no,fact);
	return 0;
}
