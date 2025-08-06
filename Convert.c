#include<stdio.h>
 void temp(float f)
{
 float c =(f-32)/1.8;
 printf("%.2f is the temperature in celsius of given %.0f ",c,f );
 }
int main()
{  float f=96;
   temp(f);
   return 0;
}
