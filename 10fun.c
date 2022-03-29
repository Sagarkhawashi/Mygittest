#include<stdio.h>

int add(int a,int b);
int sub(int num1,int num2);
int main()
{
	int ch;
	printf("Enter the choice from below option.");
	
	printf("\n1.Add\n2.Sub\n3.multiply\n4.Divide\n5.armstrong\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
			int a,b,ans;
			printf("Enter the number : ");
			scanf("%d%d",&a,&b);
			add(a,b);
			return 0;}
			break;
			
		case 2:
			{
				int num1,num2;
				printf("Enter the number : ");
				scanf("%d%d",&num1,&num2);
				sub(num1,num2);
				return 0;
			}
			break;
			
		case 3:
			{
				int n1,n2,num,mul;
	printf("Enter the digit num :");
	scanf("%d",&num);
	n1=num%10;
	n2=num/100000000;
	mul=n1*n2;
	printf("multiplication is %d",mul);
	return 0;
			}
	}
}

int add(int a,int b){
	int ans;                                           
	
	ans=a+b;               
	printf("Add=%d",ans);
}

int sub(int num1,int num2){
	int ans;     
	ans=num1-num2;            
	printf("Sub=%d",ans);            
	
	return 0;
}
