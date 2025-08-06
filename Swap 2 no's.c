#include<stdio.h>
int main()
{  int a=1,b=3,t;
   printf("Numbers before swapping:\na=%d ,b=%d",a,b);
   t=a;
   a=b;
   b=t;
   printf("\n\nNumbers after swapping:\na=%d ,b=%d",a,b);
return 0;
}

