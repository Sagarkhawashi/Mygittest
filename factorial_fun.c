#include<stdio.h>

int facto(n){
	int fact=1;
	
	while(n>0)
	{
		
		fact=fact*n;
		n--;
	}
	
return fact;
}

int main()
{
	int no,fact;
	printf("Enter the number : ");;
	scanf("%d",&no);
	
	fact=facto(no);
	printf("Factorial of %d :%d",no,fact);
	
	return 0;
}
