#include<stdio.h>

int fab(int n){
	static int a=0,b=1,c;
	if(n>=0)
	{
		printf("%d ",c);
		c=a+b;
		a=b;
		b=c;
		fab(--n);
		
	}
	
}

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	fab(n);
	return 0;
}
