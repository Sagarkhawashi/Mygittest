#include<stdio.h>

int num(no);

int main()
{
	int no;
	printf("Enter the number : ");
	scanf("%d",&no);
	
	num(no);
	return 0;
}

int num(no){
	if(no%2==0)
		printf("%d is a even number",no);
	else
		printf("%d is a odd number",no);
		
	
}
