#include<stdio.h>
int add(int x,int y)
{
  int c=x+y;
  printf("Add: %d+%d=%d",x,y,c);
  return;
}
int main()
{ int a=4,b=6;
  add(a,b);
  return 0;
}
