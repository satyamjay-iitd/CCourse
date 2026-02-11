#include <stdio.h>

int main(void) {
    printf("Using while loop:\n");

    int i = 0;                // INITIALIZER
    while (i < 5) {           // CONDITION
        printf("%d\n", i);
        i++;                  // UPDATE
    }

    printf("\nUsing for loop:\n");
    for (int j = 0; j < 5; j++) {
        printf("%d\n", j);
    }

    return 0;
}
