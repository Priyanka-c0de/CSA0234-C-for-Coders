#include<stdio.h>
void rev(char s[100],int i)
{ char tstr[100];
  if(i<0)
    { return 0;}
   printf("%c",s[i]);
   rev(s,i-1);
}
int main()
{
char str[100];
printf("Initialize your string:\n");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]=0;
printf("Reversed string:\n" );
rev(str,strlen(str)-1);
printf("\n");
return 0;
}
