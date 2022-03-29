#include<stdio.h>

int main()
{
	int i,n,a,b,c;
	printf("Enter the number : ");
	scanf("%d",&n);
	a=0;
	b=1;
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",c);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
