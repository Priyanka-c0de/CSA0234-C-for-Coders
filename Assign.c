#include <stdio.h>
union var{
    int num;
    char name [100];
    float decimal;
};
int main(){
    union var u;

    scanf("%d",&u.num);
    printf("Integer : %d\n",u.num);

    scanf("%s",u.name);
    printf("Charachter:%s\n",u.name);

    scanf("%f",&u.decimal);
    printf("Float :%.2f\n",u.decimal);
    return 0;
}
