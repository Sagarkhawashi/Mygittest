#include<stdio.h>

int main()
{
	int amt,note,n1;
	printf("Enter the amount : ");
	scanf("%d",&amt);
	
	printf("Enter the note you want : ");
	scanf("%d",&note);
	
	switch(note)
	{
		case 2000:
			n1=amt/2000;
			amt=amt%2000;
			printf("\n2000x%d=%d",n1,2000*n1);
			printf("\nremaining is %d",amt);
			break;
		case 500:
			n1=amt/500;
			amt=amt%500;
			printf("\n500x%d=%d",n1,500*n1);
			printf("\nremaining is %d",amt);
			break;
		case 100:
			n1=amt/2000;
			amt=amt%2000;
			printf("\n100x%d=%d",n1,100*n1);
			printf("\nremaining is %d",amt);
			break;
		default:
			printf("Note is out of range go home");
			break;
	}
	return 0;
}
