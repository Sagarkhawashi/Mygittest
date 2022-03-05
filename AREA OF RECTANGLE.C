#include<stdio.h>

int main()
{
	int l,b,area;                                  //declaration
	
	printf("Enter the length : ");                                           //initialization          
	scanf("%d",&l);
	printf("Enter the breadth : ");
	scanf("%d",&b);
	
	area=l*b;                                       //logic
	printf("Area of rectangle=%d",area);            //output
	
	return 0;
}
