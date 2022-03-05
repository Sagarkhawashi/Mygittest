#include<stdio.h>

int main()
{
	int s1,s2,s3;
	
	printf("Enter the 3 paper marks :");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1>=45 && s2>=45 && s3>=45)
		printf("pass ");
	else
		printf("Fail");
}
