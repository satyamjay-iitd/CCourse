#include <stdio.h>
#include <stdlib.h>

struct Date {
  int day;
  int month;
  int year;
};

struct Student {
  int roll;
  struct Date dob;
};

// int main() {
//     struct Student s1 = {
//         1,
//         {10, 5, 2003}
//     };

//     printf("DOB: %d/%d/%d\n",
//            s1.dob.day,
//            s1.dob.month,
//            s1.dob.year);

//     return 0;
// }

struct Node {
  int data;
  struct Node *next;
};

typedef struct Node Node;

int main() {
  // Node *head = (Node *)malloc(sizeof(Node));
  // Node *next = (Node *)malloc(sizeof(Node));

  // head->data = 1;
  // head->next = next;

  // next->data = 2;
  // next->next = NULL;

  Node next = {2, NULL};
  Node head = {1, &next};
}
