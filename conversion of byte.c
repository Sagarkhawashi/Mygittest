#include<stdio.h>
int main()
{
	unsigned long int byte,bits,kb,mb,gb,tb;
	printf("Enter the bytes:");
	scanf("%ld",&byte);
	bits=byte/8;
	kb=bits/1024;
	mb=kb/1024;
	gb=mb/1024;
	tb=gb/1024;
	printf("%ld bits \n%ld kb \n%ld mb \n%ld gb \n%ld tb ",bits,kb,mb,gb,tb);
	return 0;
}
