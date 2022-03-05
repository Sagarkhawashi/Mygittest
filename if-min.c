#include<stdio.h>

int main()
{
	int a,b,c,min;
	printf("Enter the value of a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	min=a;
	if(a<b)
	{
		if(a<c)
		min=a;
		else
		min=c;
	}
	else
	{
		if(b<c)
		min=b;
		else
		min=c;
	}
	printf("min value is %d",min);
	return 0;
}
