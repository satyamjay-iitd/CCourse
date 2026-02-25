#include <stdio.h>

extern char __executable_start;
extern char _etext;

int main() {
    unsigned char *start = (unsigned char *)&__executable_start;
    unsigned char *end   = (unsigned char *)&_etext;

    printf("Runtime .text section in memory:\n");
    printf("Start: %p\n", start);
    printf("End  : %p\n\n", end);

    for (unsigned char *p = start; p < end; p++) {
        printf("%02x ", *p);
        if (((p - start + 1) % 16) == 0)
            printf("\n");
    }

    printf("\n");
    return 0;
}
