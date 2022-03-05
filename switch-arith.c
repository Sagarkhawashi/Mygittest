#include<stdio.h>

int main()
{
	int a,b;
	int ch;
	printf("Enter the two integer : ");
	scanf("%d%d",&a,&b);
	printf("1.Add\n2.Sub\n3.Mult\n4.Div\n5.Exits");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("result=%d",a+b);
			break;
		case 2:
			printf("result=%d",a-b);
			break;
		case 3:
			printf("result=%d",a*b);
			break;
		case 4:
			printf("result=%d",a/b);
			break;
		case 5:
			printf("exits(0)");
		default:
			printf("Invalid number ");
				
	}
	return 0;
}
