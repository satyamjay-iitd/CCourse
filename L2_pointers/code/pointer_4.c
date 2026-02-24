#include <stdint.h>
#include<stdio.h>
#define N 6

// int main() {
// 	uint32_t a[] = {1, 2, 3, 4, 5};
// 	printf("what is a:- %d\n", a);
// 	printf("what is a:- %d\n", *a);
// 	printf("what is a:- %d\n", *(a+4));
// 	printf("what is a:- %d\n", a[4]);
	// printf("what is a:- %d\n", *(a+1));
	// printf("what is a:- %d\n", a[1]);
	
// 	uint16_t *b = (uint16_t *)a;
// 	printf("what is a:- %d\n", b[4]);
// }

// 54 bytes
// hello,0..hope0....you0.....are0.....learning0c0.......
// ^a[0]    ^a[1]    ^a[2]    ^a[3]    ^a[4]    ^a[5]
// ^a
//
// hello,0hope0you0are0learning0c0
// ^b0    ^b1  ^b2 ^b3 ^b4      ^b5
//
// b0 b1 b2 b3 b4 b5
// ^b

int main() {
	char a[][9] = {"hello,", "hope", "you", "are", "learning", "c"};
	for(int i = 0; i < N; i ++) {
		printf("%s ", a[i]);
	}
	printf("\na: %d a[0]: %d\n", a, a[0]);
	for(int i = 1; i < N; i ++) {
		printf("a[%d]: %d, a[%d] - a[%d]: %ld\n", i, a[i], i, i-1, a[i] - a[i-1]);
	}

	// printf("\n----------\n");

	char *b[] = {"hello,", "hope", "you", "are", "learning", "c"};
	for(int i = 0; i < N; i ++) {
		printf("%s ", b[i]);
	}

	printf("\nb: %p b[0]: %p\n", b, b[0]);
	for(int i = 1; i < N; i ++) {
		printf("b[%d]: %p, b[%d] - b[%d]: %ld\n", i, b[i], i, i-1, b[i] - b[i-1]);
	}
}
