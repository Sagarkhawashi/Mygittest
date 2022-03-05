#include<stdio.h>
int main()
{
	float GS,BS,HRA,DA,TA;
	printf("enter basic salary");
	scanf("%f",&BS);
	HRA=0.6*BS;
	DA=0.5*BS;
	TA=0.4*BS;
	
	GS=BS+HRA+TA+DA;
	printf("%f",GS);
	
	return 0;
	
	
}
