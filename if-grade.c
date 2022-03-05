#include<stdio.h>

int main()
{
	int p1,p2,p3,p4,total,per;
	printf("Enter the p1,p2,p3,p4 :");
	scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
	char grade;
	total=p1+p2+p3+p4;
	per=total/4.0;
	
	if(per>=90)
	grade='A';
	else if(per>=80 && per<90)
	grade='B';
	else if(per>=70 && per<80)
	grade='C';
	else if(per>=60 && per<80)
	grade='D';
	else if(per>=50 && per<60)
	grade='E';
	else 
	printf("fail");
	
	printf("%d %d %c",total,per,grade);
	return 0;
}
