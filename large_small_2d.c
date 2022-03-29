#include<stdio.h>

int main()
{
	int arr[3][3],i,j,small,large;
	printf("Enter the array element");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
			
		}
		printf("\n");
	}
	small=large=arr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			if(arr[i][j]<small)
				small=arr[i][j];
			if(arr[i][j]>large)
				large=arr[i][j];	
		}
	}
	printf("Small=%d and large=%d",small,large);
	
	return 0;
}
