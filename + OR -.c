#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
        printf("%d is the positive number",n);
    else if(n<0)
        printf("%d is the negative number",n);
    else
        printf("%d is neither positive nor negative",n);


return 0;
}
