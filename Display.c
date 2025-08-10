#include <stdio.h>
union Value {
    char c_val;
    int i_val;
    float f_val;
};

int main() {
    union Value data;
    char choice;

    printf("Enter the type of value you want to enter (c for char, i for int, f for float): ");
    scanf(" %c", &choice);
    switch (choice) {
        case 'c':
            printf("Enter a character: ");
            scanf(" %c", &data.c_val);
            printf("You entered: %c\n", data.c_val);
            break;
        case 'i':
            printf("Enter an integer: ");
            scanf("%d", &data.i_val);

            printf("You entered: %d\n", data.i_val);
            break;
        case 'f':
            printf("Enter a float: ");
            scanf("%f", &data.f_val);
            printf("You entered: %f\n", data.f_val);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
