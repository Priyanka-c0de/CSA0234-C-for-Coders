#include<stdio.h>
int main(){
int i=1,num;
printf("Enter any num:\n");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
  if(i==num)
     break;
  else
  printf("\n%d",i);
 }
return 0;
}

