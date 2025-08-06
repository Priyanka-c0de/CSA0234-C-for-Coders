#include<stdio.h>
 int prime ( int num)
{
 int flag=0;
 if (num==1 && num==0)
    {
     printf("Its is not a Prime number");
    }
 else
    {
    for(int i=2;i<=num/2;i++)
        { if(num%i==0)
          flag=1;
          break;
        }
       if (flag)
           printf("%d is not the prime number\n ",num);
       else
           printf("%d is the prime number.",num);
    }
 }
int main()
{  int n=11;
   prime(n);
   return 0;
}
