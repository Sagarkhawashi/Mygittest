#include<stdio.h>

int main()
{
	float bs,HRA,DA,TA,gs;
	printf("Enter the basic salary :");
	scanf("%f",&bs);
	HRA=(3*bs)/5;
	printf("HRA Salary %f\n",HRA);
	DA=0.5*bs;
	printf("DA Salary %f\n",DA);
	TA=(2*bs)/5;
	printf("TA Salary %f\n",TA);
	gs=HRA+DA+TA;
	printf("gs Salary %f\n",gs);
	return 0;
}

