#include<stdio.h>
union value {
    int int_num;
    float float_num;
};

int main(){
    union value v;

    v.int_num = 10;
    printf("Integer:%d\n", v.int_num);

    v.float_num = 20.5f;
    printf("New Float Value :%.2f\n", v.float_num);

    return 0;
}
