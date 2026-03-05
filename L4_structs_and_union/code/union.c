#include <stdio.h>

union Data {
  int i;
  float f;
  char str[21];
};

// int main() {
//   union Data data;
//   data.i = 10;
//   data.f = 220.5; // This overwrites the memory where '10' was stored!

//   printf("%d\n", data.i); // This will print "garbage" or a corrupted value.
//   printf("%f\n", data.f);
//   printf("%d\n", sizeof(data));
// }


typedef struct {
    int type; // 0 for int, 1 for float
    union {
        int i;
        float f;
    } data;
} SafeUnion;


void set_int(SafeUnion* u, int i){
  u->type=0;
  u->data.i=i;
}

void set_float(SafeUnion* u, float f){
  u->type=1;
  u->data.f=f;
}

void print_u(SafeUnion* u){
  if(u->type == 0)
    printf("%d\n", u->data.i);
  else if(u->type == 1)
    printf("%f\n", u->data.f);
  else
    printf("Something went horribly wrong\n");
}

int main() {
  SafeUnion u;

  set_int(&u, 10);
  set_float(&u, 101.1);

  print_u(&u);
}

