#include<stdio.h>

int main()
{
	int arr[10]={1,2,3,8,56,5,65,12,23,10};
	int small,large,i;
	
	
	small=large=arr[0];
	for(i=0;i<10;i++)
	{
		printf("Array elements are :%d\n",arr[i]);
		if(arr[i]<small)
			small=arr[i];
		if(arr[i]>large)
			large=arr[i];
	}
	printf("small =%d and large=%d",small,large);
	return 0;
	
}
