#include<stdio.h>

	void s1();
	void s2();
	void s3();
	void s4();
	void s5();
	void show();

int main()
{
	int rollno1,mob_no1,batch_time1;
	char name1[20],clg1[20],branch1[20];
	int rollno2,mob_no2,batch_time2;
	char name2[20],clg2[20],branch2[20];
	int rollno3,mob_no3,batch_time3;
	char name3[20],clg3[20],branch3[20];
	int rollno4,mob_no4,batch_time4;
	char name4[20],clg4[20],branch4[20];
	int rollno5,mob_no5,batch_time5;
	char name5[20],clg5[20],branch5[20];
	s1();
	s2();
	s3();
	s4();
	s5();
//	show();
	printf("\n\tStudent Information Management Application");
	
	printf("\nAll details of our c-c++ batch");
	printf("\n----------------------------------------------------------------");
	printf("\n Name\tRollno \tMobile number\tCollege Name\tBatch Time\tBranch Name");
	printf("\n----------------------------------------------------------------");
	printf("\n %s\t %d\t %d\t %s\t %d\t %s\t",name1,rollno1,mob_no1,clg1,batch_time1,branch1);
	printf("\n %s\t %d\t %d\t %s\t %d\t %s\t",name2,rollno2,mob_no2,clg2,batch_time2,branch2);
	printf("\n %s\t %d\t %d\t %s\t %d\t %s\t",name3,rollno3,mob_no3,clg3,batch_time3,branch3);
	printf("\n %s\t %d\t %d\t %s\t %d\t %s\t",name4,rollno4,mob_no4,clg4,batch_time4,branch4);
	printf("\n %s\t %d\t %d\t %s\t %d\t %s\t",name5,rollno5,mob_no5,clg5,batch_time5,branch5);
	printf("\n----------------------------------------------------------------");
	return 0;
	
}

void s1()
{
	int rollno1,mob_no1,batch_time1;
	char name1[20],clg1[20],branch1[20];
	
	
	printf("Enter your Name : ");
	gets(name1);
	printf("Enter your College Name : ");
	gets(clg1);
	printf("Enter your roll number : ");
	scanf("%d",&rollno1);
	printf("Enter your mobile number : ");
	scanf("%d",&mob_no1);
	printf("Enter your Batch time : ");
	scanf("%d",&batch_time1);
	printf("Enter your Branch name : ");
	scanf("%[^\n]",&branch1);
}

void s2()
{
	int rollno2,mob_no2,batch_time2;
	char name2[20],clg2[20],branch2[20];
	
	printf("Enter your Name : ");
	gets(name2);
	printf("Enter your roll number : ");
	scanf("%d",&rollno2);
	printf("Enter your mobile number : ");
	scanf("%d",&mob_no2);
	printf("Enter your College Name : ");
	gets(clg2);
	printf("Enter your Batch time : ");
	scanf("%d",&batch_time2);
	printf("Enter your Branch name : ");
	gets(branch2);
}

void s3()
{
	int rollno3,mob_no3,batch_time3;
	char name3[20],clg3[20],branch3[20];
	
	
	printf("Enter your Name : ");
	gets(name3);
	printf("Enter your roll number : ");
	scanf("%d",&rollno3);
	printf("Enter your mobile number : ");
	scanf("%d",&mob_no3);
	printf("Enter your College Name : ");
	gets(clg3);
	printf("Enter your Batch time : ");
	scanf("%d",&batch_time3);
	printf("Enter your Branch name : ");
	gets(branch3);
}

void s4()
{
	int rollno4,mob_no4,batch_time4;
	char name4[20],clg4[20],branch4[20];
	
	printf("Enter your Name : ");
	gets(name4);
	printf("Enter your roll number : ");
	scanf("%d",&rollno4);
	printf("Enter your mobile number : ");
	scanf("%d",&mob_no4);
	printf("Enter your College Name : ");
	gets(clg4);
	printf("Enter your Batch time : ");
	scanf("%d",&batch_time4);
	printf("Enter your Branch name : ");
	gets(branch4);
}

void s5()
{
	int rollno5,mob_no5,batch_time5;
	char name5[20],clg5[20],branch5[20];
	
	printf("Enter your Name : ");
	gets(name5);
	printf("Enter your roll number : ");
	scanf("%d",&rollno5);
	printf("Enter your mobile number : ");
	scanf("%d",&mob_no5);
	printf("Enter your College Name : ");
	gets(clg5);
	printf("Enter your Batch time : ");
	scanf("%d",&batch_time5);
	printf("Enter your Branch name : ");
	gets(branch5);
}

/*void show()
{
	printf("\n\tStudent Information Management Application");
	
	printf("\nAll details of our c-c++ batch");
	printf("\n----------------------------------------------------------------");
	printf("\n Name\tRollno \tMobile number\tCollege Name\tBatch Time\tBranch Name");
	printf("\n----------------------------------------------------------------");
	printf("\n %s\t %d\t %d\t %s\t %d\t %s\t",name1,rollno1,mob_no1,clg1,batch_time1,branch1);
	printf("\n %s\t %d\t %d\t %s\t %d\t %s\t",name2,rollno2,mob_no2,clg2,batch_time2,branch2);
	printf("\n %s\t %d\t %d\t %s\t %d\t %s\t",name3,rollno3,mob_no3,clg3,batch_time3,branch3);
	printf("\n %s\t %d\t %d\t %s\t %d\t %s\t",name4,rollno4,mob_no4,clg4,batch_time4,branch4);
	printf("\n %s\t %d\t %d\t %s\t %d\t %s\t",name5,rollno5,mob_no5,clg5,batch_time5,branch5);
	printf("\n----------------------------------------------------------------");
	
	
}*/
