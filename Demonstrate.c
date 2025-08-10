#include <stdio.h>
#include <string.h>
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data myData;
    union Data initializedData = {.i = 100}; // Initializes 'i'
    printf("Initialized int value: %d\n", initializedData.i);

    printf("\nDemonstrating memory sharing:\n");

    myData.i = 10;
    printf("After assigning int: myData.i = %d\n", myData.i);
    printf("Size of union: %lu bytes (size of largest member)\n", sizeof(myData));

    myData.f = 22.5;
    printf("After assigning float: myData.f = %.2f\n", myData.f);

    strcpy(myData.str, "Hello Union");
    printf("After assigning string: myData.str = %s\n", myData.str);

    printf("Currently active member (string): %s\n", myData.str);

    return 0;
}
