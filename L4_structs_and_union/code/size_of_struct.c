#include <stdio.h>

/*
|cssP|iiii|dPPP|
|iiii|cssd|
*/

struct MixedData {
    char c; // 1 byte
    short s; // 2 bytes
    int i;   // 4 bytes - largest structure member
    char d; // 1 byte
    // 3 byte padding
};

struct MixedData2 {
    int i;   // 4 bytes - largest structure member
    short s; // 2 bytes
    char c; // 1 byte
    char d; // 1 byte
};

int main() {
    printf("Size: %d\n", sizeof(struct MixedData));
    printf("Size: %d\n", sizeof(struct MixedData2));

    return 0;
}
