#include <stdio.h>

int main(void) {
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("Positive\n");
    }
    else if (x == 0) {
        printf("Zero\n");
    }
    else {
        printf("Negative\n");
    }

    return 0;
}
