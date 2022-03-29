#include<stdio.h>
int main()
{
	int sum=0,i,rem;
	
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		else
		{
			continue;
		}
		
	}
	printf("sum of 1to20 even number = %d",sum);
}
