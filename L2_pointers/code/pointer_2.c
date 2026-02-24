#include <stdio.h>


int main() {
	int x, y; 
	int *pointer_to_x, *pointer_to_y; // Address of integers
	x = 2, y = 3;
	// printf("x: %d, y: %d\n", x, y);

	pointer_to_x = &x;
	pointer_to_y = &y;

	*pointer_to_x = 5; 	// x = 5
	*pointer_to_y = 10;	// only one value is assigned to 10
	// printf("x: %d, y: %d\n", x, y); // 5, 8

	// p -> pointer_to_y -> y
	int **double_pointer = &pointer_to_y;	// Address of pointer variable

	// p -> p1 -> x
	*double_pointer = pointer_to_x;	// p1 = &x; p2 = p1; p2 = &x; changed p2 to point to x.

	
	**double_pointer = 20;

	printf("x: %d, y: %d\n", x, y);

	printf("%lu, %lu, %lu, %lu\n", sizeof(x), sizeof(y), sizeof(pointer_to_x), sizeof(pointer_to_y));

}
