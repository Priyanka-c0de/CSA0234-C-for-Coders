#include<stdio.h>
int main()
{   char a;
    scanf("%c",&a);
    if(a=='A' || a=='a' || a=='I' || a=='i'|| a=='U'||a=='u' || a=='e' || a=='E' || a=='o'||a=='O')
        printf("%c is a Vowel",a);
    else
        printf("%c is a Consonant",a);
return 0;
}
