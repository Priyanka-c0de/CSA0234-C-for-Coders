#include<stdio.h>
void fact (int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
       {
        fact*=i;
       }
       printf("%d is the factorial of %d",fact,n);
      return;
}
int main()
{ int num=5;
  fact(num);
return 0;
}
