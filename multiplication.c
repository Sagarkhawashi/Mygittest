#include<stdio.h>
#include<stdlib.h>
#define row1 3
#define col1 3
#define row2 3
#define col2 3

int main(){
 int m1[row1][col1],m2[row2][col2],m3[row1][col2];
 int i,j,k;

 printf("Enter matrix m1[%d][%d] row wise:",row1,col1);
 for(i=0;i<row1;i++){
  for(j=0;j<col1;j++){
   scanf("%d",&m1[i][j]);
  }
 }

 printf("Enter matrix m2[%d][%d] row wise:",row2,col2);
 for(i=0;i<row1;i++){
  for(j=0;j<col1;j++)
   scanf("%d",&m2[i][j]);
 }

 printf("Matrix 1:\n");
 for(i=0;i<row1;i++){
  for(j=0;j<col1;j++){
   printf("%4d",m1[i][j]);
  }
  printf("\n");
 }

 printf("Matrix 2:\n");
 for(i=0;i<row1;i++){
  for(j=0;j<col1;j++){
   printf("%4d",m2[i][j]);
  }
  printf("\n");
 }

 /* Multiplication Logic 
 for(i=0;i<row1;i++){
  for(j=0;j<col2;j++){
   m3[i][j]=0;
   for(k=0;k<col1;k++){
    m3[i][j]+=m1[i][k]*m2[k][j];
   }
  }
 }*/
 
 for(i=0;i<row1;i++)
 {
 	for(j=0;j<1;j++)
 	{
 		m3[i][j]=0;
 		for(k=0;k<1;k++)
 		{
 			m3[i][j]+=m1[i][k]+m2[k][j];
			 	
		}
	}
 }

 printf("Resultant Matrix:\n");
 for(i=0;i<row1;i++){
  for(j=0;j<col1;j++){
   printf("%4d",m3[i][j]);
  }
  printf("\n");
 }
 return 0;
}
