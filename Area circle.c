#include<stdio.h>
 int circle( int radius)
{
 float area =3.14*radius*radius;
 printf("%.2f is the area of circle with radius %d",area,radius);
 return ;

 }
int main()
{  int r=6;
   circle(r);
   return 0;
}
