#include <stdio.h>

int main(void) {
    int count = 10;
    double price = 9.99;
    char grade = 'A';
    char *hello = "hello";

    printf("Values:\n");
    printf("count = %d\n", count);
    printf("price = %f\n", price);
    printf("grade = %c\n", grade);
    printf("string = %s\n", hello);

    // printf("\nSizes (in bytes):\n");
    // printf("sizeof(int)    = %zu\n", sizeof(int));
    // printf("sizeof(double) = %zu\n", sizeof(double));
    // printf("sizeof(char)   = %zu\n", sizeof(char));

    printf("\nSizes of variables:\n");
    printf("sizeof(count) = %zu\n", sizeof(count));
    printf("sizeof(price) = %zu\n", sizeof(price));
    printf("sizeof(grade) = %zu\n", sizeof(grade));
    printf("sizeof(hello) = %zu\n", sizeof(hello));

    return 0;
}
