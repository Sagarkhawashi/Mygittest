#include<stdio.h>
#include<string.h>
int main()
{
	int p1,p2,p3,total,per,f,m;
	char gender[1];
	printf("Enter the 3 paper marks :");
	scanf("%d%d%d",&p1,&p2,&p3);
	printf("Enter your gender(F/M): ");
	fflush(stdin);
	gets(gender);
	total=p1+p2+p3;
	per=total/3;
	 
	if(62<per && strcmp(gender,"f")==0)
	
		printf("She can take admission ");
	
	else
	
		printf("She can't take admission ");
	
	
/*	if(per>=85 && strcmp(gender,'m')==0)
	{
		printf("he can take admission");
	}
	else
	{
		printf("he can't take admission ");
	}*/
	return 0;
}
