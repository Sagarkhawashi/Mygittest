#include<stdio.h>
#include<string.h>


/*void show()
{
	int total;
	printf("\t\tRGCER\t\t");
	printf("Name:\trollno.:%d\tenrollment\t:%d");
	printf("-------------------------------------------");
	printf("Subject\tTotal marks\tObtained marks\n");
	printf("-------------------------------------------");
	printf("c\t 100\t%d\n",s1);
	printf("c++\t 100\t%d\n",s2);
	printf("java\t 100\t%d\n",s3);
	printf("c#\t 100\t%d\n",s4);
	printf("python\t 100\t%d\n",s5);
	printf("-------------------------------------------");
	printf("\t Total:500\t%d\n",sum);
	printf("\t percentage:%d",per);
	printf("-------------------------------------------");
	
}*/
int main()
{
	int rollno,En,s1,s2,s3,s4,s5,sum;
	float per;
	char name[20];
	
	printf("Enter the name :");
	gets(name);
//	scanf("%s",&name);
	printf("Enter the Roll no. :");
	scanf("%d",&rollno);
	printf("Enter the Enrollment no. :");
	scanf("%d",&En);
	printf("Applied mathematicsI :");                     //marks
	scanf("%d",&s1);
	printf("Engineering Physic :");
	scanf("%d",&s2);
	printf("Engineering Chemistry :");
	scanf("%d",&s3);
	printf("Engineering Graphics :");
	scanf("%d",&s4);
	printf("Engineering Mechanics :");
	scanf("%d",&s5);
	sum=s1+s2+s3+s4+s5;
	per=(float)sum/5;
	printf("\n\t\t\tRGCER\t\t\n");
	printf("-----------------------------------------------------------------\n");
	printf("Name:%s\trollno.:%d\t\tenrollment:%d\n",name,rollno,En);                          //show
	printf("-----------------------------------------------------------------\n");
	printf("Subject\t\t\t|  Total marks\t| Obtained marks\n");
	printf("-----------------------------------------------------------------\n");
	printf("Applied mathematicsI\t|\t100\t|\t %d\n",s1);
	printf("Engineering Physic\t|\t100\t|\t %d\n",s2);
	printf("Engineering Chemistry\t|\t100\t|\t %d\n",s3);
	printf("Engineering Graphics\t|\t100\t|\t %d\n",s4);
	printf("Engineering Mechanics\t|\t100\t|\t %d\n",s5);
	printf("-----------------------------------------------------------------\n");
	printf("\t\t\t Total:500\t\t%d\n",sum);
	printf("\t\t\tPercentage:%.2f\n",per);
	printf("-----------------------------------------------------------------\n");
	return 0;
}
