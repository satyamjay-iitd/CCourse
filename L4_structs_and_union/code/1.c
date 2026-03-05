#include <stdio.h>
#include <string.h>

struct Student {
    char name[50]; // 50 bytes
    int roll;      // 4 bytes
    float marks;   // 4 bytes
    // char s;        // 1 byte
};


typedef struct {
    int x;
    int y;
} Point;


// 0 ... 57, 58...115, 116..

int main() {
    struct Student s1;
    Point p1 = {1, 2};

    s1.roll = 1;
    strcpy(s1.name, "Rahul");
    s1.marks = 85.5;

    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    printf("Size: %d\n", sizeof(struct Student));
    printf("Size: %d\n", sizeof(Point));

    return 0;
}
