#include<stdio.h>

int main()
{
	float r,h,volume;                                  //declaration
	
	printf("Enter the r :");                                           //initialization          
	scanf("%f",&r);
	printf("Enter the h :");
	scanf("%f",&h);
	
	volume=(3.14*r*r*h)/3;                              //logic
	printf("Volume of cone=%f",volume);            //output
	
	return 0;
}
