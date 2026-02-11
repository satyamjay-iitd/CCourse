#include <stdio.h>

/* Function declaration (prototype) */
int add(int a, int b);

int main(void) {
    int x = 3;
    int y = 4;

    int result = add(x, y);
    printf("add(%d, %d) = %d\n", x, y, result);

    return 0;
}

/* Function definition */
int add(int a, int b) {
    return a + b;
}
