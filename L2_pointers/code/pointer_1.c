#include <stdio.h>

int main(){
  int a = 1;

  // Declaration + Initialization;
  // & on the RHS is called reference operator;
  // * on the LHS is simply saying this variable stores the address to a data of type int;
  int* pointer_to_a = &a;
 	printf("pointer_to_a: %d\n", pointer_to_a);
 	printf("a: %d\n", *pointer_to_a);
 	*pointer_to_a = 2;
 	printf("a is now: %d\n", a);


  float f = 2.0;
  pointer_to_a = &f;
 	printf("pointer_to_a: %d\n", pointer_to_a);

  printf("%f\n", *pointer_to_a);  // Undefined behaviour
  printf("%d\n", *pointer_to_a);

  return 0;
}



