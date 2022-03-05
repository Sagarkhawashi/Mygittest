#include<stdio.h>
#include<conio.h>
void main(){
 char *m;
 m=(char*)malloc(12*sizeof(char));


 if(m==NULL)
 printf("Couldn't able to alloacte memory.");
 else {
  strcpy(m,"Hello");
  printf("Dynamic memory allocated content %s",m);
 }
 getch();
}
