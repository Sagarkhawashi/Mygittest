#include<stdio.h>

int main()
{
	int l,b,h,volume;                                  //declaration
	printf("Enter the l,b,h :");
	scanf("%d%d%d",&l,&b,&h);
	volume=l*b*h;                                       //logic
	printf("Volume of cubiod=%d",volume);            //output
	
	return 0;
}
