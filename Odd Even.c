#include<stdio.h>
int main( )
{int num;
 scanf("%d",&num);
  if (num== 0)
    {
        printf("It is nethier Odd nor Even.");
    }
  else
    {
 (num%2==0)?printf("EVEN"):printf("ODD");
    }
return 0;
}

