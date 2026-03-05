#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int roll;
  float marks;
} Student;

int main() {
  Student *ptr = (Student *)malloc(sizeof(Student));

  ptr->roll = 1;
  ptr->marks = 92.5;

  printf("%d %.2f\n", (*ptr).roll, (*ptr).marks);
  printf("%d %.2f\n", ptr->roll, ptr->marks);

  free(ptr);
  return 0;
}
