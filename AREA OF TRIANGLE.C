#include<stdio.h>

int main()
{
	float b,h,area;                                  //declaration
	
	printf("Enter the b: ");                                           //initialization          
	scanf("%f",&b);
	printf("Enter the h: ");
	scanf("%f",&h);
	 
	area=0.5*h*b;                                       //logic
	printf("Area of triangle=%f",area);            //output
	
	return 0;
}
