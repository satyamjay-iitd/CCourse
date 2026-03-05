#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

struct Student* createStudent(int roll, float marks) {
    struct Student s;
    s.roll = roll;
    s.marks = marks;
    return &s;
}

int main() {
    struct Student *ptr = createStudent(1, 95.5);

    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
