#include<stdio.h>

int fun(int a,int b)
{
	
	if(a>b)
		printf("The lagrest no. is %d",a);
	else
		printf("The lagrest no. is %d",b);
	
}

int main()
{
	int a,b,l;
	printf("Enter the two number : ");
	scanf("%d%d",&a,&b);
	
	fun(a,b);

	return 0;
}
