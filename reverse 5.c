#include<stdio.h>

int main()
{
	int n1,n2,res,num,sum;
	printf("Enter the num :");
	scanf("%d",&num);
	n1=num%10;
	n2=num/10000;
	sum=n1+n2;
	printf("result is %d",sum);
	return 0;
}
