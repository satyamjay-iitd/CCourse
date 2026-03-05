#include <stdlib.h>

struct Student {
  int roll;
  float marks;
};

void updateMarks(struct Student *s) {
  s->marks += 5;
}

int main() {
  struct Student ptr = {1, 1.0};
  updateMarks(&ptr);
  return 0;
}
