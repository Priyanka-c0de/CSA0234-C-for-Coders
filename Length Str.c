#include<stdio.h>
int main(){
 int length=0;
 char str[100];
 strcpy(str,"Welcome");
  for(int i=0;str[i]!='\0';i++){
    length++;
  }
  printf("Length of the given string '%s' is %d",str,length);
 }
