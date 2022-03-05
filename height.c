#include<stdio.h>

int main()
{
	float feet,inche,cm;
	printf("Enter the height in feet :");
	scanf("%f",&feet);
	inche=12*feet;
	cm=2.54 * inche;
	printf("Height is %.2f inche",inche);
	printf("\nHeigth is %.2f cm",cm);
	return 0;
}
