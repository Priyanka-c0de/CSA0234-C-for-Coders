#include<stdio.h>
int main(){
int unit,bill;
char ch;
 do{
    printf("\nTOTAL UNITS CONSUMED:");
    scanf("%d",&unit);
    if(unit>0|| unit<=100)
         bill=(unit)*2;
    else if(unit>=101 ||unit<=300)
        bill=200+(unit-100)*3;
    else
        bill=200+600+(unit-300)*5;
    printf("TOTAL ELECTRICITY BILL:%d\n",bill);

 printf("\nDo you want to calculate new electricity bill?(Y/N):\n");
 scanf(" %c",&ch);
 }
while(ch=='y'||ch=='Y');
return 0;
}
