#include<stdio.h>
#include<string.h>


int main()
{
	unsigned long int rollno1,mob_no1,batch_time1;
	unsigned long int rollno2,mob_no2,batch_time2;
	unsigned long int rollno3,mob_no3,batch_time3;
	unsigned long int rollno4,mob_no4,batch_time4;
	unsigned long int rollno5,mob_no5,batch_time5;
	
	char name1[20],name2[20],name3[20],name4[20],name5[20];
	char college_name1[20],college_name2[20],college_name3[20],college_name4[20],college_name5[20];
	char branch_name1[20],branch_name2[20],branch_name3[20],branch_name4[30],branch_name5[30];
	
	
	printf("\nEnter your Name : ");
	gets(name1);
	printf("\nEnter your College Name : ");
	gets(college_name1);
	printf("\nEnter your roll number : ");
	scanf("%ud",&rollno1);
	printf("\nEnter your mobile number : ");
	scanf("%ud",&mob_no1);
	printf("\nEnter your Batch time : ");
	scanf("%ud",&batch_time1);
//	fflush(stdin);
	printf("\nEnter your Branch name : ");
	gets(branch_name1);
	gets(branch_name1);
	
/*	printf("Enter your Name : ");
	gets(name2);
	printf("Enter your roll number : ");
	scanf("%ld",&rollno2);
	printf("Enter your mobile number : ");
	scanf("%ld",&mob_no2);
	printf("Enter your College Name : ");
	gets(college_name2);
	gets(college_name2);
	printf("Enter your Batch time : ");
	scanf("%ld",&batch_time2);
	printf("Enter your Branch name : ");
	gets(branch_name2);
	gets(branch_name2);
	
	printf("Enter your Name : ");
	gets(name3);
	printf("Enter your roll number : ");
	scanf("%ld",&rollno3);
	printf("Enter your mobile number : ");
	scanf("%ld",&mob_no3);
	printf("Enter your College Name : ");
	gets(college_name3);
	gets(college_name3);
	printf("Enter your Batch time : ");
	scanf("%ld",&batch_time3);
	printf("Enter your Branch name : ");
	gets(branch_name3);
	gets(branch_name3);
	
	printf("Enter your Name : ");
	gets(name4);
	printf("Enter your roll number : ");
	scanf("%ld",&rollno4);
	printf("Enter your mobile number : ");
	scanf("%ld",&mob_no4);
	printf("Enter your College Name : ");
	gets(college_name4);
	gets(college_name4);
	printf("Enter your Batch time : ");
	scanf("%ld",&batch_time4);
	printf("Enter your Branch name : ");
	gets(branch_name4);
	gets(branch_name4);
	
	printf("Enter your Name : ");
	gets(name5);
	printf("Enter your roll number : ");
	scanf("%ld",&rollno5);
	printf("Enter your mobile number : ");
	scanf("%ld",&mob_no5);
	printf("Enter your College Name : ");
	gets(college_name5);
	gets(college_name5);
	printf("Enter your Batch time : ");
	scanf("%ld",&batch_time5);
	printf("Enter your Branch name : ");
	gets(branch_name5);
	gets(branch_name5);*/
	
	printf("\n\n\n\tStudent Information Management Application");
	
	printf("\n\tAll details of our c-c++ batch");
	printf("\n----------------------------------------------------------------");
	printf("\n Name\t\t| Rollno \t|  Mobile number\t|College Name\t\tBatch Time\tBranch Name");
	printf("\n----------------------------------------------------------------");
	printf("\n %s\t\t| %ud\t| %ld\t| %s\t| %ud\t| %s\t|",name1,rollno1,mob_no1,college_name1,batch_time1,branch_name1);
	printf("\n %s\t\t| %ld\t| %ld\t| %s\t| %ld\t| %s\t|",name2,rollno2,mob_no2,college_name2,batch_time2,branch_name2);
	printf("\n %s\t\t| %ld\t| %ld\t| %s\t| %ld\t| %s\t|",name3,rollno3,mob_no3,college_name3,batch_time3,branch_name3);
	printf("\n %s\t\t| %ld\t| %ld\t| %s\t| %ld\t| %s\t|",name4,rollno4,mob_no4,college_name4,batch_time4,branch_name4);
	printf("\n %s\t\t| %ld\t| %ld\t| %s\t| %ld\t| %s\t|",name5,rollno5,mob_no5,college_name5,batch_time5,branch_name5);
	printf("\n----------------------------------------------------------------");
	
	return 0;
}
